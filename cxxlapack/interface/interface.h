/*
 *   Copyright (c) 2012, Michael Lehn
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

#ifndef CXXLAPACK_INTERFACE_INTERFACE_H
#define CXXLAPACK_INTERFACE_INTERFACE_H 1

#include <cxxlapack/interface/bbcsd.h>
#include <cxxlapack/interface/bdsdc.h>
#include <cxxlapack/interface/bdsqr.h>
#include <cxxlapack/interface/cgesv.h>
#include <cxxlapack/interface/chla_transtype.h>
#include <cxxlapack/interface/cposv.h>
#include <cxxlapack/interface/disna.h>
#include <cxxlapack/interface/dspcon.h>
#include <cxxlapack/interface/gbbrd.h>
#include <cxxlapack/interface/gbcon.h>
#include <cxxlapack/interface/gbequb.h>
#include <cxxlapack/interface/gbequ.h>
#include <cxxlapack/interface/gbrfs.h>
#include <cxxlapack/interface/gbsv.h>
#include <cxxlapack/interface/gbsvx.h>
#include <cxxlapack/interface/gbtf2.h>
#include <cxxlapack/interface/gbtrf.h>
#include <cxxlapack/interface/gbtrs.h>
#include <cxxlapack/interface/gebak.h>
#include <cxxlapack/interface/gebal.h>
#include <cxxlapack/interface/gebd2.h>
#include <cxxlapack/interface/gebrd.h>
#include <cxxlapack/interface/gecon.h>
#include <cxxlapack/interface/geequb.h>
#include <cxxlapack/interface/geequ.h>
#include <cxxlapack/interface/gees.h>
#include <cxxlapack/interface/geesx.h>
#include <cxxlapack/interface/geev.h>
#include <cxxlapack/interface/geevx.h>
#include <cxxlapack/interface/gegs.h>
#include <cxxlapack/interface/gegv.h>
#include <cxxlapack/interface/gehd2.h>
#include <cxxlapack/interface/gehrd.h>
#include <cxxlapack/interface/gejsv.h>
#include <cxxlapack/interface/gelq2.h>
#include <cxxlapack/interface/gelqf.h>
#include <cxxlapack/interface/gelsd.h>
#include <cxxlapack/interface/gels.h>
#include <cxxlapack/interface/gelss.h>
#include <cxxlapack/interface/gelsx.h>
#include <cxxlapack/interface/gelsy.h>
#include <cxxlapack/interface/geql2.h>
#include <cxxlapack/interface/geqlf.h>
#include <cxxlapack/interface/geqp3.h>
#include <cxxlapack/interface/geqpf.h>
#include <cxxlapack/interface/geqr2.h>
#include <cxxlapack/interface/geqr2p.h>
#include <cxxlapack/interface/geqrf.h>
#include <cxxlapack/interface/geqrfp.h>
#include <cxxlapack/interface/gerfs.h>
#include <cxxlapack/interface/gerq2.h>
#include <cxxlapack/interface/gerqf.h>
#include <cxxlapack/interface/gesc2.h>
#include <cxxlapack/interface/gesdd.h>
#include <cxxlapack/interface/gesvd.h>
#include <cxxlapack/interface/gesv.h>
#include <cxxlapack/interface/gesvj.h>
#include <cxxlapack/interface/gesvx.h>
#include <cxxlapack/interface/getc2.h>
#include <cxxlapack/interface/getf2.h>
#include <cxxlapack/interface/getrf.h>
#include <cxxlapack/interface/getri.h>
#include <cxxlapack/interface/getrs.h>
#include <cxxlapack/interface/ggbak.h>
#include <cxxlapack/interface/ggbal.h>
#include <cxxlapack/interface/gges.h>
#include <cxxlapack/interface/ggesx.h>
#include <cxxlapack/interface/ggev.h>
#include <cxxlapack/interface/ggevx.h>
#include <cxxlapack/interface/ggglm.h>
#include <cxxlapack/interface/gghrd.h>
#include <cxxlapack/interface/gglse.h>
#include <cxxlapack/interface/ggqrf.h>
#include <cxxlapack/interface/ggrqf.h>
#include <cxxlapack/interface/ggsvd.h>
#include <cxxlapack/interface/ggsvp.h>
#include <cxxlapack/interface/gsvj0.h>
#include <cxxlapack/interface/gsvj1.h>
#include <cxxlapack/interface/gtcon.h>
#include <cxxlapack/interface/gtrfs.h>
#include <cxxlapack/interface/gtsv.h>
#include <cxxlapack/interface/gtsvx.h>
#include <cxxlapack/interface/gttrf.h>
#include <cxxlapack/interface/gttrs.h>
#include <cxxlapack/interface/gtts2.h>
#include <cxxlapack/interface/hbevd.h>
#include <cxxlapack/interface/hbev.h>
#include <cxxlapack/interface/hbevx.h>
#include <cxxlapack/interface/hbgst.h>
#include <cxxlapack/interface/hbgvd.h>
#include <cxxlapack/interface/hbgv.h>
#include <cxxlapack/interface/hbgvx.h>
#include <cxxlapack/interface/hbtrd.h>
#include <cxxlapack/interface/hecon.h>
#include <cxxlapack/interface/heequb.h>
#include <cxxlapack/interface/heevd.h>
#include <cxxlapack/interface/heev.h>
#include <cxxlapack/interface/heevr.h>
#include <cxxlapack/interface/heevx.h>
#include <cxxlapack/interface/hegs2.h>
#include <cxxlapack/interface/hegst.h>
#include <cxxlapack/interface/hegvd.h>
#include <cxxlapack/interface/hegv.h>
#include <cxxlapack/interface/hegvx.h>
#include <cxxlapack/interface/herfs.h>
#include <cxxlapack/interface/hesv.h>
#include <cxxlapack/interface/hesvx.h>
#include <cxxlapack/interface/heswapr.h>
#include <cxxlapack/interface/hetd2.h>
#include <cxxlapack/interface/hetf2.h>
#include <cxxlapack/interface/hetrd.h>
#include <cxxlapack/interface/hetrf.h>
#include <cxxlapack/interface/hetri2.h>
#include <cxxlapack/interface/hetri2x.h>
#include <cxxlapack/interface/hetri.h>
#include <cxxlapack/interface/hetrs2.h>
#include <cxxlapack/interface/hetrs.h>
#include <cxxlapack/interface/hfrk.h>
#include <cxxlapack/interface/hgeqz.h>
#include <cxxlapack/interface/hpcon.h>
#include <cxxlapack/interface/hpevd.h>
#include <cxxlapack/interface/hpev.h>
#include <cxxlapack/interface/hpevx.h>
#include <cxxlapack/interface/hpgst.h>
#include <cxxlapack/interface/hpgvd.h>
#include <cxxlapack/interface/hpgv.h>
#include <cxxlapack/interface/hpgvx.h>
#include <cxxlapack/interface/hprfs.h>
#include <cxxlapack/interface/hpsv.h>
#include <cxxlapack/interface/hpsvx.h>
#include <cxxlapack/interface/hptrd.h>
#include <cxxlapack/interface/hptrf.h>
#include <cxxlapack/interface/hptri.h>
#include <cxxlapack/interface/hptrs.h>
#include <cxxlapack/interface/hsein.h>
#include <cxxlapack/interface/hseqr.h>
#include <cxxlapack/interface/ieeeck.h>
#include <cxxlapack/interface/iladlc.h>
#include <cxxlapack/interface/iladlr.h>
#include <cxxlapack/interface/ilalc.h>
#include <cxxlapack/interface/ilalr.h>
#include <cxxlapack/interface/ilaprec.h>
#include <cxxlapack/interface/ilaslc.h>
#include <cxxlapack/interface/ilaslr.h>
#include <cxxlapack/interface/ilatrans.h>
#include <cxxlapack/interface/ilauplo.h>
#include <cxxlapack/interface/ilaver.h>
#include <cxxlapack/interface/ilazlc.h>
#include <cxxlapack/interface/ilazlr.h>
#include <cxxlapack/interface/interface.h>
#include <cxxlapack/interface/isnan.h>
#include <cxxlapack/interface/izmax1.h>
#include <cxxlapack/interface/labad.h>
#include <cxxlapack/interface/labrd.h>
#include <cxxlapack/interface/lacgv.h>
#include <cxxlapack/interface/lacn2.h>
#include <cxxlapack/interface/lacon.h>
#include <cxxlapack/interface/lacp2.h>
#include <cxxlapack/interface/lacpy.h>
#include <cxxlapack/interface/lacrm.h>
#include <cxxlapack/interface/lacrt.h>
#include <cxxlapack/interface/ladiv.h>
#include <cxxlapack/interface/lae2.h>
#include <cxxlapack/interface/laebz.h>
#include <cxxlapack/interface/laed0.h>
#include <cxxlapack/interface/laed1.h>
#include <cxxlapack/interface/laed2.h>
#include <cxxlapack/interface/laed3.h>
#include <cxxlapack/interface/laed4.h>
#include <cxxlapack/interface/laed5.h>
#include <cxxlapack/interface/laed6.h>
#include <cxxlapack/interface/laed7.h>
#include <cxxlapack/interface/laed8.h>
#include <cxxlapack/interface/laed9.h>
#include <cxxlapack/interface/laeda.h>
#include <cxxlapack/interface/laein.h>
#include <cxxlapack/interface/laesy.h>
#include <cxxlapack/interface/laev2.h>
#include <cxxlapack/interface/laexc.h>
#include <cxxlapack/interface/lag2c.h>
#include <cxxlapack/interface/lag2d.h>
#include <cxxlapack/interface/lag2.h>
#include <cxxlapack/interface/lag2s.h>
#include <cxxlapack/interface/lag2z.h>
#include <cxxlapack/interface/la_gbamv.h>
#include <cxxlapack/interface/la_gbrcond_c.h>
#include <cxxlapack/interface/la_gbrcond.h>
#include <cxxlapack/interface/la_gbrcond_x.h>
#include <cxxlapack/interface/la_gbrpvgrw.h>
#include <cxxlapack/interface/la_geamv.h>
#include <cxxlapack/interface/la_gercond_c.h>
#include <cxxlapack/interface/la_gercond.h>
#include <cxxlapack/interface/la_gercond_x.h>
#include <cxxlapack/interface/lags2.h>
#include <cxxlapack/interface/lagtf.h>
#include <cxxlapack/interface/lagtm.h>
#include <cxxlapack/interface/lagts.h>
#include <cxxlapack/interface/lagv2.h>
#include <cxxlapack/interface/lahef.h>
#include <cxxlapack/interface/la_heramv.h>
#include <cxxlapack/interface/la_hercond_c.h>
#include <cxxlapack/interface/la_hercond_x.h>
#include <cxxlapack/interface/la_herpvgrw.h>
#include <cxxlapack/interface/lahqr.h>
#include <cxxlapack/interface/lahr2.h>
#include <cxxlapack/interface/lahrd.h>
#include <cxxlapack/interface/laic1.h>
#include <cxxlapack/interface/laisnan.h>
#include <cxxlapack/interface/la_lin_berr.h>
#include <cxxlapack/interface/laln2.h>
#include <cxxlapack/interface/lals0.h>
#include <cxxlapack/interface/lalsa.h>
#include <cxxlapack/interface/lalsd.h>
#include <cxxlapack/interface/lamch.h>
#include <cxxlapack/interface/lamrg.h>
#include <cxxlapack/interface/laneg.h>
#include <cxxlapack/interface/langb.h>
#include <cxxlapack/interface/lange.h>
#include <cxxlapack/interface/langt.h>
#include <cxxlapack/interface/lanhb.h>
#include <cxxlapack/interface/lanhe.h>
#include <cxxlapack/interface/lanhf.h>
#include <cxxlapack/interface/lanhp.h>
#include <cxxlapack/interface/lanhs.h>
#include <cxxlapack/interface/lanht.h>
#include <cxxlapack/interface/lansb.h>
#include <cxxlapack/interface/lansf.h>
#include <cxxlapack/interface/lansp.h>
#include <cxxlapack/interface/lanst.h>
#include <cxxlapack/interface/lansy.h>
#include <cxxlapack/interface/lantb.h>
#include <cxxlapack/interface/lantp.h>
#include <cxxlapack/interface/lantr.h>
#include <cxxlapack/interface/lanv2.h>
#include <cxxlapack/interface/lapll.h>
#include <cxxlapack/interface/lapmr.h>
#include <cxxlapack/interface/lapmt.h>
#include <cxxlapack/interface/la_porcond_c.h>
#include <cxxlapack/interface/la_porcond.h>
#include <cxxlapack/interface/la_porcond_x.h>
#include <cxxlapack/interface/la_porpvgrw.h>
#include <cxxlapack/interface/lapy2.h>
#include <cxxlapack/interface/lapy3.h>
#include <cxxlapack/interface/laqgb.h>
#include <cxxlapack/interface/laqge.h>
#include <cxxlapack/interface/laqhb.h>
#include <cxxlapack/interface/laqhe.h>
#include <cxxlapack/interface/laqhp.h>
#include <cxxlapack/interface/laqp2.h>
#include <cxxlapack/interface/laqps.h>
#include <cxxlapack/interface/laqr0.h>
#include <cxxlapack/interface/laqr1.h>
#include <cxxlapack/interface/laqr2.h>
#include <cxxlapack/interface/laqr3.h>
#include <cxxlapack/interface/laqr4.h>
#include <cxxlapack/interface/laqr5.h>
#include <cxxlapack/interface/laqsb.h>
#include <cxxlapack/interface/laqsp.h>
#include <cxxlapack/interface/laqsy.h>
#include <cxxlapack/interface/laqtr.h>
#include <cxxlapack/interface/lar1v.h>
#include <cxxlapack/interface/lar2v.h>
#include <cxxlapack/interface/larcm.h>
#include <cxxlapack/interface/larfb.h>
#include <cxxlapack/interface/larfg.h>
#include <cxxlapack/interface/larfgp.h>
#include <cxxlapack/interface/larf.h>
#include <cxxlapack/interface/larft.h>
#include <cxxlapack/interface/larfx.h>
#include <cxxlapack/interface/largv.h>
#include <cxxlapack/interface/larnv.h>
#include <cxxlapack/interface/la_rpvgrw.h>
#include <cxxlapack/interface/larra.h>
#include <cxxlapack/interface/larrb.h>
#include <cxxlapack/interface/larrc.h>
#include <cxxlapack/interface/larrd.h>
#include <cxxlapack/interface/larre.h>
#include <cxxlapack/interface/larrf.h>
#include <cxxlapack/interface/larrj.h>
#include <cxxlapack/interface/larrk.h>
#include <cxxlapack/interface/larrr.h>
#include <cxxlapack/interface/larrv.h>
#include <cxxlapack/interface/larscl2.h>
#include <cxxlapack/interface/lartg.h>
#include <cxxlapack/interface/lartgp.h>
#include <cxxlapack/interface/lartgs.h>
#include <cxxlapack/interface/lartv.h>
#include <cxxlapack/interface/laruv.h>
#include <cxxlapack/interface/larzb.h>
#include <cxxlapack/interface/larz.h>
#include <cxxlapack/interface/larzt.h>
#include <cxxlapack/interface/las2.h>
#include <cxxlapack/interface/lascl2.h>
#include <cxxlapack/interface/lascl.h>
#include <cxxlapack/interface/lasd0.h>
#include <cxxlapack/interface/lasd1.h>
#include <cxxlapack/interface/lasd2.h>
#include <cxxlapack/interface/lasd3.h>
#include <cxxlapack/interface/lasd4.h>
#include <cxxlapack/interface/lasd5.h>
#include <cxxlapack/interface/lasd6.h>
#include <cxxlapack/interface/lasd7.h>
#include <cxxlapack/interface/lasd8.h>
#include <cxxlapack/interface/lasda.h>
#include <cxxlapack/interface/lasdq.h>
#include <cxxlapack/interface/lasdt.h>
#include <cxxlapack/interface/laset.h>
#include <cxxlapack/interface/lasq1.h>
#include <cxxlapack/interface/lasq2.h>
#include <cxxlapack/interface/lasq3.h>
#include <cxxlapack/interface/lasq4.h>
#include <cxxlapack/interface/lasq5.h>
#include <cxxlapack/interface/lasq6.h>
#include <cxxlapack/interface/lasr.h>
#include <cxxlapack/interface/lasrt.h>
#include <cxxlapack/interface/lassq.h>
#include <cxxlapack/interface/lasv2.h>
#include <cxxlapack/interface/laswp.h>
#include <cxxlapack/interface/lasy2.h>
#include <cxxlapack/interface/la_syamv.h>
#include <cxxlapack/interface/lasyf.h>
#include <cxxlapack/interface/la_syrcond_c.h>
#include <cxxlapack/interface/la_syrcond.h>
#include <cxxlapack/interface/la_syrcond_x.h>
#include <cxxlapack/interface/la_syrpvgrw.h>
#include <cxxlapack/interface/lat2c.h>
#include <cxxlapack/interface/lat2s.h>
#include <cxxlapack/interface/latbs.h>
#include <cxxlapack/interface/latdf.h>
#include <cxxlapack/interface/latps.h>
#include <cxxlapack/interface/latrd.h>
#include <cxxlapack/interface/latrs.h>
#include <cxxlapack/interface/latrz.h>
#include <cxxlapack/interface/latzm.h>
#include <cxxlapack/interface/lauu2.h>
#include <cxxlapack/interface/lauum.h>
#include <cxxlapack/interface/la_wwaddw.h>
#include <cxxlapack/interface/lsame.h>
#include <cxxlapack/interface/lsamen.h>
#include <cxxlapack/interface/opgtr.h>
#include <cxxlapack/interface/opmtr.h>
#include <cxxlapack/interface/orbdb.h>
#include <cxxlapack/interface/orcsd.h>
#include <cxxlapack/interface/org2l.h>
#include <cxxlapack/interface/org2r.h>
#include <cxxlapack/interface/orgbr.h>
#include <cxxlapack/interface/orghr.h>
#include <cxxlapack/interface/orgl2.h>
#include <cxxlapack/interface/orglq.h>
#include <cxxlapack/interface/orgql.h>
#include <cxxlapack/interface/orgqr.h>
#include <cxxlapack/interface/orgr2.h>
#include <cxxlapack/interface/orgrq.h>
#include <cxxlapack/interface/orgtr.h>
#include <cxxlapack/interface/orm2l.h>
#include <cxxlapack/interface/orm2r.h>
#include <cxxlapack/interface/ormbr.h>
#include <cxxlapack/interface/ormhr.h>
#include <cxxlapack/interface/orml2.h>
#include <cxxlapack/interface/ormlq.h>
#include <cxxlapack/interface/ormql.h>
#include <cxxlapack/interface/ormqr.h>
#include <cxxlapack/interface/ormr2.h>
#include <cxxlapack/interface/ormr3.h>
#include <cxxlapack/interface/ormrq.h>
#include <cxxlapack/interface/ormrz.h>
#include <cxxlapack/interface/ormtr.h>
#include <cxxlapack/interface/pbcon.h>
#include <cxxlapack/interface/pbequ.h>
#include <cxxlapack/interface/pbrfs.h>
#include <cxxlapack/interface/pbstf.h>
#include <cxxlapack/interface/pbsv.h>
#include <cxxlapack/interface/pbsvx.h>
#include <cxxlapack/interface/pbtf2.h>
#include <cxxlapack/interface/pbtrf.h>
#include <cxxlapack/interface/pbtrs.h>
#include <cxxlapack/interface/pftrf.h>
#include <cxxlapack/interface/pftri.h>
#include <cxxlapack/interface/pftrs.h>
#include <cxxlapack/interface/pocon.h>
#include <cxxlapack/interface/poequb.h>
#include <cxxlapack/interface/poequ.h>
#include <cxxlapack/interface/porfs.h>
#include <cxxlapack/interface/posv.h>
#include <cxxlapack/interface/posvx.h>
#include <cxxlapack/interface/potf2.h>
#include <cxxlapack/interface/potrf.h>
#include <cxxlapack/interface/potri.h>
#include <cxxlapack/interface/potrs.h>
#include <cxxlapack/interface/ppcon.h>
#include <cxxlapack/interface/ppequ.h>
#include <cxxlapack/interface/pprfs.h>
#include <cxxlapack/interface/ppsv.h>
#include <cxxlapack/interface/ppsvx.h>
#include <cxxlapack/interface/pptrf.h>
#include <cxxlapack/interface/pptri.h>
#include <cxxlapack/interface/pptrs.h>
#include <cxxlapack/interface/pstf2.h>
#include <cxxlapack/interface/pstrf.h>
#include <cxxlapack/interface/ptcon.h>
#include <cxxlapack/interface/pteqr.h>
#include <cxxlapack/interface/ptrfs.h>
#include <cxxlapack/interface/ptsv.h>
#include <cxxlapack/interface/ptsvx.h>
#include <cxxlapack/interface/pttrf.h>
#include <cxxlapack/interface/pttrs.h>
#include <cxxlapack/interface/ptts2.h>
#include <cxxlapack/interface/rot.h>
#include <cxxlapack/interface/rscl.h>
#include <cxxlapack/interface/sbevd.h>
#include <cxxlapack/interface/sbev.h>
#include <cxxlapack/interface/sbevx.h>
#include <cxxlapack/interface/sbgst.h>
#include <cxxlapack/interface/sbgvd.h>
#include <cxxlapack/interface/sbgv.h>
#include <cxxlapack/interface/sbgvx.h>
#include <cxxlapack/interface/sbtrd.h>
#include <cxxlapack/interface/sfrk.h>
#include <cxxlapack/interface/sgesv.h>
#include <cxxlapack/interface/spevd.h>
#include <cxxlapack/interface/spev.h>
#include <cxxlapack/interface/spevx.h>
#include <cxxlapack/interface/spgst.h>
#include <cxxlapack/interface/spgvd.h>
#include <cxxlapack/interface/spgv.h>
#include <cxxlapack/interface/spgvx.h>
#include <cxxlapack/interface/spmv.h>
#include <cxxlapack/interface/sposv.h>
#include <cxxlapack/interface/sprfs.h>
#include <cxxlapack/interface/spr.h>
#include <cxxlapack/interface/spsv.h>
#include <cxxlapack/interface/spsvx.h>
#include <cxxlapack/interface/sptrd.h>
#include <cxxlapack/interface/sptrf.h>
#include <cxxlapack/interface/sptri.h>
#include <cxxlapack/interface/sptrs.h>
#include <cxxlapack/interface/stebz.h>
#include <cxxlapack/interface/stedc.h>
#include <cxxlapack/interface/stegr.h>
#include <cxxlapack/interface/stein.h>
#include <cxxlapack/interface/stemr.h>
#include <cxxlapack/interface/steqr.h>
#include <cxxlapack/interface/sterf.h>
#include <cxxlapack/interface/stevd.h>
#include <cxxlapack/interface/stev.h>
#include <cxxlapack/interface/stevr.h>
#include <cxxlapack/interface/stevx.h>
#include <cxxlapack/interface/sycon.h>
#include <cxxlapack/interface/syconv.h>
#include <cxxlapack/interface/syequb.h>
#include <cxxlapack/interface/syevd.h>
#include <cxxlapack/interface/syev.h>
#include <cxxlapack/interface/syevr.h>
#include <cxxlapack/interface/syevx.h>
#include <cxxlapack/interface/sygs2.h>
#include <cxxlapack/interface/sygst.h>
#include <cxxlapack/interface/sygvd.h>
#include <cxxlapack/interface/sygv.h>
#include <cxxlapack/interface/sygvx.h>
#include <cxxlapack/interface/symv.h>
#include <cxxlapack/interface/syrfs.h>
#include <cxxlapack/interface/syr.h>
#include <cxxlapack/interface/sysv.h>
#include <cxxlapack/interface/sysvx.h>
#include <cxxlapack/interface/syswapr.h>
#include <cxxlapack/interface/sytd2.h>
#include <cxxlapack/interface/sytf2.h>
#include <cxxlapack/interface/sytrd.h>
#include <cxxlapack/interface/sytrf.h>
#include <cxxlapack/interface/sytri2.h>
#include <cxxlapack/interface/sytri2x.h>
#include <cxxlapack/interface/sytri.h>
#include <cxxlapack/interface/sytrs2.h>
#include <cxxlapack/interface/sytrs.h>
#include <cxxlapack/interface/tbcon.h>
#include <cxxlapack/interface/tbrfs.h>
#include <cxxlapack/interface/tbtrs.h>
#include <cxxlapack/interface/tfsm.h>
#include <cxxlapack/interface/tftri.h>
#include <cxxlapack/interface/tfttp.h>
#include <cxxlapack/interface/tfttr.h>
#include <cxxlapack/interface/tgevc.h>
#include <cxxlapack/interface/tgex2.h>
#include <cxxlapack/interface/tgexc.h>
#include <cxxlapack/interface/tgsen.h>
#include <cxxlapack/interface/tgsja.h>
#include <cxxlapack/interface/tgsna.h>
#include <cxxlapack/interface/tgsy2.h>
#include <cxxlapack/interface/tgsyl.h>
#include <cxxlapack/interface/tpcon.h>
#include <cxxlapack/interface/tprfs.h>
#include <cxxlapack/interface/tptri.h>
#include <cxxlapack/interface/tptrs.h>
#include <cxxlapack/interface/tpttf.h>
#include <cxxlapack/interface/tpttr.h>
#include <cxxlapack/interface/trcon.h>
#include <cxxlapack/interface/trevc.h>
#include <cxxlapack/interface/trexc.h>
#include <cxxlapack/interface/trrfs.h>
#include <cxxlapack/interface/trsen.h>
#include <cxxlapack/interface/trsna.h>
#include <cxxlapack/interface/trsyl.h>
#include <cxxlapack/interface/trti2.h>
#include <cxxlapack/interface/trtri.h>
#include <cxxlapack/interface/trtrs.h>
#include <cxxlapack/interface/trttf.h>
#include <cxxlapack/interface/trttp.h>
#include <cxxlapack/interface/tzrqf.h>
#include <cxxlapack/interface/tzrzf.h>
#include <cxxlapack/interface/unbdb.h>
#include <cxxlapack/interface/uncsd.h>
#include <cxxlapack/interface/ung2l.h>
#include <cxxlapack/interface/ung2r.h>
#include <cxxlapack/interface/ungbr.h>
#include <cxxlapack/interface/unghr.h>
#include <cxxlapack/interface/ungl2.h>
#include <cxxlapack/interface/unglq.h>
#include <cxxlapack/interface/ungql.h>
#include <cxxlapack/interface/ungqr.h>
#include <cxxlapack/interface/ungr2.h>
#include <cxxlapack/interface/ungrq.h>
#include <cxxlapack/interface/ungtr.h>
#include <cxxlapack/interface/unm2l.h>
#include <cxxlapack/interface/unm2r.h>
#include <cxxlapack/interface/unmbr.h>
#include <cxxlapack/interface/unmhr.h>
#include <cxxlapack/interface/unml2.h>
#include <cxxlapack/interface/unmlq.h>
#include <cxxlapack/interface/unmql.h>
#include <cxxlapack/interface/unmqr.h>
#include <cxxlapack/interface/unmr2.h>
#include <cxxlapack/interface/unmr3.h>
#include <cxxlapack/interface/unmrq.h>
#include <cxxlapack/interface/unmrz.h>
#include <cxxlapack/interface/unmtr.h>
#include <cxxlapack/interface/upgtr.h>
#include <cxxlapack/interface/upmtr.h>
#include <cxxlapack/interface/zsum1.h>

#endif // CXXLAPACK_INTERFACE_INTERFACE_H
