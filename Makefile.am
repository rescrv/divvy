# Copyright (c) 2016, Robert Escriva
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
#     * Redistributions of source code must retain the above copyright notice,
#       this list of conditions and the following disclaimer.
#     * Redistributions in binary form must reproduce the above copyright
#       notice, this list of conditions and the following disclaimer in the
#       documentation and/or other materials provided with the distribution.
#     * Neither the name of this project nor the names of its contributors may
#       be used to endorse or promote products derived from this software
#       without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}

AM_CPPFLAGS = -I${abs_top_srcdir}/include
AM_CFLAGS    = -fvisibility=hidden $(WANAL_CFLAGS)
AM_MAKEFLAGS = --no-print-directory

EXTRA_DIST  =
EXTRA_DIST += README
EXTRA_DIST += LICENSE
EXTRA_DIST += test-divvy

th_sources = test/th_main.cc test/th.cc test/th.h

include_HEADERS = include/divvy.h
noinst_HEADERS = divvy-internal.h base64.h

lib_LTLIBRARIES = libdivvy.la

libdivvy_la_SOURCES = divvy.c base64.c explicit_bzero.c
libdivvy_la_LIBADD = -lbsd

bin_PROGRAMS = divvy undivvy

divvy_SOURCES = divvy-cli.c
divvy_LDADD = libdivvy.la -lpopt

undivvy_SOURCES = undivvy-cli.c
undivvy_LDADD = libdivvy.la -lpopt

check_PROGRAMS =
check_PROGRAMS += test/gf_sub
check_PROGRAMS += test/gf_mul
check_PROGRAMS += test/gf_inv

TESTS = ${check_PROGRAMS}

test_gf_sub_SOURCES = test/gf_sub.cc ${th_sources}
test_gf_sub_LDADD = libdivvy.la
test_gf_sub_LDFLAGS = -static-libtool-libs

test_gf_mul_SOURCES = test/gf_mul.cc ${th_sources}
test_gf_mul_LDADD = libdivvy.la
test_gf_mul_LDFLAGS = -static-libtool-libs

test_gf_inv_SOURCES = test/gf_inv.cc ${th_sources}
test_gf_inv_LDADD = libdivvy.la
test_gf_inv_LDFLAGS = -static-libtool-libs
