/* Copyright (c) 2016, Robert Escriva
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of this project nor the names of its contributors may
 *       be used to endorse or promote products derived from this software
 *       without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#define _WITH_GETLINE

/* C */
#include <assert.h>
#include <stdlib.h>
#include <string.h>

/* POSIX */
#include <unistd.h>

/* popt */
#include <popt.h>

/* divvy */
#include <divvy.h>

int
read_pieces_stdin(char*** pieces, size_t* pieces_sz)
{
    int rc = 0;
    char* line = NULL;
    size_t line_sz = 0;
    size_t pieces_cap = 0;
    assert(*pieces == NULL && *pieces_sz == 0);

    while (1)
    {
        ssize_t amt = getline(&line, &line_sz, stdin);

        if (ferror(stdin) != 0)
        {
            fprintf(stderr, "error reading input\n");
            goto fail;
        }

        if (amt == 0 || (amt < 0 && feof(stdin) != 0))
        {
            break;
        }

        if (*pieces_sz >= pieces_cap)
        {
            pieces_cap = pieces_cap + (pieces_cap >> 1) + 1;
            char** tmp = realloc(*pieces, sizeof(const unsigned char**) * pieces_cap);
            if (!tmp) goto fail;
            *pieces = tmp;
        }

        line[amt - 1] = '\0';
        char* ptr = malloc(amt);
        if (!ptr) goto fail;
        (*pieces)[*pieces_sz] = ptr;
        ++*pieces_sz;
        memmove(ptr, line, amt);

        if (feof(stdin) != 0)
        {
            break;
        }
    }

    rc = 0;
    goto cleanup;

fail:
    rc = -1;

cleanup:
    if (line) free(line);
    return rc;
}

int
main_undivvy()
{
    int rc = EXIT_SUCCESS;
    unsigned char* msg = NULL;
    size_t msg_sz = 0;
    char** pieces = NULL;
    size_t pieces_sz = 0;
    size_t piece_sz = 0;
    size_t i = 0;

    if (read_pieces_stdin(&pieces, &pieces_sz) < 0) goto fail;

    if (pieces_sz == 0)
    {
        fprintf(stderr, "cannot construct secret from zero pieces\n");
        goto fail;
    }

    piece_sz = strlen(pieces[0]);

    for (i = 0; i < pieces_sz; ++i)
    {
        if (strlen(pieces[i]) != piece_sz)
        {
            fprintf(stderr, "pieces must be of equal size\n");
            goto fail;
        }
    }

    if (undivvy((const char*const*)pieces, pieces_sz, &msg, &msg_sz) < 0)
    {
        fprintf(stderr, "failed to reconstruct a valid secret\n");
        goto fail;
    }

    rc = write(STDOUT_FILENO, msg, msg_sz) == msg_sz ? EXIT_SUCCESS : EXIT_FAILURE;
    goto cleanup;

fail:
    rc = EXIT_FAILURE;

cleanup:
    if (msg)
    {
        free(msg);
    }

    for (i = 0; i < pieces_sz; ++i)
    {
        if (pieces[i])
        {
            free(pieces[i]);
        }
    }

    if (pieces)
    {
        free(pieces);
    }

    return rc;
}

int
main(int argc, const char* argv[])
{
    int rc = EXIT_SUCCESS;

    struct poptOption divvy_args[] = {
        POPT_AUTOHELP
        POPT_TABLEEND
    };

    poptContext ctx = NULL;
    ctx = poptGetContext(NULL, argc, argv, divvy_args,
                         POPT_CONTEXT_POSIXMEHARDER);

    while ((rc = poptGetNextOpt(ctx)) != -1)
    {
        if (rc <= 0)
        {
            switch (rc)
            {
                case POPT_ERROR_NOARG:
                case POPT_ERROR_BADOPT:
                case POPT_ERROR_BADNUMBER:
                case POPT_ERROR_OVERFLOW:
                    fprintf(stderr, "%s %s\n", poptStrerror(rc), poptBadOption(ctx, 0));
                    goto usage;
                case POPT_ERROR_OPTSTOODEEP:
                case POPT_ERROR_BADQUOTE:
                case POPT_ERROR_ERRNO:
                default:
                    fprintf(stderr, "logic error in argument parsing\n");
                    goto usage;
            }

            continue;
        }
    }

    const char** args = poptGetArgs(ctx);

    if (args && *args)
    {
        fprintf(stderr, "command takes no positional arguments\n");
        goto usage;
    }

    rc = main_undivvy();
    goto cleanup;

usage:
    poptPrintUsage(ctx, stderr, 0);
    rc = EXIT_FAILURE;

cleanup:
    if (ctx) poptFreeContext(ctx);
    return rc;
}
