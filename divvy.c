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
#include <string.h>

/* libbsd */
#include <bsd/stdlib.h>

/* divvy */
#include "divvy.h"
#include "divvy-internal.h"
#include "base64.h"

#define GENERATOR 3
#define PRIMEPOLY 283

#define DIVVY_API __attribute__ ((visibility ("default")))

void explicit_bzero(void *buf, size_t len);

unsigned char gf_log[] = {0, 0, 25, 1, 50, 2, 26, 198, 75, 199, 27, 104, 51,
    238, 223, 3, 100, 4, 224, 14, 52, 141, 129, 239, 76, 113, 8, 200, 248, 105,
    28, 193, 125, 194, 29, 181, 249, 185, 39, 106, 77, 228, 166, 114, 154, 201,
    9, 120, 101, 47, 138, 5, 33, 15, 225, 36, 18, 240, 130, 69, 53, 147, 218,
    142, 150, 143, 219, 189, 54, 208, 206, 148, 19, 92, 210, 241, 64, 70, 131,
    56, 102, 221, 253, 48, 191, 6, 139, 98, 179, 37, 226, 152, 34, 136, 145, 16,
    126, 110, 72, 195, 163, 182, 30, 66, 58, 107, 40, 84, 250, 133, 61, 186, 43,
    121, 10, 21, 155, 159, 94, 202, 78, 212, 172, 229, 243, 115, 167, 87, 175,
    88, 168, 80, 244, 234, 214, 116, 79, 174, 233, 213, 231, 230, 173, 232, 44,
    215, 117, 122, 235, 22, 11, 245, 89, 203, 95, 176, 156, 169, 81, 160, 127,
    12, 246, 111, 23, 196, 73, 236, 216, 67, 31, 45, 164, 118, 123, 183, 204,
    187, 62, 90, 251, 96, 177, 134, 59, 82, 161, 108, 170, 85, 41, 157, 151,
    178, 135, 144, 97, 190, 220, 252, 188, 149, 207, 205, 55, 63, 91, 209, 83,
    57, 132, 60, 65, 162, 109, 71, 20, 42, 158, 93, 86, 242, 211, 171, 68, 17,
    146, 217, 35, 32, 46, 137, 180, 124, 184, 38, 119, 153, 227, 165, 103, 74,
    237, 222, 197, 49, 254, 24, 13, 99, 140, 128, 192, 247, 112, 7};
unsigned char gf_exp[] = {1, 3, 5, 15, 17, 51, 85, 255, 26, 46, 114, 150, 161,
    248, 19, 53, 95, 225, 56, 72, 216, 115, 149, 164, 247, 2, 6, 10, 30, 34,
    102, 170, 229, 52, 92, 228, 55, 89, 235, 38, 106, 190, 217, 112, 144, 171,
    230, 49, 83, 245, 4, 12, 20, 60, 68, 204, 79, 209, 104, 184, 211, 110, 178,
    205, 76, 212, 103, 169, 224, 59, 77, 215, 98, 166, 241, 8, 24, 40, 120, 136,
    131, 158, 185, 208, 107, 189, 220, 127, 129, 152, 179, 206, 73, 219, 118,
    154, 181, 196, 87, 249,16, 48, 80, 240, 11, 29, 39, 105, 187, 214, 97, 163,
    254, 25, 43, 125, 135, 146, 173, 236, 47, 113, 147, 174, 233, 32, 96, 160,
    251, 22, 58, 78, 210, 109, 183, 194, 93, 231, 50, 86, 250, 21, 63, 65, 195,
    94, 226, 61, 71, 201, 64, 192, 91,237, 44, 116, 156, 191, 218, 117, 159,
    186, 213, 100, 172, 239, 42, 126, 130, 157, 188, 223, 122, 142, 137, 128,
    155, 182, 193, 88, 232, 35, 101, 175, 234, 37, 111, 177, 200, 67, 197, 84,
    252, 31, 33, 99, 165, 244, 7, 9, 27, 45, 119, 153,176, 203, 70, 202, 69,
    207, 74, 222, 121, 139, 134, 145, 168, 227, 62, 66, 198, 81, 243, 14, 18,
    54, 90, 238, 41, 123, 141, 140, 143, 138, 133, 148, 167, 242, 13, 23, 57,
    75, 221, 124, 132, 151, 162, 253, 28, 36, 108, 180, 199, 82, 246, 1, 3, 5,
    15, 17, 51, 85, 255, 26, 46, 114, 150, 161, 248, 19, 53, 95, 225, 56, 72,
    216, 115, 149, 164, 247, 2, 6, 10, 30, 34, 102, 170, 229, 52, 92, 228, 55,
    89, 235, 38, 106, 190, 217, 112, 144, 171, 230, 49, 83, 245, 4, 12, 20, 60,
    68, 204, 79, 209, 104, 184, 211, 110, 178, 205, 76, 212, 103, 169, 224, 59,
    77, 215, 98, 166, 241, 8, 24, 40, 120, 136, 131, 158, 185, 208, 107, 189,
    220, 127, 129, 152, 179, 206, 73, 219, 118, 154, 181, 196, 87, 249, 16, 48,
    80, 240, 11, 29, 39, 105, 187, 214, 97, 163, 254, 25, 43, 125, 135, 146,
    173, 236, 47, 113, 147, 174, 233, 32, 96, 160, 251, 22, 58, 78, 210, 109,
    183, 194, 93, 231, 50, 86, 250, 21, 63, 65, 195, 94, 226, 61, 71, 201, 64,
    192, 91, 237, 44, 116, 156, 191, 218, 117, 159, 186, 213, 100, 172, 239, 42,
    126, 130, 157, 188, 223, 122, 142, 137, 128, 155, 182, 193, 88, 232, 35,
    101, 175, 234, 37, 111, 177, 200, 67, 197, 84, 252, 31, 33, 99, 165, 244, 7,
    9, 27, 45, 119, 153, 176, 203, 70, 202, 69, 207,74, 222, 121, 139, 134, 145,
    168, 227, 62, 66, 198, 81, 243, 14, 18, 54, 90, 238, 41, 123, 141, 140, 143,
    138, 133, 148, 167, 242, 13, 23, 57, 75, 221, 124, 132, 151, 162, 253, 28,
    36, 108, 180, 199, 82, 246, 1, 3};

unsigned
divvy_gf_sub(unsigned x, unsigned y)
{
    return x ^ y;
}

unsigned
divvy_gf_mul(unsigned x, unsigned y)
{
    assert((x & 0xff) == x);
    assert((y & 0xff) == y);

    if (x == 0 || y == 0)
    {
        return 0;
    }

    return gf_exp[(gf_log[x] + gf_log[y]) % 255];
}

unsigned
divvy_gf_inv(unsigned x)
{
    return gf_exp[255 - gf_log[x]];
}

void
divvy_generate_poly(unsigned degree, unsigned char zero, unsigned char* poly)
{
    assert(degree > 0);
    arc4random_buf(poly, degree);

    while (!poly[0])
    {
        arc4random_buf(poly, 1);
    }

    poly[degree - 1] = zero;
}

unsigned
divvy_poly_eval(const unsigned char* poly, unsigned degree, unsigned x)
{
    if (degree == 0)
    {
        return 0;
    }

    unsigned y = poly[0];

    for (unsigned i = 1; i < degree; ++i)
    {
        y = divvy_gf_mul(y, x) ^ poly[i];
    }

    return y;
}

void
divvy_byte(unsigned k, unsigned n,
           unsigned char msg,
           unsigned char* poly,
           unsigned char* points)
{
    unsigned i = 0;
    char seen[256]; 
    uint32_t x;
    unsigned char y;
    assert(k > 1);
    divvy_generate_poly(k - 1, msg, poly);
    assert(divvy_poly_eval(poly, k- 1, 0) == msg);
    memset(seen, 0, sizeof(seen));

    for (i = 0; i < n; ++i)
    {
        x = 0;

        while (!x || seen[x])
        {
            x = arc4random();
            x = x & 0xffU;
        }

        seen[x] = 1;
        y = divvy_poly_eval(poly, k - 1, x);
        points[i * 2 + 0] = x;
        points[i * 2 + 1] = y;
    }
}

size_t
divvy_raw_size(size_t msg_sz)
{
    return 1 + msg_sz * 2;
}

DIVVY_API size_t
divvy_piece_size(size_t msg_sz)
{
    return (divvy_raw_size(msg_sz) * 8 + 5) / 6 + 4;
}

DIVVY_API int
divvy(unsigned k, unsigned n,
      const unsigned char* msg, size_t msg_sz,
      char* const* pieces)
{
    int ret = -1;
    size_t i = 0;
    size_t j = 0;
    const size_t raw_sz = divvy_raw_size(msg_sz);
    const size_t b64_sz = divvy_piece_size(msg_sz);
    unsigned char* ptr = NULL;
    const size_t ptr_sz = k /* polynomial */
                        + 2 * n /* coordinates */
                        + raw_sz * n; /* raw pieces */
    unsigned char* poly = NULL;
    unsigned char* points = NULL;
    unsigned char* coords = NULL;
    if (!(ptr = malloc(ptr_sz))) goto cleanup;
    poly = ptr;
    points = ptr + k;
    coords = ptr + k + 2 * n;

    for (i = 0; i < msg_sz; ++i)
    {
        divvy_byte(k, n, msg[i], poly, points);

        for (j = 0; j < n; ++j)
        {
            coords[raw_sz * j + 1 + 2 * i + 0] = points[2 * j + 0];
            coords[raw_sz * j + 1 + 2 * i + 1] = points[2 * j + 1];
        }
    }

    for (i = 0; i < n; ++i)
    {
        coords[raw_sz * i] = k;
        if (b64_ntop(coords + raw_sz * i, raw_sz, pieces[i], b64_sz) < 0) goto cleanup;
    }

    ret = 0;

cleanup:
    if (ptr)
    {
        explicit_bzero(ptr, ptr_sz);
        free(ptr);
    }

    return ret;
}

void
undivvy_byte(unsigned k,
             const unsigned char* points,
             unsigned char* msg)
{
#define X(i) (points[i * 2 + 0])
#define Y(i) (points[i * 2 + 1])
    /* Variable names chosen to mimic definitions here
     * https://en.wikipedia.org/wiki/Lagrange_polynomial
     */
    unsigned j = 0;
    unsigned m = 0;
    unsigned char Lx = 0;
    unsigned char ljx = 0;
    unsigned char tmp = 0;

    /* L(x) := \sum_{j=0}^k y_j l_j(x) */
    for (j = 0; j < k; ++j)
    {
        ljx = 1;

        /* basis polynomial */
        for (m = 0; m < k; ++m)
        {
            if (m == j) continue;
            tmp = divvy_gf_sub(X(j), X(m));
            tmp = divvy_gf_inv(tmp);
            tmp = divvy_gf_mul(X(m), tmp);
            ljx = divvy_gf_mul(ljx, tmp);
        }

        Lx = Lx ^ divvy_gf_mul(Y(j), ljx);
    }

    *msg = Lx;
}

DIVVY_API int
undivvy(const char* const* pieces, size_t pieces_sz,
        unsigned char** msg, size_t* _msg_sz)
{
    int ret = -1;
    size_t i = 0;
    size_t j = 0;
    unsigned char* ptr = NULL;
    unsigned char* points = NULL;
    size_t ptr_sz = 2 * pieces_sz;
    size_t piece_sz = 0;
    size_t msg_sz = 0;
    size_t tmp = 0;
    int bamt = 0;
    unsigned char k = 0;
    if (pieces_sz == 0) goto cleanup;
    piece_sz = strlen(pieces[0]);

    for (i = 0; i < pieces_sz; ++i)
    {
        tmp = strlen(pieces[i]);
        if (i > 0 && tmp != piece_sz) goto cleanup;
        piece_sz = tmp;
        ptr_sz += piece_sz + 1;
    }

    if (!(ptr = malloc(ptr_sz))) goto cleanup;

    for (i = 0; i < pieces_sz; ++i)
    {
        bamt = b64_pton(pieces[i], ptr + i * piece_sz, piece_sz);
        if (bamt < 0 || !(bamt & 0x1)) goto cleanup;
        tmp = ((unsigned) bamt - 1) / 2;
        if (i > 0 && msg_sz != tmp) goto cleanup;
        msg_sz = tmp;
        if (i > 0 && k != ptr[i * piece_sz]) goto cleanup;
        k = ptr[i * piece_sz];
    }

    if (k > pieces_sz) goto cleanup;
    if (!(*msg = malloc(msg_sz))) goto cleanup;
    *_msg_sz = msg_sz;
    points = ptr + pieces_sz * piece_sz;

    for (i = 0; i < msg_sz; ++i)
    {
        for (j = 0; j < pieces_sz; ++j)
        {
            points[j * 2 + 0] = ptr[j * piece_sz + i * 2 + 1];
            points[j * 2 + 1] = ptr[j * piece_sz + i * 2 + 2];
        }

        undivvy_byte(k, points, *msg + i);
    }

    ret = 0;

cleanup:

    if (ptr)
    {
        explicit_bzero(ptr, ptr_sz);
        free(ptr);
    }

    if (ret != 0 && *msg)
    {
        explicit_bzero(*msg, msg_sz);
        free(*msg);
        *msg = NULL;
    }

    return ret;
}
