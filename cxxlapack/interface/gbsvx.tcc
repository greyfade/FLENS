/*
 *   Copyright (c) 2012, Michael Lehn, Klaus Pototzky
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

#ifndef CXXLAPACK_INTERFACE_GBSVX_TCC
#define CXXLAPACK_INTERFACE_GBSVX_TCC 1

#include <cxxlapack/netlib/netlib.h>

namespace cxxlapack {
  
template <typename IndexType>
IndexType
gbsvx(char                  fact,
      char                  trans,
      IndexType             n,
      IndexType             kl,
      IndexType             ku,
      IndexType             nRhs,
      float                 *Ab,
      IndexType             ldAb,
      float                 *Afb,
      IndexType             ldAfb,
      IndexType             *iPiv,
      char                  &equed,
      float                 *r,
      float                 *c,
      float                 *B,
      IndexType             ldB,
      float                 *X,
      IndexType             ldX,
      float                 &rCond,
      float                 *ferr,
      float                 *berr,
      float                 *work,
      IndexType             *iWork)
{
    IndexType info;
    CXXLAPACK_DEBUG_OUT("sgbsvx");
    LAPACK_IMPL(sgbsvx)(&fact,
                        &trans,
                        &n,
                        &kl,
                        &ku,
                        &nRhs,
                        Ab,
                        &ldAb,
                        Afb,
                        ldAfb,
                        iPiv,
                        &equed,
                        r,
                        c,
                        B,
                        ldB,
                        X,
                        ldX,
                        &rCond,
                        &ferr,
                        &berr,
                        work,
                        iWork,
                        &info);
#   ifndef NDEBUG
    if (info<0) {
        std::cerr << "info = " << info << std::endl;
    }
#   endif
    ASSERT(info>=0);
    return info;
}

template <typename IndexType>
IndexType
gbsvx(char                  fact,
      char                  trans,
      IndexType             n,
      IndexType             kl,
      IndexType             ku,
      IndexType             nRhs,
      double                *Ab,
      IndexType             ldAb,
      double                *Afb,
      IndexType             ldAfb,
      IndexType             *iPiv,
      char                  &equed,
      double                *r,
      double                *c,
      double                *B,
      IndexType             ldB,
      double                *X,
      IndexType             ldX,
      double                &rCond,
      double                *ferr,
      double                *berr,
      double                *work,
      IndexType             *iWork)
{
    IndexType info;
    CXXLAPACK_DEBUG_OUT("dgbsvx");
    LAPACK_IMPL(dgbsvx)(&fact,
                        &trans,
                        &n,
                        &kl,
                        &ku,
                        &nRhs,
                        Ab,
                        &ldAb,
                        Afb,
                        ldAfb,
                        iPiv,
                        &equed,
                        r,
                        c,
                        B,
                        ldB,
                        X,
                        ldX,
                        &rCond,
                        &ferr,
                        &berr,
                        work,
                        iWork,
                        &info);
#   ifndef NDEBUG
    if (info<0) {
        std::cerr << "info = " << info << std::endl;
    }
#   endif
    ASSERT(info>=0);
    return info;
}


template <typename IndexType>
IndexType
gbsvx(char                  fact,
      char                  trans,
      IndexType             n,
      IndexType             kl,
      IndexType             ku,
      IndexType             nRhs,
      std::complex<float >  *Ab,
      IndexType             ldAb,
      std::complex<float >  *Afb,
      IndexType             ldAfb,
      IndexType             *iPiv,
      char                  &equed,
      float                 *r,
      float                 *c,
      std::complex<float >  *B,
      IndexType             ldB,
      std::complex<float >  *X,
      IndexType             ldX,
      float                 &rCond,
      float                 *ferr,
      float                 *berr,
      std::complex<float >  *work,
      float                 *rWork)
{
    IndexType info;
    CXXLAPACK_DEBUG_OUT("cgbsvx");
    LAPACK_IMPL(cgbsvx)(&fact,
                        &trans,
                        &n,
                        &kl,
                        &ku,
                        &nRhs,
                        reinterpret_cast<float  *>(Ab),
                        &ldAb,
                        reinterpret_cast<float  *>(Afb),
                        ldAfb,
                        iPiv,
                        &equed,
                        r,
                        c,
                        reinterpret_cast<float  *>(B),
                        ldB,
                        reinterpret_cast<float  *>(X),
                        ldX,
                        &rCond,
                        &ferr,
                        &berr,
                        reinterpret_cast<float  *>(work),
                        rWork,
                        &info);
#   ifndef NDEBUG
    if (info<0) {
        std::cerr << "info = " << info << std::endl;
    }
#   endif
    ASSERT(info>=0);
    return info;
}

template <typename IndexType>
IndexType
gbsvx(char                  fact,
      char                  trans,
      IndexType             n,
      IndexType             kl,
      IndexType             ku,
      IndexType             nRhs,
      std::complex<double>  *Ab,
      IndexType             ldAb,
      std::complex<double>  *Afb,
      IndexType             ldAfb,
      IndexType             *iPiv,
      char                  &equed,
      double                *r,
      double                *c,
      std::complex<double>  *B,
      IndexType             ldB,
      std::complex<double>  *X,
      IndexType             ldX,
      double                &rCond,
      double                *ferr,
      double                *berr,
      std::complex<double>  *work,
      double                *rWork)
{
    IndexType info;
    CXXLAPACK_DEBUG_OUT("zgbsvx");
    LAPACK_IMPL(zgbsvx)(&fact,
                        &trans,
                        &n,
                        &kl,
                        &ku,
                        &nRhs,
                        reinterpret_cast<double *>(Ab),
                        &ldAb,
                        reinterpret_cast<double *>(Afb),
                        ldAfb,
                        iPiv,
                        &equed,
                        r,
                        c,
                        reinterpret_cast<double *>(B),
                        ldB,
                        reinterpret_cast<double *>(X),
                        ldX,
                        &rCond,
                        &ferr,
                        &berr,
                        reinterpret_cast<double *>(work),
                        rWork,
                        &info);
#   ifndef NDEBUG
    if (info<0) {
        std::cerr << "info = " << info << std::endl;
    }
#   endif
    ASSERT(info>=0);
    return info;
}

} // namespace cxxlapack

#endif // CXXLAPACK_INTERFACE_GBSVX_TCC
