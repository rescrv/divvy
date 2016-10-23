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

/* C */
#include <assert.h>
#include <stdlib.h>
#include <string.h>

/* popt */
#include <popt.h>

/* divvy */
#include <divvy.h>

#define BLOCK_SIZE 4096

int
read_entire_stdin(unsigned char** msg, size_t* msg_sz)
{
    size_t msg_cap = 0;
    unsigned char buf[BLOCK_SIZE];
    assert(*msg == NULL && *msg_sz == 0);

    while (1)
    {
        size_t amt = fread(buf, 1, BLOCK_SIZE, stdin);

        if (ferror(stdin))
        {
            fprintf(stderr, "error reading input\n");
            return -1;
        }

        if (amt == 0)
        {
            break;
        }

        if (*msg_sz + amt > msg_cap)
        {
            unsigned char* tmp = realloc(*msg, *msg_sz + amt + BLOCK_SIZE);
            if (!tmp) return -1;
            *msg = tmp;
            msg_cap += amt + BLOCK_SIZE;
        }

        memmove(*msg + *msg_sz, buf, amt);
        *msg_sz += amt;

        if (feof(stdin))
        {
            break;
        }
    }

    return 0;
}

int
main_divvy(unsigned k, unsigned n)
{
    int rc = EXIT_FAILURE;
    unsigned i = 0;
    unsigned char* msg = NULL;
    size_t msg_sz = 0;
    char** pieces = NULL;
    char* buffers = NULL;

    if (read_entire_stdin(&msg, &msg_sz) < 0) goto cleanup;
    const size_t piece_sz = divvy_piece_size(msg_sz);
    if (!(pieces = malloc(sizeof(char*) * n))) goto cleanup;
    if (!(buffers = malloc(piece_sz * n))) goto cleanup;

    for (i = 0; i < n; ++i)
    {
        pieces[i] = buffers + piece_sz * i;
    }

    if (divvy(k, n, msg, msg_sz, pieces) < 0) goto cleanup;

    for (i = 0; i < n; ++i)
    {
        printf("%s\n", pieces[i]);
    }

    rc = EXIT_SUCCESS;

cleanup:
    if (msg) free(msg);
    if (pieces) free(pieces);
    if (buffers) free(buffers);
    return rc;
}

int
main(int argc, const char* argv[])
{
    int rc = EXIT_SUCCESS;
    int k = 3;
    int n = 9;

    struct poptOption divvy_args[] = {
        POPT_AUTOHELP
        {NULL, 'k', POPT_ARG_INT, &k, 0, "number of pieces necessary to reconstruct the secret", "2+"},
        {NULL, 'n', POPT_ARG_INT, &n, 0, "number of pieces to generate", "[k, 256)"},
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

    if (n >= 256)
    {
        fprintf(stderr, "n must be less than 256\n");
        goto usage;
    }

    if (k < 2)
    {
        fprintf(stderr, "k must be at least 2\n");
        goto usage;
    }

    if (k > n)
    {
        fprintf(stderr, "k must be less than or equal to n\n");
        goto usage;
    }

    const char** args = poptGetArgs(ctx);

    if (args && *args)
    {
        fprintf(stderr, "command takes no positional arguments\n");
        goto usage;
    }

    rc = main_divvy(k, n);
    goto cleanup;

usage:
    poptPrintUsage(ctx, stderr, 0);
    rc = EXIT_FAILURE;

cleanup:
    if (ctx) poptFreeContext(ctx);
    return rc;
}
