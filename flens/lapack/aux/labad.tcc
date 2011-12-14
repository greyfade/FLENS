/*
 *   Copyright (c) 2011, Michael Lehn
 *
 *   All rights reserved.
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 *
 *   1) Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *   2) Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in
 *      the documentation and/or other materials provided with the
 *      distribution.
 *   3) Neither the name of the FLENS development group nor the names of
 *      its contributors may be used to endorse or promote products derived
 *      from this software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* Based on
      SUBROUTINE DLABAD( SMALL, LARGE )
 *
 *  -- LAPACK auxiliary routine (version 3.2) --
 *  -- LAPACK is a software package provided by Univ. of Tennessee,    --
 *  -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..--
 *     November 2006
 */

#ifndef FLENS_LAPACK_AUX_LABAD_TCC
#define FLENS_LAPACK_AUX_LABAD_TCC 1

#include <cmath>
#include <flens/lapack/lapack.h>

namespace flens { namespace lapack {

//== generic lapack implementation =============================================

template <typename T>
void
labad_generic(T &small, T &large)
{
//
//  If it looks like we're on a Cray, take the square root of
//  SMALL and LARGE to avoid overflow and underflow problems.
//
    if (log10(large)>2000) {
        small = sqrt(small);
        large = sqrt(large);
    }
}

//== interface for native lapack ===============================================

#ifdef CHECK_CXXLAPACK

template <typename T>
void
labad_native(T &small, T &large)
{
    if (IsSame<T, DOUBLE>::value) {
        LAPACK_IMPL(dlabad)(&small,
                            &large);
    } else {
        ASSERT(0);
    }
}

#endif // CHECK_CXXLAPACK

//== public interface ==========================================================

template <typename T>
void
labad(T &small, T &large)
{
    LAPACK_DEBUG_OUT("BEGIN: labad");

#   ifdef CHECK_CXXLAPACK
//
//  Make copies of output arguments
//
    T _small    = small;
    T _large    = large;
#   endif

//
//  Call implementation
//
    labad_generic(small, large);

#   ifdef CHECK_CXXLAPACK
//
//  Compare results
//
    labad_native(_small, _large);

    bool failed = false;
    if (! isIdentical(small, _small, " small", "_small")) {
        std::cerr << "CXXLAPACK:  small = " << small << std::endl;
        std::cerr << "F77LAPACK: _small = " << _small << std::endl;
        failed = true;
    }

    if (! isIdentical(large, _large, " large", "_large")) {
        std::cerr << "CXXLAPACK:  large = " << large << std::endl;
        std::cerr << "F77LAPACK: _large = " << _large << std::endl;
        failed = true;
    }

    if (failed) {
        ASSERT(0);
    }
#   endif

    LAPACK_DEBUG_OUT("END: labad");
}

} } // namespace lapack, flens

#endif // FLENS_LAPACK_AUX_LABAD_TCC