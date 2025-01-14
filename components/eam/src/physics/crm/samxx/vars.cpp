
#include "vars.h"


void allocate() {
  t00              = real2d( "t00                "      , nzm, ncrms);
  tln              = real2d( "tln                "      ,plev, ncrms);
  qln              = real2d( "qln                "      ,plev, ncrms);
  qccln            = real2d( "qccln              "      ,plev, ncrms);
  qiiln            = real2d( "qiiln              "      ,plev, ncrms);
  uln              = real2d( "uln                "      ,plev, ncrms);
  vln              = real2d( "vln                "      ,plev, ncrms);
#ifdef MMF_ESMT
  uln_esmt         = real2d( "uln_esmt           "      ,plev, ncrms);
  vln_esmt         = real2d( "vln_esmt           "      ,plev, ncrms);
#endif
  cwp              = real3d( "cwp                "  ,ny , nx , ncrms);
  cwph             = real3d( "cwph               "  ,ny , nx , ncrms);
  cwpm             = real3d( "cwpm               "  ,ny , nx , ncrms);
  cwpl             = real3d( "cwpl               "  ,ny , nx , ncrms);
  cltemp           = real3d( "cltemp             "  ,ny , nx , ncrms);
  cmtemp           = real3d( "cmtemp             "  ,ny , nx , ncrms);
  chtemp           = real3d( "chtemp             "  ,ny , nx , ncrms);
  cttemp           = real3d( "cttemp             "  ,ny , nx , ncrms);
  dd_crm           = real2d( "dd_crm             "      ,plev, ncrms);
  mui_crm          = real2d( "mui_crm            "    ,plev+1, ncrms);
  mdi_crm          = real2d( "mdi_crm            "    ,plev+1, ncrms);
  ustar            = real1d( "ustar              "           , ncrms);
  wnd              = real1d( "wnd                "           , ncrms);
  qtot             = real2d( "qtot               "    ,    20, ncrms);
  colprec          = real1d( "colprec            "           , ncrms);
  colprecs         = real1d( "colprecs           "           , ncrms);
  bflx             = real1d( "bflx               "           , ncrms);
  flag_top         = int3d ( "flag_top        " ,   ny  , nx , ncrms);  
  accrsc           = real2d( "accrsc          " , nzm, ncrms);
  accrsi           = real2d( "accrsi          " , nzm, ncrms);
  accrrc           = real2d( "accrrc          " , nzm, ncrms);
  coefice          = real2d( "coefice         " , nzm, ncrms);
  accrgc           = real2d( "accrgc          " , nzm, ncrms);
  accrgi           = real2d( "accrgi          " , nzm, ncrms);
  evaps1           = real2d( "evaps1          " , nzm, ncrms);
  evaps2           = real2d( "evaps2          " , nzm, ncrms);
  evapr1           = real2d( "evapr1          " , nzm, ncrms);
  evapr2           = real2d( "evapr2          " , nzm, ncrms);
  evapg1           = real2d( "evapg1          " , nzm, ncrms);
  evapg2           = real2d( "evapg2          " , nzm, ncrms);
  micro_field      = real5d( "micro_field     " , nmicro_fields, nzm, dimy_s, dimx_s, ncrms );
  fluxbmk          = real4d( "fluxbmk         " , nmicro_fields, ny, nx, ncrms);
  fluxtmk          = real4d( "fluxtmk         " , nmicro_fields, ny, nx, ncrms);
  mkwle            = real3d( "mkwle           " , nmicro_fields, nz, ncrms);
  mkwsb            = real3d( "mkwsb           " , nmicro_fields, nz, ncrms);
  mkadv            = real3d( "mkadv           " , nmicro_fields, nz, ncrms);
  mkdiff           = real3d( "mkdiff          " , nmicro_fields, nz, ncrms);
  qn               = real4d( "qn              " , nzm, ny, nx, ncrms);
  qpsrc            = real2d( "qpsrc           " , nz, ncrms);
  qpevp            = real2d( "qpevp           " , nz, ncrms);
  flag_precip      = intHost1d( "flag_precip     " , nmicro_fields);
#ifdef MMF_ESMT
  u_esmt           = real4d( "u_esmt          ", nzm, dimy_s, dimx_s, ncrms);
  v_esmt           = real4d( "v_esmt          ", nzm, dimy_s, dimx_s, ncrms);
  u_esmt_sgs       = real2d( "u_esmt_sgs      ", nz, ncrms);
  v_esmt_sgs       = real2d( "v_esmt_sgs      ", nz, ncrms);
  u_esmt_diff      = real2d( "u_esmt_diff     ", nz, ncrms);
  v_esmt_diff      = real2d( "v_esmt_diff     ", nz, ncrms);
  fluxb_u_esmt     = real3d( "fluxb_u_esmt    ", ny, nx, ncrms);
  fluxb_v_esmt     = real3d( "fluxb_v_esmt    ", ny, nx, ncrms);
  fluxt_u_esmt     = real3d( "fluxt_u_esmt    ", ny, nx, ncrms);
  fluxt_v_esmt     = real3d( "fluxt_v_esmt    ", ny, nx, ncrms);
#endif
  fcorz            = real1d( "fcorz           " , ncrms ); 
  fcor             = real1d( "fcor            " , ncrms ); 
  longitude0       = real1d( "longitude0      " , ncrms ); 
  latitude0        = real1d( "latitude0       " , ncrms ); 
  z0               = real1d( "z0              " , ncrms ); 
  uhl              = real1d( "uhl             " , ncrms ); 
  vhl              = real1d( "vhl             " , ncrms ); 
  taux0            = real1d( "taux0           " , ncrms ); 
  tauy0            = real1d( "tauy0           " , ncrms ); 
  sgs_field        = real5d( "sgs_field       " , nsgs_fields      , nzm , dimy_s , dimx_s , ncrms );
  sgs_field_diag   = real5d( "sgs_field_diag  " , nsgs_fields_diag , nzm , dimy_d , dimx_d , ncrms );
  grdf_x           = real2d( "grdf_x          "                    , nzm                   , ncrms );
  grdf_y           = real2d( "grdf_y          "                    , nzm                   , ncrms );
  grdf_z           = real2d( "grdf_z          "                    , nzm                   , ncrms );
  tkesbbuoy        = real2d( "tkesbbuoy       "                    , nz                    , ncrms );
  tkesbshear       = real2d( "tkesbshear      "                    , nz                    , ncrms );
  tkesbdiss        = real2d( "tkesbdiss       "                    , nz                    , ncrms );
  z                = real2d( "z               "                        , nz     , ncrms ); 
  pres             = real2d( "pres            "                        , nzm    , ncrms ); 
  zi               = real2d( "zi              "                        , nz     , ncrms ); 
  presi            = real2d( "presi           "                        , nz     , ncrms ); 
  adz              = real2d( "adz             "                        , nzm    , ncrms ); 
  adzw             = real2d( "adzw            "                        , nz     , ncrms ); 
  dz               = real1d( "dz              "                                 , ncrms ); 
  dt3              = real1d( "dt3             " , 3                                     ); 
  u                = real4d( "u               "     , nzm , dimy_u     , dimx_u , ncrms ); 
  v                = real4d( "v               "     , nzm , dimy_v     , dimx_v , ncrms ); 
  w                = real4d( "w               "     , nz  , dimy_w     , dimx_w , ncrms ); 
  t                = real4d( "t               "     , nzm , dimy_s     , dimx_s , ncrms ); 
  p                = real4d( "p               "     , nzm , dimy_p     , nxp1   , ncrms ); 
  tabs             = real4d( "tabs            "     , nzm , ny         , nx     , ncrms ); 
  qv               = real4d( "qv              "     , nzm , ny         , nx     , ncrms ); 
  qcl              = real4d( "qcl             "     , nzm , ny         , nx     , ncrms ); 
  qpl              = real4d( "qpl             "     , nzm , ny         , nx     , ncrms ); 
  qci              = real4d( "qci             "     , nzm , ny         , nx     , ncrms ); 
  qpi              = real4d( "qpi             "     , nzm , ny         , nx     , ncrms ); 
  tke2             = real4d( "tke2            "     , nzm , dimy_s     , dimx_s , ncrms ); 
  tk2              = real4d( "tk2             "     , nzm , dimy_tk2   , nxp2   , ncrms ); 
  dudt             = real5d( "dudt            " , 3 , nzm , ny         , nxp1   , ncrms ); 
  dvdt             = real5d( "dvdt            " , 3 , nzm , nyp1       , nx     , ncrms ); 
  dwdt             = real5d( "dwdt            " , 3 , nz  , ny         , nx     , ncrms ); 
  misc             = real4d( "misc            "     , nz  , ny         , nx     , ncrms ); 
  fluxbu           = real3d( "fluxbu          "           , ny         , nx     , ncrms ); 
  fluxbv           = real3d( "fluxbv          "           , ny         , nx     , ncrms ); 
  fluxbt           = real3d( "fluxbt          "           , ny         , nx     , ncrms ); 
  fluxbq           = real3d( "fluxbq          "           , ny         , nx     , ncrms ); 
  fluxtu           = real3d( "fluxtu          "           , ny         , nx     , ncrms ); 
  fluxtv           = real3d( "fluxtv          "           , ny         , nx     , ncrms ); 
  fluxtt           = real3d( "fluxtt          "           , ny         , nx     , ncrms ); 
  fluxtq           = real3d( "fluxtq          "           , ny         , nx     , ncrms ); 
  fzero            = real3d( "fzero           "           , ny         , nx     , ncrms ); 
  precsfc          = real3d( "precsfc         "           , ny         , nx     , ncrms ); 
  precssfc         = real3d( "precssfc        "           , ny         , nx     , ncrms ); 
  t0               = real2d( "t0              "                        , nzm    , ncrms ); 
  q0               = real2d( "q0              "                        , nzm    , ncrms ); 
  qv0              = real2d( "qv0             "                        , nzm    , ncrms ); 
  tabs0            = real2d( "tabs0           "                        , nzm    , ncrms ); 
  tv0              = real2d( "tv0             "                        , nzm    , ncrms ); 
  u0               = real2d( "u0              "                        , nzm    , ncrms ); 
  v0               = real2d( "v0              "                        , nzm    , ncrms ); 
  tg0              = real2d( "tg0             "                        , nzm    , ncrms ); 
  qg0              = real2d( "qg0             "                        , nzm    , ncrms ); 
  ug0              = real2d( "ug0             "                        , nzm    , ncrms ); 
  vg0              = real2d( "vg0             "                        , nzm    , ncrms ); 
  p0               = real2d( "p0              "                        , nzm    , ncrms ); 
  tke0             = real2d( "tke0            "                        , nzm    , ncrms ); 
  t01              = real2d( "t01             "                        , nzm    , ncrms ); 
  q01              = real2d( "q01             "                        , nzm    , ncrms ); 
  qp0              = real2d( "qp0             "                        , nzm    , ncrms ); 
  qn0              = real2d( "qn0             "                        , nzm    , ncrms ); 
  prespot          = real2d( "prespot         "                        , nzm    , ncrms ); 
  rho              = real2d( "rho             "                        , nzm    , ncrms ); 
  rhow             = real2d( "rhow            "                        , nz     , ncrms ); 
  bet              = real2d( "bet             "                        , nzm    , ncrms ); 
  gamaz            = real2d( "gamaz           "                        , nzm    , ncrms ); 
  wsub             = real2d( "wsub            "                        , nz     , ncrms ); 
  qtend            = real2d( "qtend           "                        , nzm    , ncrms ); 
  ttend            = real2d( "ttend           "                        , nzm    , ncrms ); 
  utend            = real2d( "utend           "                        , nzm    , ncrms ); 
  vtend            = real2d( "vtend           "                        , nzm    , ncrms ); 
  sstxy            = real3d( "sstxy           "           , dimy_sstxy , nxp1   , ncrms ); 
  fcory            = real2d( "fcory           "                        , ny+1   , ncrms ); 
  fcorzy           = real2d( "fcorzy          "                        , ny     , ncrms ); 
  latitude         = real3d( "latitude        "           , ny         , nx     , ncrms ); 
  longitude        = real3d( "longitude       "           , ny         , nx     , ncrms ); 
  prec_xy          = real3d( "prec_xy         "           , ny         , nx     , ncrms ); 
  pw_xy            = real3d( "pw_xy           "           , ny         , nx     , ncrms ); 
  cw_xy            = real3d( "cw_xy           "           , ny         , nx     , ncrms ); 
  iw_xy            = real3d( "iw_xy           "           , ny         , nx     , ncrms ); 
  cld_xy           = real3d( "cld_xy          "           , ny         , nx     , ncrms ); 
  u200_xy          = real3d( "u200_xy         "           , ny         , nx     , ncrms ); 
  usfc_xy          = real3d( "usfc_xy         "           , ny         , nx     , ncrms ); 
  v200_xy          = real3d( "v200_xy         "           , ny         , nx     , ncrms ); 
  vsfc_xy          = real3d( "vsfc_xy         "           , ny         , nx     , ncrms ); 
  w500_xy          = real3d( "w500_xy         "           , ny         , nx     , ncrms ); 
  w_max            = real2d( "w_max           "                        , nz     , ncrms ); 
  u_max            = real2d( "u_max           "                        , nz     , ncrms ); 
  twsb             = real2d( "twsb            "                        , nz     , ncrms ); 
  precflux         = real2d( "precflux        "                        , nz     , ncrms ); 
  uwle             = real2d( "uwle            "                        , nz     , ncrms ); 
  uwsb             = real2d( "uwsb            "                        , nz     , ncrms ); 
  vwle             = real2d( "vwle            "                        , nz     , ncrms ); 
  vwsb             = real2d( "vwsb            "                        , nz     , ncrms ); 
  tkelediss        = real2d( "tkelediss       "                        , nz     , ncrms ); 
  tdiff            = real2d( "tdiff           "                        , nz     , ncrms ); 
  tlat             = real2d( "tlat            "                        , nz     , ncrms ); 
  tlatqi           = real2d( "tlatqi          "                        , nz     , ncrms ); 
  qifall           = real2d( "qifall          "                        , nz     , ncrms ); 
  qpfall           = real2d( "qpfall          "                        , nz     , ncrms ); 
  total_water_evap = real3d( "total_water_evap"           , ny         , nx     , ncrms ); 
  total_water_prec = real3d( "total_water_prec"           , ny         , nx     , ncrms ); 
  CF3D             = real4d( "CF3D            "     , nzm , ny         , nx     , ncrms ); 
  u850_xy          = real3d( "u850_xy         "           , ny         , nx     , ncrms ); 
  v850_xy          = real3d( "v850_xy         "           , ny         , nx     , ncrms ); 
  psfc_xy          = real3d( "psfc_xy         "           , ny         , nx     , ncrms ); 
  swvp_xy          = real3d( "swvp_xy         "           , ny         , nx     , ncrms ); 
  cloudtopheight   = real3d( "cloudtopheight  "           , ny         , nx     , ncrms ); 
  echotopheight    = real3d( "echotopheight   "           , ny         , nx     , ncrms ); 
  cloudtoptemp     = real3d( "cloudtoptemp    "           , ny         , nx     , ncrms ); 
  crm_clear_rh_cnt = int2d(  "crm_clear_rh_cnt"                        , nzm    , ncrms );

  t_vt             = real2d( "t_vt           "                        , nzm    , ncrms ); 
  q_vt             = real2d( "q_vt           "                        , nzm    , ncrms ); 
  u_vt             = real2d( "u_vt           "                        , nzm    , ncrms ); 
  t_vt_tend        = real2d( "t_vt_tend      "                        , nzm    , ncrms ); 
  q_vt_tend        = real2d( "q_vt_tend      "                        , nzm    , ncrms ); 
  u_vt_tend        = real2d( "u_vt_tend      "                        , nzm    , ncrms ); 
  t_vt_pert        = real4d( "t_vt_pert      "     , nzm , ny         , nx     , ncrms ); 
  q_vt_pert        = real4d( "q_vt_pert      "     , nzm , ny         , nx     , ncrms ); 
  u_vt_pert        = real4d( "u_vt_pert      "     , nzm , ny         , nx     , ncrms ); 

  yakl::memset(t00               ,0.);
  yakl::memset(tln               ,0.);
  yakl::memset(qln               ,0.);
  yakl::memset(qccln             ,0.);
  yakl::memset(qiiln             ,0.);
  yakl::memset(uln               ,0.);
  yakl::memset(vln               ,0.);
#ifdef MMF_ESMT
  yakl::memset(uln_esmt          ,0.);
  yakl::memset(vln_esmt          ,0.);
#endif
  yakl::memset(cwp               ,0.);
  yakl::memset(cwph              ,0.);
  yakl::memset(cwpm              ,0.);
  yakl::memset(cwpl              ,0.);
  yakl::memset(cltemp            ,0.);
  yakl::memset(cmtemp            ,0.);
  yakl::memset(chtemp            ,0.);
  yakl::memset(cttemp            ,0.);
  yakl::memset(dd_crm            ,0.);
  yakl::memset(mui_crm           ,0.);
  yakl::memset(mdi_crm           ,0.);
  yakl::memset(ustar             ,0.);
  yakl::memset(wnd               ,0.);
  yakl::memset(qtot              ,0.);
  yakl::memset(colprec           ,0.);
  yakl::memset(colprecs          ,0.);
  yakl::memset(bflx              ,0.);
  yakl::memset(flag_top          ,0 );
  yakl::memset(accrsc            ,0.);
  yakl::memset(accrsi            ,0.);
  yakl::memset(accrrc            ,0.);
  yakl::memset(coefice           ,0.);
  yakl::memset(accrgc            ,0.);
  yakl::memset(accrgi            ,0.);
  yakl::memset(evaps1            ,0.);
  yakl::memset(evaps2            ,0.);
  yakl::memset(evapr1            ,0.);
  yakl::memset(evapr2            ,0.);
  yakl::memset(evapg1            ,0.);
  yakl::memset(evapg2            ,0.);
  yakl::memset(micro_field       ,0.);
  yakl::memset(fluxbmk           ,0.);
  yakl::memset(fluxtmk           ,0.);
  yakl::memset(mkwle             ,0.);
  yakl::memset(mkwsb             ,0.);
  yakl::memset(mkadv             ,0.);
  yakl::memset(mkdiff            ,0.);
  yakl::memset(qn                ,0.);
  yakl::memset(qpsrc             ,0.);
  yakl::memset(qpevp             ,0.);
  yakl::memset(flag_precip       ,0 );
  yakl::memset(fcorz             ,0.);
  yakl::memset(fcor              ,0.);
  yakl::memset(longitude0        ,0.);
  yakl::memset(latitude0         ,0.);
  yakl::memset(z0                ,0.);
  yakl::memset(uhl               ,0.);
  yakl::memset(vhl               ,0.);
  yakl::memset(taux0             ,0.);
  yakl::memset(tauy0             ,0.);
  yakl::memset(sgs_field         ,0.);
  yakl::memset(sgs_field_diag    ,0.);
  yakl::memset(grdf_x            ,0.);
  yakl::memset(grdf_y            ,0.);
  yakl::memset(grdf_z            ,0.);
  yakl::memset(tkesbbuoy         ,0.);
  yakl::memset(tkesbshear        ,0.);
  yakl::memset(tkesbdiss         ,0.);
  yakl::memset(z                 ,0.);
  yakl::memset(pres              ,0.);
  yakl::memset(zi                ,0.);
  yakl::memset(presi             ,0.);
  yakl::memset(adz               ,0.);
  yakl::memset(adzw              ,0.);
  yakl::memset(dz                ,0.);
  yakl::memset(dt3               ,0.);
  yakl::memset(u                 ,0.);
  yakl::memset(v                 ,0.);
  yakl::memset(w                 ,0.);
  yakl::memset(t                 ,0.);
  yakl::memset(p                 ,0.);
  yakl::memset(tabs              ,0.);
  yakl::memset(qv                ,0.);
  yakl::memset(qcl               ,0.);
  yakl::memset(qpl               ,0.);
  yakl::memset(qci               ,0.);
  yakl::memset(qpi               ,0.);
  yakl::memset(tke2              ,0.);
  yakl::memset(tk2               ,0.);
  yakl::memset(dudt              ,0.);
  yakl::memset(dvdt              ,0.);
  yakl::memset(dwdt              ,0.);
  yakl::memset(misc              ,0.);
  yakl::memset(fluxbu            ,0.);
  yakl::memset(fluxbv            ,0.);
  yakl::memset(fluxbt            ,0.);
  yakl::memset(fluxbq            ,0.);
  yakl::memset(fluxtu            ,0.);
  yakl::memset(fluxtv            ,0.);
  yakl::memset(fluxtt            ,0.);
  yakl::memset(fluxtq            ,0.);
  yakl::memset(fzero             ,0.);
  yakl::memset(precsfc           ,0.);
  yakl::memset(precssfc          ,0.);
  yakl::memset(t0                ,0.);
  yakl::memset(q0                ,0.);
  yakl::memset(qv0               ,0.);
  yakl::memset(tabs0             ,0.);
  yakl::memset(tv0               ,0.);
  yakl::memset(u0                ,0.);
  yakl::memset(v0                ,0.);
  yakl::memset(tg0               ,0.);
  yakl::memset(qg0               ,0.);
  yakl::memset(ug0               ,0.);
  yakl::memset(vg0               ,0.);
  yakl::memset(p0                ,0.);
  yakl::memset(tke0              ,0.);
  yakl::memset(t01               ,0.);
  yakl::memset(q01               ,0.);
  yakl::memset(qp0               ,0.);
  yakl::memset(qn0               ,0.);
  yakl::memset(prespot           ,0.);
  yakl::memset(rho               ,0.);
  yakl::memset(rhow              ,0.);
  yakl::memset(bet               ,0.);
  yakl::memset(gamaz             ,0.);
  yakl::memset(wsub              ,0.);
  yakl::memset(qtend             ,0.);
  yakl::memset(ttend             ,0.);
  yakl::memset(utend             ,0.);
  yakl::memset(vtend             ,0.);
  yakl::memset(sstxy             ,0.);
  yakl::memset(fcory             ,0.);
  yakl::memset(fcorzy            ,0.);
  yakl::memset(latitude          ,0.);
  yakl::memset(longitude         ,0.);
  yakl::memset(prec_xy           ,0.);
  yakl::memset(pw_xy             ,0.);
  yakl::memset(cw_xy             ,0.);
  yakl::memset(iw_xy             ,0.);
  yakl::memset(cld_xy            ,0.);
  yakl::memset(u200_xy           ,0.);
  yakl::memset(usfc_xy           ,0.);
  yakl::memset(v200_xy           ,0.);
  yakl::memset(vsfc_xy           ,0.);
  yakl::memset(w500_xy           ,0.);
  yakl::memset(w_max             ,0.);
  yakl::memset(u_max             ,0.);
  yakl::memset(twsb              ,0.);
  yakl::memset(precflux          ,0.);
  yakl::memset(uwle              ,0.);
  yakl::memset(uwsb              ,0.);
  yakl::memset(vwle              ,0.);
  yakl::memset(vwsb              ,0.);
  yakl::memset(tkelediss         ,0.);
  yakl::memset(tdiff             ,0.);
  yakl::memset(tlat              ,0.);
  yakl::memset(tlatqi            ,0.);
  yakl::memset(qifall            ,0.);
  yakl::memset(qpfall            ,0.);
  yakl::memset(total_water_evap  ,0.);
  yakl::memset(total_water_prec  ,0.);
  yakl::memset(CF3D              ,0.);
  yakl::memset(u850_xy           ,0.);
  yakl::memset(v850_xy           ,0.);
  yakl::memset(psfc_xy           ,0.);
  yakl::memset(swvp_xy           ,0.);
  yakl::memset(cloudtopheight    ,0.);
  yakl::memset(echotopheight     ,0.);
  yakl::memset(cloudtoptemp      ,0.);
  yakl::memset(crm_clear_rh_cnt  ,0);
#ifdef MMF_ESMT
  yakl::memset(u_esmt            ,0.);
  yakl::memset(v_esmt            ,0.);
  yakl::memset(u_esmt_sgs        ,0.);
  yakl::memset(v_esmt_sgs        ,0.);
  yakl::memset(u_esmt_diff       ,0.);
  yakl::memset(v_esmt_diff       ,0.);
  yakl::memset(fluxb_u_esmt      ,0.);
  yakl::memset(fluxb_v_esmt      ,0.);
  yakl::memset(fluxt_u_esmt      ,0.);
  yakl::memset(fluxt_v_esmt      ,0.);
#endif
  yakl::memset(t_vt_tend         ,0.);
  yakl::memset(q_vt_tend         ,0.);
  yakl::memset(u_vt_tend         ,0.);
  yakl::memset(t_vt_pert         ,0.);
  yakl::memset(q_vt_pert         ,0.);
  yakl::memset(u_vt_pert         ,0.);
  yakl::memset(t_vt              ,0.);
  yakl::memset(q_vt              ,0.);
  yakl::memset(u_vt              ,0.);
}


void init_values() {
  YAKL_SCOPE( z0   , ::z0  );
  YAKL_SCOPE( CF3D , ::CF3D );

  flag_precip(0) = 0;
  flag_precip(1) = 1;

  dosubsidence = false    ;
  ug = 0.                 ;
  vg = 0.                 ;
  les = false             ;
  sfc_flx_fxd =false      ;
  sfc_tau_fxd =false      ;
  dodamping = false       ;
  docloud = false         ;
  docam_sfc_fluxes = false;
  doprecip = false        ;
  dosgs = false           ;
  docoriolis = false      ;
  dosurface = false       ;
  dowallx = false         ;
  dowally = false         ;
  docolumn = false        ;
  dotracers = false       ;
  dosmoke = false         ;

  parallel_for( ncrms , YAKL_LAMBDA ( int icrm ) {
    z0(icrm) = 0.035;
  });

  na=1;
  nb=2;
  nc=3;

  parallel_for( SimpleBounds<4>(nzm,ny,nx,ncrms) , YAKL_LAMBDA (int k, int j, int i, int icrm) {
    CF3D(k,j,i,icrm) = 1.;
  });

  nstep = 0                             ;
  compute_reffc = false                 ;
  compute_reffi = false                 ;
  dx = 0.                               ;
  dy = 0.                               ;
  doconstdz = false                     ;
  nstop =0                              ;
  nelapse =999999999                    ;
  dt=0.                                 ;
  day0=0.                               ;
  nrad =1                               ;
  nrestart =0                           ;
  nstat =1000                           ;
  nstatfrq =50                          ;
  restart_sep =false                    ;
  nrestart_skip =0                      ;
  output_sep =false                     ;
  doisccp = false                       ;
  domodis = false                       ;
  domisr = false                        ;
  dosimfilesout = false                 ;
  doSAMconditionals = false             ;
  dosatupdnconditionals = false         ;
  doscamiopdata = false                 ;
  dozero_out_day0 = false               ;
  nsave3Dstart =99999999                ;
  nsave3Dend  =99999999                 ;
  save3Dbin =false                      ;
  save3Dsep =false                      ;
  qnsave3D =0.                          ;
  dogzip3D =false                       ;
  rad3Dout = false                      ;
  nsave2D =1000                         ;
  nsave2Dstart =99999999                ;
  nsave2Dend =99999999                  ;
  save2Dbin =false                      ;
  save2Dsep =false                      ;
  save2Davg =false                      ;
  dogzip2D =false                       ;
  nstatmom =1000                        ;
  nstatmomstart =99999999               ;
  nstatmomend =99999999                 ;
  savemomsep =false                     ;
  savemombin =false                     ;
  nmovie =1000                          ;
  nmoviestart =99999999                 ;
  nmovieend =99999999                   ;
  isInitialized_scamiopdata = false     ;
  wgls_holds_omega = false              ;
  advect_sgs = false                    ;
}


void finalize() {
  t00              = real2d();
  tln              = real2d();
  qln              = real2d();
  qccln            = real2d();
  qiiln            = real2d();
  uln              = real2d();
  vln              = real2d();
#ifdef MMF_ESMT
  uln_esmt         = real2d();
  vln_esmt         = real2d();
#endif
  cwp              = real3d();
  cwph             = real3d();
  cwpm             = real3d();
  cwpl             = real3d();
  cltemp           = real3d();
  cmtemp           = real3d();
  chtemp           = real3d();
  cttemp           = real3d();
  dd_crm           = real2d();
  mui_crm          = real2d();
  mdi_crm          = real2d();
  ustar            = real1d();
  wnd              = real1d();
  qtot             = real2d();
  colprec          = real1d();
  colprecs         = real1d();
  bflx             = real1d();
  flag_top         = int3d ();  
  accrsc           = real2d();
  accrsi           = real2d();
  accrrc           = real2d();
  coefice          = real2d();
  accrgc           = real2d();
  accrgi           = real2d();
  evaps1           = real2d();
  evaps2           = real2d();
  evapr1           = real2d();
  evapr2           = real2d();
  evapg1           = real2d();
  evapg2           = real2d();
  micro_field      = real5d();
  fluxbmk          = real4d();
  fluxtmk          = real4d();
  mkwle            = real3d();
  mkwsb            = real3d();
  mkadv            = real3d();
  mkdiff           = real3d();
  qn               = real4d();
  qpsrc            = real2d();
  qpevp            = real2d();
  flag_precip      = intHost1d();
  fcorz            = real1d(); 
  fcor             = real1d(); 
  longitude0       = real1d(); 
  latitude0        = real1d(); 
  z0               = real1d(); 
  uhl              = real1d(); 
  vhl              = real1d(); 
  taux0            = real1d(); 
  tauy0            = real1d(); 
  sgs_field        = real5d();
  sgs_field_diag   = real5d();
  grdf_x           = real2d();
  grdf_y           = real2d();
  grdf_z           = real2d();
  tkesbbuoy        = real2d();
  tkesbshear       = real2d();
  tkesbdiss        = real2d();
  z                = real2d(); 
  pres             = real2d(); 
  zi               = real2d(); 
  presi            = real2d(); 
  adz              = real2d(); 
  adzw             = real2d(); 
  dz               = real1d(); 
  dt3              = real1d(); 
  u                = real4d();
  v                = real4d();
  w                = real4d();
  t                = real4d();
  p                = real4d();
  tabs             = real4d();
  qv               = real4d();
  qcl              = real4d();
  qpl              = real4d();
  qci              = real4d();
  qpi              = real4d();
  tke2             = real4d();
  tk2              = real4d();
  dudt             = real5d();
  dvdt             = real5d();
  dwdt             = real5d();
  misc             = real4d();
  fluxbu           = real3d();
  fluxbv           = real3d();
  fluxbt           = real3d();
  fluxbq           = real3d();
  fluxtu           = real3d();
  fluxtv           = real3d();
  fluxtt           = real3d();
  fluxtq           = real3d();
  fzero            = real3d();
  precsfc          = real3d();
  precssfc         = real3d();
  t0               = real2d();
  q0               = real2d();
  qv0              = real2d();
  tabs0            = real2d();
  tv0              = real2d();
  u0               = real2d();
  v0               = real2d();
  tg0              = real2d();
  qg0              = real2d();
  ug0              = real2d();
  vg0              = real2d();
  p0               = real2d();
  tke0             = real2d();
  t01              = real2d();
  q01              = real2d();
  qp0              = real2d();
  qn0              = real2d();
  prespot          = real2d();
  rho              = real2d();
  rhow             = real2d();
  bet              = real2d();
  gamaz            = real2d();
  wsub             = real2d();
  qtend            = real2d();
  ttend            = real2d();
  utend            = real2d();
  vtend            = real2d();
  sstxy            = real3d();
  fcory            = real2d();
  fcorzy           = real2d();
  latitude         = real3d();
  longitude        = real3d();
  prec_xy          = real3d();
  pw_xy            = real3d();
  cw_xy            = real3d();
  iw_xy            = real3d();
  cld_xy           = real3d();
  u200_xy          = real3d();
  usfc_xy          = real3d();
  v200_xy          = real3d();
  vsfc_xy          = real3d();
  w500_xy          = real3d();
  w_max            = real2d();
  u_max            = real2d();
  twsb             = real2d();
  precflux         = real2d();
  uwle             = real2d();
  uwsb             = real2d();
  vwle             = real2d();
  vwsb             = real2d();
  tkelediss        = real2d();
  tdiff            = real2d();
  tlat             = real2d();
  tlatqi           = real2d();
  qifall           = real2d();
  qpfall           = real2d();
  total_water_evap = real3d();
  total_water_prec = real3d();
  CF3D             = real4d();
  u850_xy          = real3d();
  v850_xy          = real3d();
  psfc_xy          = real3d();
  swvp_xy          = real3d();
  cloudtopheight   = real3d();
  echotopheight    = real3d();
  cloudtoptemp     = real3d();
  crm_clear_rh_cnt = int2d();
#ifdef MMF_ESMT
  u_esmt           = real4d();
  v_esmt           = real4d();
  u_esmt_sgs       = real2d();
  v_esmt_sgs       = real2d();
  u_esmt_diff      = real2d();
  v_esmt_diff      = real2d();
  fluxb_u_esmt     = real3d();
  fluxb_v_esmt     = real3d();
  fluxt_u_esmt     = real3d();
  fluxt_v_esmt     = real3d();
#endif
  t_vt             = real2d();
  q_vt             = real2d();
  u_vt             = real2d();
  t_vt_tend        = real2d();
  q_vt_tend        = real2d();
  u_vt_tend        = real2d();
  t_vt_pert        = real4d();
  q_vt_pert        = real4d();
  u_vt_pert        = real4d();
}




void create_and_copy_inputs(real *crm_input_bflxls_p, real *crm_input_wndls_p, real *crm_input_zmid_p, real *crm_input_zint_p, 
                            real *crm_input_pmid_p, real *crm_input_pint_p, real *crm_input_pdel_p, real *crm_input_ul_p, real *crm_input_vl_p, 
                            real *crm_input_tl_p, real *crm_input_qccl_p, real *crm_input_qiil_p, real *crm_input_ql_p, real *crm_input_tau00_p, 
#ifdef MMF_ESMT
                            real *crm_input_ul_esmt_p, real *crm_input_vl_esmt_p,
#endif
                            real *crm_input_t_vt_p, real *crm_input_q_vt_p, real *crm_input_u_vt_p,
                            real *crm_state_u_wind_p, real *crm_state_v_wind_p, real *crm_state_w_wind_p, real *crm_state_temperature_p, 
                            real *crm_state_qt_p, real *crm_state_qp_p, real *crm_state_qn_p, real *crm_rad_qrad_p, real *crm_output_subcycle_factor_p, 
                            real *lat0_p, real *long0_p, int *gcolp_p, real *crm_output_cltot_p, real *crm_output_clhgh_p, real *crm_output_clmed_p,
                            real *crm_output_cllow_p) {

  // Wrap the pointers we're going to copy to device Arrays
  realHost1d crm_input_bflxls          = realHost1d( "crm_input_bflxls        ",crm_input_bflxls_p                                         , pcols);
  realHost1d crm_input_wndls           = realHost1d( "crm_input_wndls         ",crm_input_wndls_p                                          , pcols);
  realHost2d crm_input_zmid            = realHost2d( "crm_input_zmid          ",crm_input_zmid_p                              , plev       , pcols); 
  realHost2d crm_input_zint            = realHost2d( "crm_input_zint          ",crm_input_zint_p                              , plev+1     , pcols); 
  realHost2d crm_input_pmid            = realHost2d( "crm_input_pmid          ",crm_input_pmid_p                              , plev       , pcols); 
  realHost2d crm_input_pint            = realHost2d( "crm_input_pint          ",crm_input_pint_p                              , plev+1     , pcols); 
  realHost2d crm_input_pdel            = realHost2d( "crm_input_pdel          ",crm_input_pdel_p                              , plev       , pcols); 
  realHost2d crm_input_ul              = realHost2d( "crm_input_ul            ",crm_input_ul_p                                , plev       , pcols); 
  realHost2d crm_input_vl              = realHost2d( "crm_input_vl            ",crm_input_vl_p                                , plev       , pcols); 
  realHost2d crm_input_tl              = realHost2d( "crm_input_tl            ",crm_input_tl_p                                , plev       , pcols); 
  realHost2d crm_input_qccl            = realHost2d( "crm_input_qccl          ",crm_input_qccl_p                              , plev       , pcols); 
  realHost2d crm_input_qiil            = realHost2d( "crm_input_qiil          ",crm_input_qiil_p                              , plev       , pcols); 
  realHost2d crm_input_ql              = realHost2d( "crm_input_ql            ",crm_input_ql_p                                , plev       , pcols); 
  realHost1d crm_input_tau00           = realHost1d( "crm_input_tau00         ",crm_input_tau00_p                                          , pcols); 
#ifdef MMF_ESMT
  realHost2d crm_input_ul_esmt         = realHost2d( "crm_input_ul_esmt       ",crm_input_ul_esmt_p                            , plev       , pcols);
  realHost2d crm_input_vl_esmt         = realHost2d( "crm_input_vl_esmt       ",crm_input_vl_esmt_p                            , plev       , pcols);
#endif
  realHost2d crm_input_t_vt           = realHost2d( "crm_input_t_vt         ",crm_input_t_vt_p                             , plev       , pcols);  
  realHost2d crm_input_q_vt           = realHost2d( "crm_input_q_vt         ",crm_input_q_vt_p                             , plev       , pcols); 
  realHost2d crm_input_u_vt           = realHost2d( "crm_input_u_vt         ",crm_input_u_vt_p                             , plev       , pcols); 
  realHost4d crm_state_u_wind          = realHost4d( "crm_state_u_wind        ",crm_state_u_wind_p         , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_v_wind          = realHost4d( "crm_state_v_wind        ",crm_state_v_wind_p         , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_w_wind          = realHost4d( "crm_state_w_wind        ",crm_state_w_wind_p         , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_temperature     = realHost4d( "crm_state_temperature   ",crm_state_temperature_p    , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_qt              = realHost4d( "crm_state_qt            ",crm_state_qt_p             , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_qp              = realHost4d( "crm_state_qp            ",crm_state_qp_p             , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_qn              = realHost4d( "crm_state_qn            ",crm_state_qn_p             , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_rad_qrad              = realHost4d( "crm_rad_qrad            ",crm_rad_qrad_p             , crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  realHost1d crm_output_subcycle_factor  = realHost1d( "crm_output_subcycle_factor",crm_output_subcycle_factor_p                                 , pcols); 
  realHost1d lat0                      = realHost1d( "lat0                    ",lat0_p                                                     , ncrms); 
  realHost1d long0                     = realHost1d( "long0                   ",long0_p                                                    , ncrms); 
  intHost1d  gcolp                     = intHost1d ( "gcolp                   ",gcolp_p                                                    , ncrms); 
  realHost1d crm_output_cltot          = realHost1d( "crm_output_cltot        ",crm_output_cltot_p                                         , pcols); 
  realHost1d crm_output_clhgh          = realHost1d( "crm_output_clhgh        ",crm_output_clhgh_p                                         , pcols); 
  realHost1d crm_output_clmed          = realHost1d( "crm_output_clmed        ",crm_output_clmed_p                                         , pcols); 
  realHost1d crm_output_cllow          = realHost1d( "crm_output_cllow        ",crm_output_cllow_p                                         , pcols); 

  // Allocate space for all of the variables
  ::crm_input_bflxls          = real1d( "crm_input_bflxls        "                                , pcols);
  ::crm_input_wndls           = real1d( "crm_input_wndls         "                                , pcols);
  ::crm_input_zmid            = real2d( "crm_input_zmid          "                   , plev       , pcols); 
  ::crm_input_zint            = real2d( "crm_input_zint          "                   , plev+1     , pcols); 
  ::crm_input_pmid            = real2d( "crm_input_pmid          "                   , plev       , pcols); 
  ::crm_input_pint            = real2d( "crm_input_pint          "                   , plev+1     , pcols); 
  ::crm_input_pdel            = real2d( "crm_input_pdel          "                   , plev       , pcols); 
  ::crm_input_ul              = real2d( "crm_input_ul            "                   , plev       , pcols); 
  ::crm_input_vl              = real2d( "crm_input_vl            "                   , plev       , pcols); 
  ::crm_input_tl              = real2d( "crm_input_tl            "                   , plev       , pcols); 
  ::crm_input_qccl            = real2d( "crm_input_qccl          "                   , plev       , pcols); 
  ::crm_input_qiil            = real2d( "crm_input_qiil          "                   , plev       , pcols); 
  ::crm_input_ql              = real2d( "crm_input_ql            "                   , plev       , pcols); 
  ::crm_input_tau00           = real1d( "crm_input_tau00         "                                , pcols);
#ifdef MMF_ESMT
  ::crm_input_ul_esmt         = real2d( "crm_input_ul_esmt       "                   , plev       , pcols);
  ::crm_input_vl_esmt         = real2d( "crm_input_vl_esmt       "                   , plev       , pcols);
#endif 
  ::crm_input_t_vt           = real2d( "crm_input_t_vt         "                   , plev       , pcols); 
  ::crm_input_q_vt           = real2d( "crm_input_q_vt         "                   , plev       , pcols); 
  ::crm_input_u_vt           = real2d( "crm_input_u_vt         "                   , plev       , pcols); 
  ::crm_state_u_wind          = real4d( "crm_state_u_wind        ", crm_nz, crm_ny    , crm_nx    , pcols);
  ::crm_state_v_wind          = real4d( "crm_state_v_wind        ", crm_nz, crm_ny    , crm_nx    , pcols);
  ::crm_state_w_wind          = real4d( "crm_state_w_wind        ", crm_nz, crm_ny    , crm_nx    , pcols);
  ::crm_state_temperature     = real4d( "crm_state_temperature   ", crm_nz, crm_ny    , crm_nx    , pcols);
  ::crm_state_qt              = real4d( "crm_state_qt            ", crm_nz, crm_ny    , crm_nx    , pcols);
  ::crm_state_qp              = real4d( "crm_state_qp            ", crm_nz, crm_ny    , crm_nx    , pcols);
  ::crm_state_qn              = real4d( "crm_state_qn            ", crm_nz, crm_ny    , crm_nx    , pcols);
  ::crm_rad_qrad              = real4d( "crm_rad_qrad            ", crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  ::crm_rad_temperature       = real4d( "crm_rad_temperature     ", crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  ::crm_rad_qv                = real4d( "crm_rad_qv              ", crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  ::crm_rad_qc                = real4d( "crm_rad_qc              ", crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  ::crm_rad_qi                = real4d( "crm_rad_qi              ", crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  ::crm_rad_cld               = real4d( "crm_rad_cld             ", crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  ::crm_output_subcycle_factor  = real1d( "crm_output_subcycle_factor"                                , pcols); 
  ::crm_output_prectend       = real1d( "crm_output_prectend     "                                , pcols); 
  ::crm_output_precstend      = real1d( "crm_output_precstend    "                                , pcols); 
  ::crm_output_cld            = real2d( "crm_output_cld          "                   , plev       , pcols); 
  ::crm_output_cldtop         = real2d( "crm_output_cldtop       "                   , plev       , pcols); 
  ::crm_output_gicewp         = real2d( "crm_output_gicewp       "                   , plev       , pcols); 
  ::crm_output_gliqwp         = real2d( "crm_output_gliqwp       "                   , plev       , pcols); 
  ::crm_output_mctot          = real2d( "crm_output_mctot        "                   , plev       , pcols); 
  ::crm_output_mcup           = real2d( "crm_output_mcup         "                   , plev       , pcols); 
  ::crm_output_mcdn           = real2d( "crm_output_mcdn         "                   , plev       , pcols); 
  ::crm_output_mcuup          = real2d( "crm_output_mcuup        "                   , plev       , pcols); 
  ::crm_output_mcudn          = real2d( "crm_output_mcudn        "                   , plev       , pcols); 
  ::crm_output_qc_mean        = real2d( "crm_output_qc_mean      "                   , plev       , pcols); 
  ::crm_output_qi_mean        = real2d( "crm_output_qi_mean      "                   , plev       , pcols); 
  ::crm_output_qs_mean        = real2d( "crm_output_qs_mean      "                   , plev       , pcols); 
  ::crm_output_qg_mean        = real2d( "crm_output_qg_mean      "                   , plev       , pcols); 
  ::crm_output_qr_mean        = real2d( "crm_output_qr_mean      "                   , plev       , pcols); 
  ::crm_output_mu_crm         = real2d( "crm_output_mu_crm       "                   , plev       , pcols); 
  ::crm_output_md_crm         = real2d( "crm_output_md_crm       "                   , plev       , pcols); 
  ::crm_output_eu_crm         = real2d( "crm_output_eu_crm       "                   , plev       , pcols); 
  ::crm_output_du_crm         = real2d( "crm_output_du_crm       "                   , plev       , pcols); 
  ::crm_output_ed_crm         = real2d( "crm_output_ed_crm       "                   , plev       , pcols); 
  ::crm_output_flux_qt        = real2d( "crm_output_flux_qt      "                   , plev       , pcols); 
  ::crm_output_flux_u         = real2d( "crm_output_flux_u       "                   , plev       , pcols); 
  ::crm_output_flux_v         = real2d( "crm_output_flux_v       "                   , plev       , pcols); 
  ::crm_output_fluxsgs_qt     = real2d( "crm_output_fluxsgs_qt   "                   , plev       , pcols); 
  ::crm_output_tkez           = real2d( "crm_output_tkez         "                   , plev       , pcols); 
  ::crm_output_tkew           = real2d( "crm_output_tkew         "                   , plev       , pcols); 
  ::crm_output_tkesgsz        = real2d( "crm_output_tkesgsz      "                   , plev       , pcols); 
  ::crm_output_tkz            = real2d( "crm_output_tkz          "                   , plev       , pcols); 
  ::crm_output_flux_qp        = real2d( "crm_output_flux_qp      "                   , plev       , pcols); 
  ::crm_output_precflux       = real2d( "crm_output_precflux     "                   , plev       , pcols); 
  ::crm_output_qt_trans       = real2d( "crm_output_qt_trans     "                   , plev       , pcols); 
  ::crm_output_qp_trans       = real2d( "crm_output_qp_trans     "                   , plev       , pcols); 
  ::crm_output_qp_fall        = real2d( "crm_output_qp_fall      "                   , plev       , pcols); 
  ::crm_output_qp_evp         = real2d( "crm_output_qp_evp       "                   , plev       , pcols); 
  ::crm_output_qp_src         = real2d( "crm_output_qp_src       "                   , plev       , pcols); 
  ::crm_output_qt_ls          = real2d( "crm_output_qt_ls        "                   , plev       , pcols); 
  ::crm_output_t_ls           = real2d( "crm_output_t_ls         "                   , plev       , pcols); 
  ::crm_output_jt_crm         = real1d( "crm_output_jt_crm       "                                , pcols); 
  ::crm_output_mx_crm         = real1d( "crm_output_mx_crm       "                                , pcols); 
  ::crm_output_cltot          = real1d( "crm_output_cltot        "                                , pcols); 
  ::crm_output_clhgh          = real1d( "crm_output_clhgh        "                                , pcols); 
  ::crm_output_clmed          = real1d( "crm_output_clmed        "                                , pcols); 
  ::crm_output_cllow          = real1d( "crm_output_cllow        "                                , pcols); 
  ::crm_output_sltend         = real2d( "crm_output_sltend       "                   , plev       , pcols); 
  ::crm_output_qltend         = real2d( "crm_output_qltend       "                   , plev       , pcols); 
  ::crm_output_qcltend        = real2d( "crm_output_qcltend      "                   , plev       , pcols); 
  ::crm_output_qiltend        = real2d( "crm_output_qiltend      "                   , plev       , pcols); 
  ::crm_output_t_vt_tend      = real2d( "crm_output_t_vt_tend    "                   , plev       , pcols); 
  ::crm_output_q_vt_tend      = real2d( "crm_output_q_vt_tend    "                   , plev       , pcols); 
  ::crm_output_u_vt_tend      = real2d( "crm_output_u_vt_tend    "                   , plev       , pcols); 
  ::crm_output_t_vt_ls        = real2d( "crm_output_t_vt_ls      "                   , plev       , pcols); 
  ::crm_output_q_vt_ls        = real2d( "crm_output_q_vt_ls      "                   , plev       , pcols); 
  ::crm_output_u_vt_ls        = real2d( "crm_output_u_vt_ls      "                   , plev       , pcols); 
#ifdef MMF_MOMENTUM_FEEDBACK
  ::crm_output_ultend         = real2d( "crm_output_ultend       "                   , plev       , pcols); 
  ::crm_output_vltend         = real2d( "crm_output_vltend       "                   , plev       , pcols); 
#endif
  ::crm_output_tk             = real4d( "crm_output_tk           ",   crm_nz, crm_ny    , crm_nx  , pcols); 
  ::crm_output_tkh            = real4d( "crm_output_tkh          ",   crm_nz, crm_ny    , crm_nx  , pcols);
  ::crm_output_qcl            = real4d( "crm_output_qcl          ",   crm_nz, crm_ny    , crm_nx  , pcols);
  ::crm_output_qci            = real4d( "crm_output_qci          ",   crm_nz, crm_ny    , crm_nx  , pcols);
  ::crm_output_qpl            = real4d( "crm_output_qpl          ",   crm_nz, crm_ny    , crm_nx  , pcols);
  ::crm_output_qpi            = real4d( "crm_output_qpi          ",   crm_nz, crm_ny    , crm_nx  , pcols);
  ::crm_output_z0m            = real1d( "crm_output_z0m          "                                , pcols); 
  ::crm_output_taux           = real1d( "crm_output_taux         "                                , pcols); 
  ::crm_output_tauy           = real1d( "crm_output_tauy         "                                , pcols); 
  ::crm_output_precc          = real1d( "crm_output_precc        "                                , pcols); 
  ::crm_output_precl          = real1d( "crm_output_precl        "                                , pcols); 
  ::crm_output_precsc         = real1d( "crm_output_precsc       "                                , pcols); 
  ::crm_output_precsl         = real1d( "crm_output_precsl       "                                , pcols); 
  ::crm_output_prec_crm       = real3d( "crm_output_prec_crm     "          , crm_ny    , crm_nx  , pcols); 
#ifdef MMF_ESMT
  ::crm_output_u_tend_esmt    = real2d( "crm_output_u_tend_esmt  "                      , plev    , pcols);
  ::crm_output_v_tend_esmt    = real2d( "crm_output_v_tend_esmt  "                      , plev    , pcols);
#endif 
  ::crm_clear_rh              = real2d( "crm_clear_rh            "                      , crm_nz  , ncrms); 
  ::lat0                      = real1d( "lat0                    "                                , ncrms); 
  ::long0                     = real1d( "long0                   "                                , ncrms); 
  ::gcolp                     = int1d ( "gcolp                   "                                , ncrms); 

  // Copy inputs from host Array to device Array
  crm_input_bflxls        .deep_copy_to(::crm_input_bflxls        );
  crm_input_wndls         .deep_copy_to(::crm_input_wndls         );
  crm_input_zmid          .deep_copy_to(::crm_input_zmid          );
  crm_input_zint          .deep_copy_to(::crm_input_zint          );
  crm_input_pmid          .deep_copy_to(::crm_input_pmid          );
  crm_input_pint          .deep_copy_to(::crm_input_pint          );
  crm_input_pdel          .deep_copy_to(::crm_input_pdel          );
  crm_input_ul            .deep_copy_to(::crm_input_ul            );
  crm_input_vl            .deep_copy_to(::crm_input_vl            );
  crm_input_tl            .deep_copy_to(::crm_input_tl            );
  crm_input_qccl          .deep_copy_to(::crm_input_qccl          );
  crm_input_qiil          .deep_copy_to(::crm_input_qiil          );
  crm_input_ql            .deep_copy_to(::crm_input_ql            );
  crm_input_tau00         .deep_copy_to(::crm_input_tau00         );
#ifdef MMF_ESMT
  crm_input_ul_esmt       .deep_copy_to(::crm_input_ul_esmt       );
  crm_input_vl_esmt       .deep_copy_to(::crm_input_vl_esmt       );
#endif
  crm_input_t_vt         .deep_copy_to(::crm_input_t_vt         );
  crm_input_q_vt         .deep_copy_to(::crm_input_q_vt         );
  crm_input_u_vt         .deep_copy_to(::crm_input_u_vt         );
  crm_state_u_wind        .deep_copy_to(::crm_state_u_wind        );
  crm_state_v_wind        .deep_copy_to(::crm_state_v_wind        );
  crm_state_w_wind        .deep_copy_to(::crm_state_w_wind        );
  crm_state_temperature   .deep_copy_to(::crm_state_temperature   );
  crm_state_qt            .deep_copy_to(::crm_state_qt            );
  crm_state_qp            .deep_copy_to(::crm_state_qp            );
  crm_state_qn            .deep_copy_to(::crm_state_qn            );
  crm_rad_qrad            .deep_copy_to(::crm_rad_qrad            );
  crm_output_subcycle_factor.deep_copy_to(::crm_output_subcycle_factor);
  lat0                    .deep_copy_to(::lat0                    );
  long0                   .deep_copy_to(::long0                   );
  gcolp                   .deep_copy_to(::gcolp                   );
  crm_output_cltot        .deep_copy_to(::crm_output_cltot        );
  crm_output_clhgh        .deep_copy_to(::crm_output_clhgh        );
  crm_output_clmed        .deep_copy_to(::crm_output_clmed        );
  crm_output_cllow        .deep_copy_to(::crm_output_cllow        );
}



void copy_outputs(real *crm_state_u_wind_p, real *crm_state_v_wind_p, real *crm_state_w_wind_p, real *crm_state_temperature_p, 
                  real *crm_state_qt_p, real *crm_state_qp_p, real *crm_state_qn_p, real *crm_rad_temperature_p, 
                  real *crm_rad_qv_p, real *crm_rad_qc_p, real *crm_rad_qi_p, real *crm_rad_cld_p, real *crm_output_subcycle_factor_p, 
                  real *crm_output_prectend_p, real *crm_output_precstend_p, real *crm_output_cld_p, real *crm_output_cldtop_p, 
                  real *crm_output_gicewp_p, real *crm_output_gliqwp_p, real *crm_output_mctot_p, real *crm_output_mcup_p, real *crm_output_mcdn_p, 
                  real *crm_output_mcuup_p, real *crm_output_mcudn_p, real *crm_output_qc_mean_p, real *crm_output_qi_mean_p, real *crm_output_qs_mean_p, 
                  real *crm_output_qg_mean_p, real *crm_output_qr_mean_p, real *crm_output_mu_crm_p, real *crm_output_md_crm_p, real *crm_output_eu_crm_p, 
                  real *crm_output_du_crm_p, real *crm_output_ed_crm_p, real *crm_output_flux_qt_p, real *crm_output_flux_u_p, real *crm_output_flux_v_p, 
                  real *crm_output_fluxsgs_qt_p, real *crm_output_tkez_p, real *crm_output_tkew_p, real *crm_output_tkesgsz_p, real *crm_output_tkz_p, real *crm_output_flux_qp_p, 
                  real *crm_output_precflux_p, real *crm_output_qt_trans_p, real *crm_output_qp_trans_p, real *crm_output_qp_fall_p, real *crm_output_qp_evp_p, 
                  real *crm_output_qp_src_p, real *crm_output_qt_ls_p, real *crm_output_t_ls_p, real *crm_output_jt_crm_p, real *crm_output_mx_crm_p, real *crm_output_cltot_p, 
                  real *crm_output_clhgh_p, real *crm_output_clmed_p, real *crm_output_cllow_p, 
                  real *crm_output_sltend_p, real *crm_output_qltend_p, real *crm_output_qcltend_p, real *crm_output_qiltend_p,
                  real *crm_output_t_vt_tend_p, real *crm_output_q_vt_tend_p, real *crm_output_u_vt_tend_p,
                  real *crm_output_t_vt_ls_p, real *crm_output_q_vt_ls_p, real *crm_output_u_vt_ls_p,
#ifdef MMF_MOMENTUM_FEEDBACK
                  real *crm_output_ultend_p, real *crm_output_vltend_p,
#endif
                  real *crm_output_tk_p, real *crm_output_tkh_p, real *crm_output_qcl_p, real *crm_output_qci_p, real *crm_output_qpl_p, real *crm_output_qpi_p, 
                  real *crm_output_z0m_p, real *crm_output_taux_p, real *crm_output_tauy_p, real *crm_output_precc_p, real *crm_output_precl_p, real *crm_output_precsc_p, 
                  real *crm_output_precsl_p, real *crm_output_prec_crm_p, 
#ifdef MMF_ESMT
                  real *crm_output_u_tend_esmt_p, real *crm_output_v_tend_esmt_p,
#endif
	          real *crm_clear_rh_p) {

  realHost4d crm_state_u_wind          = realHost4d( "crm_state_u_wind        ",crm_state_u_wind_p         , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_v_wind          = realHost4d( "crm_state_v_wind        ",crm_state_v_wind_p         , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_w_wind          = realHost4d( "crm_state_w_wind        ",crm_state_w_wind_p         , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_temperature     = realHost4d( "crm_state_temperature   ",crm_state_temperature_p    , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_qt              = realHost4d( "crm_state_qt            ",crm_state_qt_p             , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_qp              = realHost4d( "crm_state_qp            ",crm_state_qp_p             , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_qn              = realHost4d( "crm_state_qn            ",crm_state_qn_p             , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_rad_temperature       = realHost4d( "crm_rad_temperature     ",crm_rad_temperature_p      , crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  realHost4d crm_rad_qv                = realHost4d( "crm_rad_qv              ",crm_rad_qv_p               , crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  realHost4d crm_rad_qc                = realHost4d( "crm_rad_qc              ",crm_rad_qc_p               , crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  realHost4d crm_rad_qi                = realHost4d( "crm_rad_qi              ",crm_rad_qi_p               , crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  realHost4d crm_rad_cld               = realHost4d( "crm_rad_cld             ",crm_rad_cld_p              , crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  realHost1d crm_output_subcycle_factor  = realHost1d( "crm_output_subcycle_factor",crm_output_subcycle_factor_p                                 , pcols); 
  realHost1d crm_output_prectend       = realHost1d( "crm_output_prectend     ",crm_output_prectend_p                                      , pcols); 
  realHost1d crm_output_precstend      = realHost1d( "crm_output_precstend    ",crm_output_precstend_p                                     , pcols); 
  realHost2d crm_output_cld            = realHost2d( "crm_output_cld          ",crm_output_cld_p                              , plev       , pcols); 
  realHost2d crm_output_cldtop         = realHost2d( "crm_output_cldtop       ",crm_output_cldtop_p                           , plev       , pcols); 
  realHost2d crm_output_gicewp         = realHost2d( "crm_output_gicewp       ",crm_output_gicewp_p                           , plev       , pcols); 
  realHost2d crm_output_gliqwp         = realHost2d( "crm_output_gliqwp       ",crm_output_gliqwp_p                           , plev       , pcols); 
  realHost2d crm_output_mctot          = realHost2d( "crm_output_mctot        ",crm_output_mctot_p                            , plev       , pcols); 
  realHost2d crm_output_mcup           = realHost2d( "crm_output_mcup         ",crm_output_mcup_p                             , plev       , pcols); 
  realHost2d crm_output_mcdn           = realHost2d( "crm_output_mcdn         ",crm_output_mcdn_p                             , plev       , pcols); 
  realHost2d crm_output_mcuup          = realHost2d( "crm_output_mcuup        ",crm_output_mcuup_p                            , plev       , pcols); 
  realHost2d crm_output_mcudn          = realHost2d( "crm_output_mcudn        ",crm_output_mcudn_p                            , plev       , pcols); 
  realHost2d crm_output_qc_mean        = realHost2d( "crm_output_qc_mean      ",crm_output_qc_mean_p                          , plev       , pcols); 
  realHost2d crm_output_qi_mean        = realHost2d( "crm_output_qi_mean      ",crm_output_qi_mean_p                          , plev       , pcols); 
  realHost2d crm_output_qs_mean        = realHost2d( "crm_output_qs_mean      ",crm_output_qs_mean_p                          , plev       , pcols); 
  realHost2d crm_output_qg_mean        = realHost2d( "crm_output_qg_mean      ",crm_output_qg_mean_p                          , plev       , pcols); 
  realHost2d crm_output_qr_mean        = realHost2d( "crm_output_qr_mean      ",crm_output_qr_mean_p                          , plev       , pcols); 
  realHost2d crm_output_mu_crm         = realHost2d( "crm_output_mu_crm       ",crm_output_mu_crm_p                           , plev       , pcols); 
  realHost2d crm_output_md_crm         = realHost2d( "crm_output_md_crm       ",crm_output_md_crm_p                           , plev       , pcols); 
  realHost2d crm_output_eu_crm         = realHost2d( "crm_output_eu_crm       ",crm_output_eu_crm_p                           , plev       , pcols); 
  realHost2d crm_output_du_crm         = realHost2d( "crm_output_du_crm       ",crm_output_du_crm_p                           , plev       , pcols); 
  realHost2d crm_output_ed_crm         = realHost2d( "crm_output_ed_crm       ",crm_output_ed_crm_p                           , plev       , pcols); 
  realHost2d crm_output_flux_qt        = realHost2d( "crm_output_flux_qt      ",crm_output_flux_qt_p                          , plev       , pcols); 
  realHost2d crm_output_flux_u         = realHost2d( "crm_output_flux_u       ",crm_output_flux_u_p                           , plev       , pcols); 
  realHost2d crm_output_flux_v         = realHost2d( "crm_output_flux_v       ",crm_output_flux_v_p                           , plev       , pcols); 
  realHost2d crm_output_fluxsgs_qt     = realHost2d( "crm_output_fluxsgs_qt   ",crm_output_fluxsgs_qt_p                       , plev       , pcols); 
  realHost2d crm_output_tkez           = realHost2d( "crm_output_tkez         ",crm_output_tkez_p                             , plev       , pcols); 
  realHost2d crm_output_tkew           = realHost2d( "crm_output_tkew         ",crm_output_tkew_p                             , plev       , pcols); 
  realHost2d crm_output_tkesgsz        = realHost2d( "crm_output_tkesgsz      ",crm_output_tkesgsz_p                          , plev       , pcols); 
  realHost2d crm_output_tkz            = realHost2d( "crm_output_tkz          ",crm_output_tkz_p                              , plev       , pcols); 
  realHost2d crm_output_flux_qp        = realHost2d( "crm_output_flux_qp      ",crm_output_flux_qp_p                          , plev       , pcols); 
  realHost2d crm_output_precflux       = realHost2d( "crm_output_precflux     ",crm_output_precflux_p                         , plev       , pcols); 
  realHost2d crm_output_qt_trans       = realHost2d( "crm_output_qt_trans     ",crm_output_qt_trans_p                         , plev       , pcols); 
  realHost2d crm_output_qp_trans       = realHost2d( "crm_output_qp_trans     ",crm_output_qp_trans_p                         , plev       , pcols); 
  realHost2d crm_output_qp_fall        = realHost2d( "crm_output_qp_fall      ",crm_output_qp_fall_p                          , plev       , pcols); 
  realHost2d crm_output_qp_evp         = realHost2d( "crm_output_qp_evp       ",crm_output_qp_evp_p                           , plev       , pcols); 
  realHost2d crm_output_qp_src         = realHost2d( "crm_output_qp_src       ",crm_output_qp_src_p                           , plev       , pcols); 
  realHost2d crm_output_qt_ls          = realHost2d( "crm_output_qt_ls        ",crm_output_qt_ls_p                            , plev       , pcols); 
  realHost2d crm_output_t_ls           = realHost2d( "crm_output_t_ls         ",crm_output_t_ls_p                             , plev       , pcols); 
  realHost1d crm_output_jt_crm         = realHost1d( "crm_output_jt_crm       ",crm_output_jt_crm_p                                        , pcols); 
  realHost1d crm_output_mx_crm         = realHost1d( "crm_output_mx_crm       ",crm_output_mx_crm_p                                        , pcols); 
  realHost1d crm_output_cltot          = realHost1d( "crm_output_cltot        ",crm_output_cltot_p                                         , pcols); 
  realHost1d crm_output_clhgh          = realHost1d( "crm_output_clhgh        ",crm_output_clhgh_p                                         , pcols); 
  realHost1d crm_output_clmed          = realHost1d( "crm_output_clmed        ",crm_output_clmed_p                                         , pcols); 
  realHost1d crm_output_cllow          = realHost1d( "crm_output_cllow        ",crm_output_cllow_p                                         , pcols); 
  realHost2d crm_output_sltend         = realHost2d( "crm_output_sltend       ",crm_output_sltend_p                           , plev       , pcols); 
  realHost2d crm_output_qltend         = realHost2d( "crm_output_qltend       ",crm_output_qltend_p                           , plev       , pcols); 
  realHost2d crm_output_qcltend        = realHost2d( "crm_output_qcltend      ",crm_output_qcltend_p                          , plev       , pcols); 
  realHost2d crm_output_qiltend        = realHost2d( "crm_output_qiltend      ",crm_output_qiltend_p                          , plev       , pcols); 
  realHost2d crm_output_t_vt_tend      = realHost2d( "crm_output_t_vt_tend    ",crm_output_t_vt_tend_p                        , plev       , pcols); 
  realHost2d crm_output_q_vt_tend      = realHost2d( "crm_output_q_vt_tend    ",crm_output_q_vt_tend_p                        , plev       , pcols); 
  realHost2d crm_output_u_vt_tend      = realHost2d( "crm_output_u_vt_tend    ",crm_output_u_vt_tend_p                        , plev       , pcols); 
  realHost2d crm_output_t_vt_ls        = realHost2d( "crm_output_t_vt_ls      ",crm_output_t_vt_ls_p                          , plev       , pcols); 
  realHost2d crm_output_q_vt_ls        = realHost2d( "crm_output_q_vt_ls      ",crm_output_q_vt_ls_p                          , plev       , pcols); 
  realHost2d crm_output_u_vt_ls        = realHost2d( "crm_output_u_vt_ls      ",crm_output_u_vt_ls_p                          , plev       , pcols); 
#ifdef MMF_MOMENTUM_FEEDBACK
  realHost2d crm_output_ultend         = realHost2d( "crm_output_ultend       ",crm_output_ultend_p                           , plev       , pcols); 
  realHost2d crm_output_vltend         = realHost2d( "crm_output_vltend       ",crm_output_vltend_p                           , plev       , pcols); 
#endif
  realHost4d crm_output_tk             = realHost4d( "crm_output_tk           ",crm_output_tk_p            ,   crm_nz, crm_ny    , crm_nx  , pcols); 
  realHost4d crm_output_tkh            = realHost4d( "crm_output_tkh          ",crm_output_tkh_p           ,   crm_nz, crm_ny    , crm_nx  , pcols);
  realHost4d crm_output_qcl            = realHost4d( "crm_output_qcl          ",crm_output_qcl_p           ,   crm_nz, crm_ny    , crm_nx  , pcols);
  realHost4d crm_output_qci            = realHost4d( "crm_output_qci          ",crm_output_qci_p           ,   crm_nz, crm_ny    , crm_nx  , pcols);
  realHost4d crm_output_qpl            = realHost4d( "crm_output_qpl          ",crm_output_qpl_p           ,   crm_nz, crm_ny    , crm_nx  , pcols);
  realHost4d crm_output_qpi            = realHost4d( "crm_output_qpi          ",crm_output_qpi_p           ,   crm_nz, crm_ny    , crm_nx  , pcols);
  realHost1d crm_output_z0m            = realHost1d( "crm_output_z0m          ",crm_output_z0m_p                                           , pcols); 
  realHost1d crm_output_taux           = realHost1d( "crm_output_taux         ",crm_output_taux_p                                          , pcols); 
  realHost1d crm_output_tauy           = realHost1d( "crm_output_tauy         ",crm_output_tauy_p                                          , pcols); 
  realHost1d crm_output_precc          = realHost1d( "crm_output_precc        ",crm_output_precc_p                                         , pcols); 
  realHost1d crm_output_precl          = realHost1d( "crm_output_precl        ",crm_output_precl_p                                         , pcols); 
  realHost1d crm_output_precsc         = realHost1d( "crm_output_precsc       ",crm_output_precsc_p                                        , pcols); 
  realHost1d crm_output_precsl         = realHost1d( "crm_output_precsl       ",crm_output_precsl_p                                        , pcols); 
  realHost3d crm_output_prec_crm       = realHost3d( "crm_output_prec_crm     ",crm_output_prec_crm_p                , crm_ny    , crm_nx  , pcols);  
  realHost2d crm_clear_rh              = realHost2d( "crm_clear_rh            ",crm_clear_rh_p                                   , crm_nz  , ncrms);
#ifdef MMF_ESMT
  realHost2d crm_output_u_tend_esmt    = realHost2d( "crm_output_u_tend_esmt  ",crm_output_u_tend_esmt_p                         , plev    , pcols);
  realHost2d crm_output_v_tend_esmt    = realHost2d( "crm_output_v_tend_esmt  ",crm_output_v_tend_esmt_p                         , plev    , pcols);
#endif

  crm_state_u_wind          .deep_copy_to( ::crm_state_u_wind           );
  crm_state_v_wind          .deep_copy_to( ::crm_state_v_wind           );
  crm_state_w_wind          .deep_copy_to( ::crm_state_w_wind           );
  crm_state_temperature     .deep_copy_to( ::crm_state_temperature      );
  crm_state_qt              .deep_copy_to( ::crm_state_qt               );
  crm_state_qp              .deep_copy_to( ::crm_state_qp               );
  crm_state_qn              .deep_copy_to( ::crm_state_qn               );
  crm_rad_temperature       .deep_copy_to( ::crm_rad_temperature        );
  crm_rad_qv                .deep_copy_to( ::crm_rad_qv                 );
  crm_rad_qc                .deep_copy_to( ::crm_rad_qc                 );
  crm_rad_qi                .deep_copy_to( ::crm_rad_qi                 );
  crm_rad_cld               .deep_copy_to( ::crm_rad_cld                );
  crm_output_subcycle_factor  .deep_copy_to( ::crm_output_subcycle_factor   ); 
  crm_output_prectend       .deep_copy_to( ::crm_output_prectend        ); 
  crm_output_precstend      .deep_copy_to( ::crm_output_precstend       ); 
  crm_output_cld            .deep_copy_to( ::crm_output_cld             ); 
  crm_output_cldtop         .deep_copy_to( ::crm_output_cldtop          ); 
  crm_output_gicewp         .deep_copy_to( ::crm_output_gicewp          ); 
  crm_output_gliqwp         .deep_copy_to( ::crm_output_gliqwp          ); 
  crm_output_mctot          .deep_copy_to( ::crm_output_mctot           ); 
  crm_output_mcup           .deep_copy_to( ::crm_output_mcup            ); 
  crm_output_mcdn           .deep_copy_to( ::crm_output_mcdn            ); 
  crm_output_mcuup          .deep_copy_to( ::crm_output_mcuup           ); 
  crm_output_mcudn          .deep_copy_to( ::crm_output_mcudn           ); 
  crm_output_qc_mean        .deep_copy_to( ::crm_output_qc_mean         ); 
  crm_output_qi_mean        .deep_copy_to( ::crm_output_qi_mean         ); 
  crm_output_qs_mean        .deep_copy_to( ::crm_output_qs_mean         ); 
  crm_output_qg_mean        .deep_copy_to( ::crm_output_qg_mean         ); 
  crm_output_qr_mean        .deep_copy_to( ::crm_output_qr_mean         ); 
  crm_output_mu_crm         .deep_copy_to( ::crm_output_mu_crm          ); 
  crm_output_md_crm         .deep_copy_to( ::crm_output_md_crm          ); 
  crm_output_eu_crm         .deep_copy_to( ::crm_output_eu_crm          ); 
  crm_output_du_crm         .deep_copy_to( ::crm_output_du_crm          ); 
  crm_output_ed_crm         .deep_copy_to( ::crm_output_ed_crm          ); 
  crm_output_flux_qt        .deep_copy_to( ::crm_output_flux_qt         ); 
  crm_output_flux_u         .deep_copy_to( ::crm_output_flux_u          ); 
  crm_output_flux_v         .deep_copy_to( ::crm_output_flux_v          ); 
  crm_output_fluxsgs_qt     .deep_copy_to( ::crm_output_fluxsgs_qt      ); 
  crm_output_tkez           .deep_copy_to( ::crm_output_tkez            ); 
  crm_output_tkew           .deep_copy_to( ::crm_output_tkew            ); 
  crm_output_tkesgsz        .deep_copy_to( ::crm_output_tkesgsz         ); 
  crm_output_tkz            .deep_copy_to( ::crm_output_tkz             ); 
  crm_output_flux_qp        .deep_copy_to( ::crm_output_flux_qp         ); 
  crm_output_precflux       .deep_copy_to( ::crm_output_precflux        ); 
  crm_output_qt_trans       .deep_copy_to( ::crm_output_qt_trans        ); 
  crm_output_qp_trans       .deep_copy_to( ::crm_output_qp_trans        ); 
  crm_output_qp_fall        .deep_copy_to( ::crm_output_qp_fall         ); 
  crm_output_qp_evp         .deep_copy_to( ::crm_output_qp_evp          ); 
  crm_output_qp_src         .deep_copy_to( ::crm_output_qp_src          ); 
  crm_output_qt_ls          .deep_copy_to( ::crm_output_qt_ls           ); 
  crm_output_t_ls           .deep_copy_to( ::crm_output_t_ls            ); 
  crm_output_jt_crm         .deep_copy_to( ::crm_output_jt_crm          ); 
  crm_output_mx_crm         .deep_copy_to( ::crm_output_mx_crm          ); 
  crm_output_cltot          .deep_copy_to( ::crm_output_cltot           ); 
  crm_output_clhgh          .deep_copy_to( ::crm_output_clhgh           ); 
  crm_output_clmed          .deep_copy_to( ::crm_output_clmed           ); 
  crm_output_cllow          .deep_copy_to( ::crm_output_cllow           ); 
  crm_output_sltend         .deep_copy_to( ::crm_output_sltend          ); 
  crm_output_qltend         .deep_copy_to( ::crm_output_qltend          ); 
  crm_output_qcltend        .deep_copy_to( ::crm_output_qcltend         ); 
  crm_output_qiltend        .deep_copy_to( ::crm_output_qiltend         ); 
  crm_output_t_vt_tend      .deep_copy_to( ::crm_output_t_vt_tend       ); 
  crm_output_q_vt_tend      .deep_copy_to( ::crm_output_q_vt_tend       ); 
  crm_output_u_vt_tend      .deep_copy_to( ::crm_output_u_vt_tend       ); 
  crm_output_t_vt_ls        .deep_copy_to( ::crm_output_t_vt_ls         ); 
  crm_output_q_vt_ls        .deep_copy_to( ::crm_output_q_vt_ls         ); 
  crm_output_u_vt_ls        .deep_copy_to( ::crm_output_u_vt_ls         ); 
#ifdef MMF_MOMENTUM_FEEDBACK
  crm_output_ultend         .deep_copy_to( ::crm_output_ultend          ); 
  crm_output_vltend         .deep_copy_to( ::crm_output_vltend          ); 
#endif
  crm_output_tk             .deep_copy_to( ::crm_output_tk              ); 
  crm_output_tkh            .deep_copy_to( ::crm_output_tkh             );
  crm_output_qcl            .deep_copy_to( ::crm_output_qcl             );
  crm_output_qci            .deep_copy_to( ::crm_output_qci             );
  crm_output_qpl            .deep_copy_to( ::crm_output_qpl             );
  crm_output_qpi            .deep_copy_to( ::crm_output_qpi             );
  crm_output_z0m            .deep_copy_to( ::crm_output_z0m             ); 
  crm_output_taux           .deep_copy_to( ::crm_output_taux            ); 
  crm_output_tauy           .deep_copy_to( ::crm_output_tauy            ); 
  crm_output_precc          .deep_copy_to( ::crm_output_precc           ); 
  crm_output_precl          .deep_copy_to( ::crm_output_precl           ); 
  crm_output_precsc         .deep_copy_to( ::crm_output_precsc          ); 
  crm_output_precsl         .deep_copy_to( ::crm_output_precsl          ); 
  crm_output_prec_crm       .deep_copy_to( ::crm_output_prec_crm        );  
  crm_clear_rh              .deep_copy_to( ::crm_clear_rh               );  
#ifdef MMF_ESMT
  crm_output_u_tend_esmt    .deep_copy_to( ::crm_output_u_tend_esmt     );
  crm_output_v_tend_esmt    .deep_copy_to( ::crm_output_v_tend_esmt     );
#endif
}



void copy_outputs_and_destroy(real *crm_state_u_wind_p, real *crm_state_v_wind_p, real *crm_state_w_wind_p, real *crm_state_temperature_p, 
                              real *crm_state_qt_p, real *crm_state_qp_p, real *crm_state_qn_p, real *crm_rad_temperature_p, 
                              real *crm_rad_qv_p, real *crm_rad_qc_p, real *crm_rad_qi_p, real *crm_rad_cld_p, real *crm_output_subcycle_factor_p, 
                              real *crm_output_prectend_p, real *crm_output_precstend_p, real *crm_output_cld_p, real *crm_output_cldtop_p, 
                              real *crm_output_gicewp_p, real *crm_output_gliqwp_p, real *crm_output_mctot_p, real *crm_output_mcup_p, real *crm_output_mcdn_p, 
                              real *crm_output_mcuup_p, real *crm_output_mcudn_p, real *crm_output_qc_mean_p, real *crm_output_qi_mean_p, real *crm_output_qs_mean_p, 
                              real *crm_output_qg_mean_p, real *crm_output_qr_mean_p, real *crm_output_mu_crm_p, real *crm_output_md_crm_p, real *crm_output_eu_crm_p, 
                              real *crm_output_du_crm_p, real *crm_output_ed_crm_p, real *crm_output_flux_qt_p, real *crm_output_flux_u_p, real *crm_output_flux_v_p, 
                              real *crm_output_fluxsgs_qt_p, real *crm_output_tkez_p, real *crm_output_tkew_p, real *crm_output_tkesgsz_p, real *crm_output_tkz_p, real *crm_output_flux_qp_p, 
                              real *crm_output_precflux_p, real *crm_output_qt_trans_p, real *crm_output_qp_trans_p, real *crm_output_qp_fall_p, real *crm_output_qp_evp_p, 
                              real *crm_output_qp_src_p, real *crm_output_qt_ls_p, real *crm_output_t_ls_p, real *crm_output_jt_crm_p, real *crm_output_mx_crm_p, real *crm_output_cltot_p, 
                              real *crm_output_clhgh_p, real *crm_output_clmed_p, real *crm_output_cllow_p, 
                              real *crm_output_sltend_p, real *crm_output_qltend_p, real *crm_output_qcltend_p, real *crm_output_qiltend_p,
                              real *crm_output_t_vt_tend_p, real *crm_output_q_vt_tend_p, real *crm_output_u_vt_tend_p,
                              real *crm_output_t_vt_ls_p, real *crm_output_q_vt_ls_p, real *crm_output_u_vt_ls_p,
#ifdef MMF_MOMENTUM_FEEDBACK
                              real *crm_output_ultend_p, real *crm_output_vltend_p,
#endif
                              real *crm_output_tk_p, real *crm_output_tkh_p, real *crm_output_qcl_p, real *crm_output_qci_p, real *crm_output_qpl_p, real *crm_output_qpi_p, 
                              real *crm_output_z0m_p, real *crm_output_taux_p, real *crm_output_tauy_p, real *crm_output_precc_p, real *crm_output_precl_p, real *crm_output_precsc_p, 
                              real *crm_output_precsl_p, real *crm_output_prec_crm_p, 
#ifdef MMF_ESMT
                              real *crm_output_u_tend_esmt_p, real *crm_output_v_tend_esmt_p,
#endif
		                          real *crm_clear_rh_p) {
  
  // Wrap arrays we'll be copying out
  realHost4d crm_state_u_wind          = realHost4d( "crm_state_u_wind        ",crm_state_u_wind_p         , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_v_wind          = realHost4d( "crm_state_v_wind        ",crm_state_v_wind_p         , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_w_wind          = realHost4d( "crm_state_w_wind        ",crm_state_w_wind_p         , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_temperature     = realHost4d( "crm_state_temperature   ",crm_state_temperature_p    , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_qt              = realHost4d( "crm_state_qt            ",crm_state_qt_p             , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_qp              = realHost4d( "crm_state_qp            ",crm_state_qp_p             , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_state_qn              = realHost4d( "crm_state_qn            ",crm_state_qn_p             , crm_nz, crm_ny    , crm_nx    , pcols);
  realHost4d crm_rad_temperature       = realHost4d( "crm_rad_temperature     ",crm_rad_temperature_p      , crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  realHost4d crm_rad_qv                = realHost4d( "crm_rad_qv              ",crm_rad_qv_p               , crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  realHost4d crm_rad_qc                = realHost4d( "crm_rad_qc              ",crm_rad_qc_p               , crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  realHost4d crm_rad_qi                = realHost4d( "crm_rad_qi              ",crm_rad_qi_p               , crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  realHost4d crm_rad_cld               = realHost4d( "crm_rad_cld             ",crm_rad_cld_p              , crm_nz, crm_ny_rad, crm_nx_rad, pcols);
  realHost1d crm_output_subcycle_factor  = realHost1d( "crm_output_subcycle_factor",crm_output_subcycle_factor_p                                 , pcols); 
  realHost1d crm_output_prectend       = realHost1d( "crm_output_prectend     ",crm_output_prectend_p                                      , pcols); 
  realHost1d crm_output_precstend      = realHost1d( "crm_output_precstend    ",crm_output_precstend_p                                     , pcols); 
  realHost2d crm_output_cld            = realHost2d( "crm_output_cld          ",crm_output_cld_p                              , plev       , pcols); 
  realHost2d crm_output_cldtop         = realHost2d( "crm_output_cldtop       ",crm_output_cldtop_p                           , plev       , pcols); 
  realHost2d crm_output_gicewp         = realHost2d( "crm_output_gicewp       ",crm_output_gicewp_p                           , plev       , pcols); 
  realHost2d crm_output_gliqwp         = realHost2d( "crm_output_gliqwp       ",crm_output_gliqwp_p                           , plev       , pcols); 
  realHost2d crm_output_mctot          = realHost2d( "crm_output_mctot        ",crm_output_mctot_p                            , plev       , pcols); 
  realHost2d crm_output_mcup           = realHost2d( "crm_output_mcup         ",crm_output_mcup_p                             , plev       , pcols); 
  realHost2d crm_output_mcdn           = realHost2d( "crm_output_mcdn         ",crm_output_mcdn_p                             , plev       , pcols); 
  realHost2d crm_output_mcuup          = realHost2d( "crm_output_mcuup        ",crm_output_mcuup_p                            , plev       , pcols); 
  realHost2d crm_output_mcudn          = realHost2d( "crm_output_mcudn        ",crm_output_mcudn_p                            , plev       , pcols); 
  realHost2d crm_output_qc_mean        = realHost2d( "crm_output_qc_mean      ",crm_output_qc_mean_p                          , plev       , pcols); 
  realHost2d crm_output_qi_mean        = realHost2d( "crm_output_qi_mean      ",crm_output_qi_mean_p                          , plev       , pcols); 
  realHost2d crm_output_qs_mean        = realHost2d( "crm_output_qs_mean      ",crm_output_qs_mean_p                          , plev       , pcols); 
  realHost2d crm_output_qg_mean        = realHost2d( "crm_output_qg_mean      ",crm_output_qg_mean_p                          , plev       , pcols); 
  realHost2d crm_output_qr_mean        = realHost2d( "crm_output_qr_mean      ",crm_output_qr_mean_p                          , plev       , pcols); 
  realHost2d crm_output_mu_crm         = realHost2d( "crm_output_mu_crm       ",crm_output_mu_crm_p                           , plev       , pcols); 
  realHost2d crm_output_md_crm         = realHost2d( "crm_output_md_crm       ",crm_output_md_crm_p                           , plev       , pcols); 
  realHost2d crm_output_eu_crm         = realHost2d( "crm_output_eu_crm       ",crm_output_eu_crm_p                           , plev       , pcols); 
  realHost2d crm_output_du_crm         = realHost2d( "crm_output_du_crm       ",crm_output_du_crm_p                           , plev       , pcols); 
  realHost2d crm_output_ed_crm         = realHost2d( "crm_output_ed_crm       ",crm_output_ed_crm_p                           , plev       , pcols); 
  realHost2d crm_output_flux_qt        = realHost2d( "crm_output_flux_qt      ",crm_output_flux_qt_p                          , plev       , pcols); 
  realHost2d crm_output_flux_u         = realHost2d( "crm_output_flux_u       ",crm_output_flux_u_p                           , plev       , pcols); 
  realHost2d crm_output_flux_v         = realHost2d( "crm_output_flux_v       ",crm_output_flux_v_p                           , plev       , pcols); 
  realHost2d crm_output_fluxsgs_qt     = realHost2d( "crm_output_fluxsgs_qt   ",crm_output_fluxsgs_qt_p                       , plev       , pcols); 
  realHost2d crm_output_tkez           = realHost2d( "crm_output_tkez         ",crm_output_tkez_p                             , plev       , pcols); 
  realHost2d crm_output_tkew           = realHost2d( "crm_output_tkew         ",crm_output_tkew_p                             , plev       , pcols); 
  realHost2d crm_output_tkesgsz        = realHost2d( "crm_output_tkesgsz      ",crm_output_tkesgsz_p                          , plev       , pcols); 
  realHost2d crm_output_tkz            = realHost2d( "crm_output_tkz          ",crm_output_tkz_p                              , plev       , pcols); 
  realHost2d crm_output_flux_qp        = realHost2d( "crm_output_flux_qp      ",crm_output_flux_qp_p                          , plev       , pcols); 
  realHost2d crm_output_precflux       = realHost2d( "crm_output_precflux     ",crm_output_precflux_p                         , plev       , pcols); 
  realHost2d crm_output_qt_trans       = realHost2d( "crm_output_qt_trans     ",crm_output_qt_trans_p                         , plev       , pcols); 
  realHost2d crm_output_qp_trans       = realHost2d( "crm_output_qp_trans     ",crm_output_qp_trans_p                         , plev       , pcols); 
  realHost2d crm_output_qp_fall        = realHost2d( "crm_output_qp_fall      ",crm_output_qp_fall_p                          , plev       , pcols); 
  realHost2d crm_output_qp_evp         = realHost2d( "crm_output_qp_evp       ",crm_output_qp_evp_p                           , plev       , pcols); 
  realHost2d crm_output_qp_src         = realHost2d( "crm_output_qp_src       ",crm_output_qp_src_p                           , plev       , pcols); 
  realHost2d crm_output_qt_ls          = realHost2d( "crm_output_qt_ls        ",crm_output_qt_ls_p                            , plev       , pcols); 
  realHost2d crm_output_t_ls           = realHost2d( "crm_output_t_ls         ",crm_output_t_ls_p                             , plev       , pcols); 
  realHost1d crm_output_jt_crm         = realHost1d( "crm_output_jt_crm       ",crm_output_jt_crm_p                                        , pcols); 
  realHost1d crm_output_mx_crm         = realHost1d( "crm_output_mx_crm       ",crm_output_mx_crm_p                                        , pcols); 
  realHost1d crm_output_cltot          = realHost1d( "crm_output_cltot        ",crm_output_cltot_p                                         , pcols); 
  realHost1d crm_output_clhgh          = realHost1d( "crm_output_clhgh        ",crm_output_clhgh_p                                         , pcols); 
  realHost1d crm_output_clmed          = realHost1d( "crm_output_clmed        ",crm_output_clmed_p                                         , pcols); 
  realHost1d crm_output_cllow          = realHost1d( "crm_output_cllow        ",crm_output_cllow_p                                         , pcols); 
  realHost2d crm_output_sltend         = realHost2d( "crm_output_sltend       ",crm_output_sltend_p                           , plev       , pcols); 
  realHost2d crm_output_qltend         = realHost2d( "crm_output_qltend       ",crm_output_qltend_p                           , plev       , pcols); 
  realHost2d crm_output_qcltend        = realHost2d( "crm_output_qcltend      ",crm_output_qcltend_p                          , plev       , pcols); 
  realHost2d crm_output_qiltend        = realHost2d( "crm_output_qiltend      ",crm_output_qiltend_p                          , plev       , pcols); 
  realHost2d crm_output_t_vt_tend      = realHost2d( "crm_output_t_vt_tend    ",crm_output_t_vt_tend_p                        , plev       , pcols); 
  realHost2d crm_output_q_vt_tend      = realHost2d( "crm_output_q_vt_tend    ",crm_output_q_vt_tend_p                        , plev       , pcols); 
  realHost2d crm_output_u_vt_tend      = realHost2d( "crm_output_u_vt_tend    ",crm_output_u_vt_tend_p                        , plev       , pcols); 
  realHost2d crm_output_t_vt_ls        = realHost2d( "crm_output_t_vt_ls      ",crm_output_t_vt_ls_p                          , plev       , pcols); 
  realHost2d crm_output_q_vt_ls        = realHost2d( "crm_output_q_vt_ls      ",crm_output_q_vt_ls_p                          , plev       , pcols); 
  realHost2d crm_output_u_vt_ls        = realHost2d( "crm_output_u_vt_ls      ",crm_output_u_vt_ls_p                          , plev       , pcols); 
#ifdef MMF_MOMENTUM_FEEDBACK
  realHost2d crm_output_ultend         = realHost2d( "crm_output_ultend       ",crm_output_ultend_p                           , plev       , pcols); 
  realHost2d crm_output_vltend         = realHost2d( "crm_output_vltend       ",crm_output_vltend_p                           , plev       , pcols); 
#endif
  realHost4d crm_output_tk             = realHost4d( "crm_output_tk           ",crm_output_tk_p            ,   crm_nz, crm_ny    , crm_nx  , pcols); 
  realHost4d crm_output_tkh            = realHost4d( "crm_output_tkh          ",crm_output_tkh_p           ,   crm_nz, crm_ny    , crm_nx  , pcols);
  realHost4d crm_output_qcl            = realHost4d( "crm_output_qcl          ",crm_output_qcl_p           ,   crm_nz, crm_ny    , crm_nx  , pcols);
  realHost4d crm_output_qci            = realHost4d( "crm_output_qci          ",crm_output_qci_p           ,   crm_nz, crm_ny    , crm_nx  , pcols);
  realHost4d crm_output_qpl            = realHost4d( "crm_output_qpl          ",crm_output_qpl_p           ,   crm_nz, crm_ny    , crm_nx  , pcols);
  realHost4d crm_output_qpi            = realHost4d( "crm_output_qpi          ",crm_output_qpi_p           ,   crm_nz, crm_ny    , crm_nx  , pcols);
  realHost1d crm_output_z0m            = realHost1d( "crm_output_z0m          ",crm_output_z0m_p                                           , pcols); 
  realHost1d crm_output_taux           = realHost1d( "crm_output_taux         ",crm_output_taux_p                                          , pcols); 
  realHost1d crm_output_tauy           = realHost1d( "crm_output_tauy         ",crm_output_tauy_p                                          , pcols); 
  realHost1d crm_output_precc          = realHost1d( "crm_output_precc        ",crm_output_precc_p                                         , pcols); 
  realHost1d crm_output_precl          = realHost1d( "crm_output_precl        ",crm_output_precl_p                                         , pcols); 
  realHost1d crm_output_precsc         = realHost1d( "crm_output_precsc       ",crm_output_precsc_p                                        , pcols); 
  realHost1d crm_output_precsl         = realHost1d( "crm_output_precsl       ",crm_output_precsl_p                                        , pcols); 
  realHost3d crm_output_prec_crm       = realHost3d( "crm_output_prec_crm     ",crm_output_prec_crm_p                , crm_ny    , crm_nx  , pcols); 
#ifdef MMF_ESMT
  realHost2d crm_output_u_tend_esmt    = realHost2d( "crm_output_u_tend_esmt  ",crm_output_u_tend_esmt_p                         , plev    , pcols);
  realHost2d crm_output_v_tend_esmt    = realHost2d( "crm_output_v_tend_esmt  ",crm_output_v_tend_esmt_p                         , plev    , pcols);
#endif 
  realHost2d crm_clear_rh              = realHost2d( "crm_clear_rh            ",crm_clear_rh_p                                   , crm_nz  , ncrms); 

  // Copy to outputs
  ::crm_state_u_wind        .deep_copy_to(crm_state_u_wind        );
  ::crm_state_v_wind        .deep_copy_to(crm_state_v_wind        );
  ::crm_state_w_wind        .deep_copy_to(crm_state_w_wind        );
  ::crm_state_temperature   .deep_copy_to(crm_state_temperature   );
  ::crm_state_qt            .deep_copy_to(crm_state_qt            );
  ::crm_state_qp            .deep_copy_to(crm_state_qp            );
  ::crm_state_qn            .deep_copy_to(crm_state_qn            );
  ::crm_rad_temperature     .deep_copy_to(crm_rad_temperature     );
  ::crm_rad_qv              .deep_copy_to(crm_rad_qv              );
  ::crm_rad_qc              .deep_copy_to(crm_rad_qc              );
  ::crm_rad_qi              .deep_copy_to(crm_rad_qi              );
  ::crm_rad_cld             .deep_copy_to(crm_rad_cld             );
  ::crm_output_subcycle_factor.deep_copy_to(crm_output_subcycle_factor);
  ::crm_output_prectend     .deep_copy_to(crm_output_prectend     );
  ::crm_output_precstend    .deep_copy_to(crm_output_precstend    );
  ::crm_output_cld          .deep_copy_to(crm_output_cld          );
  ::crm_output_cldtop       .deep_copy_to(crm_output_cldtop       );
  ::crm_output_gicewp       .deep_copy_to(crm_output_gicewp       );
  ::crm_output_gliqwp       .deep_copy_to(crm_output_gliqwp       );
  ::crm_output_mctot        .deep_copy_to(crm_output_mctot        );
  ::crm_output_mcup         .deep_copy_to(crm_output_mcup         );
  ::crm_output_mcdn         .deep_copy_to(crm_output_mcdn         );
  ::crm_output_mcuup        .deep_copy_to(crm_output_mcuup        );
  ::crm_output_mcudn        .deep_copy_to(crm_output_mcudn        );
  ::crm_output_qc_mean      .deep_copy_to(crm_output_qc_mean      );
  ::crm_output_qi_mean      .deep_copy_to(crm_output_qi_mean      );
  ::crm_output_qs_mean      .deep_copy_to(crm_output_qs_mean      );
  ::crm_output_qg_mean      .deep_copy_to(crm_output_qg_mean      );
  ::crm_output_qr_mean      .deep_copy_to(crm_output_qr_mean      );
  ::crm_output_mu_crm       .deep_copy_to(crm_output_mu_crm       );
  ::crm_output_md_crm       .deep_copy_to(crm_output_md_crm       );
  ::crm_output_eu_crm       .deep_copy_to(crm_output_eu_crm       );
  ::crm_output_du_crm       .deep_copy_to(crm_output_du_crm       );
  ::crm_output_ed_crm       .deep_copy_to(crm_output_ed_crm       );
  ::crm_output_flux_qt      .deep_copy_to(crm_output_flux_qt      );
  ::crm_output_flux_u       .deep_copy_to(crm_output_flux_u       );
  ::crm_output_flux_v       .deep_copy_to(crm_output_flux_v       );
  ::crm_output_fluxsgs_qt   .deep_copy_to(crm_output_fluxsgs_qt   );
  ::crm_output_tkez         .deep_copy_to(crm_output_tkez         );
  ::crm_output_tkew         .deep_copy_to(crm_output_tkew         );
  ::crm_output_tkesgsz      .deep_copy_to(crm_output_tkesgsz      );
  ::crm_output_tkz          .deep_copy_to(crm_output_tkz          );
  ::crm_output_flux_qp      .deep_copy_to(crm_output_flux_qp      );
  ::crm_output_precflux     .deep_copy_to(crm_output_precflux     );
  ::crm_output_qt_trans     .deep_copy_to(crm_output_qt_trans     );
  ::crm_output_qp_trans     .deep_copy_to(crm_output_qp_trans     );
  ::crm_output_qp_fall      .deep_copy_to(crm_output_qp_fall      );
  ::crm_output_qp_evp       .deep_copy_to(crm_output_qp_evp       );
  ::crm_output_qp_src       .deep_copy_to(crm_output_qp_src       );
  ::crm_output_qt_ls        .deep_copy_to(crm_output_qt_ls        );
  ::crm_output_t_ls         .deep_copy_to(crm_output_t_ls         );
  ::crm_output_jt_crm       .deep_copy_to(crm_output_jt_crm       );
  ::crm_output_mx_crm       .deep_copy_to(crm_output_mx_crm       );
  ::crm_output_cltot        .deep_copy_to(crm_output_cltot        );
  ::crm_output_clhgh        .deep_copy_to(crm_output_clhgh        );
  ::crm_output_clmed        .deep_copy_to(crm_output_clmed        );
  ::crm_output_cllow        .deep_copy_to(crm_output_cllow        );
  ::crm_output_sltend       .deep_copy_to(crm_output_sltend       );
  ::crm_output_qltend       .deep_copy_to(crm_output_qltend       );
  ::crm_output_qcltend      .deep_copy_to(crm_output_qcltend      );
  ::crm_output_qiltend      .deep_copy_to(crm_output_qiltend      );
  ::crm_output_t_vt_tend    .deep_copy_to(crm_output_t_vt_tend    );
  ::crm_output_q_vt_tend    .deep_copy_to(crm_output_q_vt_tend    );
  ::crm_output_u_vt_tend    .deep_copy_to(crm_output_u_vt_tend    );
  ::crm_output_t_vt_ls      .deep_copy_to(crm_output_t_vt_ls      );
  ::crm_output_q_vt_ls      .deep_copy_to(crm_output_q_vt_ls      );
  ::crm_output_u_vt_ls      .deep_copy_to(crm_output_u_vt_ls      );
#ifdef MMF_MOMENTUM_FEEDBACK
  ::crm_output_ultend       .deep_copy_to(crm_output_ultend       );
  ::crm_output_vltend       .deep_copy_to(crm_output_vltend       );
#endif
  ::crm_output_tk           .deep_copy_to(crm_output_tk           );
  ::crm_output_tkh          .deep_copy_to(crm_output_tkh          );
  ::crm_output_qcl          .deep_copy_to(crm_output_qcl          );
  ::crm_output_qci          .deep_copy_to(crm_output_qci          );
  ::crm_output_qpl          .deep_copy_to(crm_output_qpl          );
  ::crm_output_qpi          .deep_copy_to(crm_output_qpi          );
  ::crm_output_z0m          .deep_copy_to(crm_output_z0m          );
  ::crm_output_taux         .deep_copy_to(crm_output_taux         );
  ::crm_output_tauy         .deep_copy_to(crm_output_tauy         );
  ::crm_output_precc        .deep_copy_to(crm_output_precc        );
  ::crm_output_precl        .deep_copy_to(crm_output_precl        );
  ::crm_output_precsc       .deep_copy_to(crm_output_precsc       );
  ::crm_output_precsl       .deep_copy_to(crm_output_precsl       );
  ::crm_output_prec_crm     .deep_copy_to(crm_output_prec_crm     );
#ifdef MMF_ESMT
  ::crm_output_u_tend_esmt  .deep_copy_to(crm_output_u_tend_esmt  );
  ::crm_output_v_tend_esmt  .deep_copy_to(crm_output_v_tend_esmt  );
#endif
  ::crm_clear_rh            .deep_copy_to(crm_clear_rh            );

  // Deallocate data
  ::crm_input_bflxls          = real1d();
  ::crm_input_wndls           = real1d();
  ::crm_input_zmid            = real2d();
  ::crm_input_zint            = real2d();
  ::crm_input_pmid            = real2d();
  ::crm_input_pint            = real2d();
  ::crm_input_pdel            = real2d();
  ::crm_input_ul              = real2d();
  ::crm_input_vl              = real2d();
  ::crm_input_tl              = real2d();
  ::crm_input_qccl            = real2d();
  ::crm_input_qiil            = real2d();
  ::crm_input_ql              = real2d();
  ::crm_input_tau00           = real1d();
#ifdef MMF_ESMT
  ::crm_input_ul_esmt         = real2d();
  ::crm_input_vl_esmt         = real2d();
#endif
  ::crm_input_t_vt            = real2d();
  ::crm_input_q_vt            = real2d();
  ::crm_input_u_vt            = real2d();
  ::crm_state_u_wind          = real4d();
  ::crm_state_v_wind          = real4d();
  ::crm_state_w_wind          = real4d();
  ::crm_state_temperature     = real4d();
  ::crm_state_qt              = real4d();
  ::crm_state_qp              = real4d();
  ::crm_state_qn              = real4d();
  ::crm_rad_qrad              = real4d();
  ::crm_rad_temperature       = real4d();
  ::crm_rad_qv                = real4d();
  ::crm_rad_qc                = real4d();
  ::crm_rad_qi                = real4d();
  ::crm_rad_cld               = real4d();
  ::crm_output_subcycle_factor  = real1d();
  ::crm_output_prectend       = real1d();
  ::crm_output_precstend      = real1d();
  ::crm_output_cld            = real2d();
  ::crm_output_cldtop         = real2d();
  ::crm_output_gicewp         = real2d();
  ::crm_output_gliqwp         = real2d();
  ::crm_output_mctot          = real2d();
  ::crm_output_mcup           = real2d();
  ::crm_output_mcdn           = real2d();
  ::crm_output_mcuup          = real2d();
  ::crm_output_mcudn          = real2d();
  ::crm_output_qc_mean        = real2d();
  ::crm_output_qi_mean        = real2d();
  ::crm_output_qs_mean        = real2d();
  ::crm_output_qg_mean        = real2d();
  ::crm_output_qr_mean        = real2d();
  ::crm_output_mu_crm         = real2d();
  ::crm_output_md_crm         = real2d();
  ::crm_output_eu_crm         = real2d();
  ::crm_output_du_crm         = real2d();
  ::crm_output_ed_crm         = real2d();
  ::crm_output_flux_qt        = real2d();
  ::crm_output_flux_u         = real2d();
  ::crm_output_flux_v         = real2d();
  ::crm_output_fluxsgs_qt     = real2d();
  ::crm_output_tkez           = real2d();
  ::crm_output_tkew           = real2d();
  ::crm_output_tkesgsz        = real2d();
  ::crm_output_tkz            = real2d();
  ::crm_output_flux_qp        = real2d();
  ::crm_output_precflux       = real2d();
  ::crm_output_qt_trans       = real2d();
  ::crm_output_qp_trans       = real2d();
  ::crm_output_qp_fall        = real2d();
  ::crm_output_qp_evp         = real2d();
  ::crm_output_qp_src         = real2d();
  ::crm_output_qt_ls          = real2d();
  ::crm_output_t_ls           = real2d();
  ::crm_output_jt_crm         = real1d();
  ::crm_output_mx_crm         = real1d();
  ::crm_output_cltot          = real1d();
  ::crm_output_clhgh          = real1d();
  ::crm_output_clmed          = real1d();
  ::crm_output_cllow          = real1d();
  ::crm_output_sltend         = real2d();
  ::crm_output_qltend         = real2d();
  ::crm_output_qcltend        = real2d();
  ::crm_output_qiltend        = real2d();
  ::crm_output_t_vt_tend      = real2d();
  ::crm_output_q_vt_tend      = real2d();
  ::crm_output_u_vt_tend      = real2d();
  ::crm_output_t_vt_ls        = real2d();
  ::crm_output_q_vt_ls        = real2d();
  ::crm_output_u_vt_ls        = real2d();
#ifdef MMF_MOMENTUM_FEEDBACK
  ::crm_output_ultend         = real2d();
  ::crm_output_vltend         = real2d();
#endif
  ::crm_output_tk             = real4d();
  ::crm_output_tkh            = real4d();
  ::crm_output_qcl            = real4d();
  ::crm_output_qci            = real4d();
  ::crm_output_qpl            = real4d();
  ::crm_output_qpi            = real4d();
  ::crm_output_z0m            = real1d();
  ::crm_output_taux           = real1d();
  ::crm_output_tauy           = real1d();
  ::crm_output_precc          = real1d();
  ::crm_output_precl          = real1d();
  ::crm_output_precsc         = real1d();
  ::crm_output_precsl         = real1d();
  ::crm_output_prec_crm       = real3d();
#ifdef MMF_ESMT
  ::crm_output_u_tend_esmt    = real2d();
  ::crm_output_v_tend_esmt    = real2d();
#endif
  ::crm_clear_rh              = real2d();
  ::lat0                      = real1d();
  ::long0                     = real1d();
  ::gcolp                     = int1d();
}


void perturb_arrays() {
  
  #ifdef __PERTURB__
    double mag = 1.0e-13;
    perturb( u                 , mag );
    perturb( v                 , mag );
    perturb( w                 , mag );
    perturb( t                 , mag );
    perturb( p                 , mag );
    perturb( tabs              , mag );
    perturb( qv                , mag );
    perturb( qcl               , mag );
    perturb( qpl               , mag );
    perturb( qci               , mag );
    perturb( qpi               , mag );
    perturb( tke2              , mag );
    perturb( tk2               , mag );
    perturb( dudt              , mag );
    perturb( dvdt              , mag );
    perturb( dwdt              , mag );
    perturb( misc              , mag );
    perturb( fluxbu            , mag );
    perturb( fluxbv            , mag );
    perturb( fluxbt            , mag );
    perturb( fluxbq            , mag );
    perturb( fluxtu            , mag );
    perturb( fluxtv            , mag );
    perturb( fluxtt            , mag );
    perturb( fluxtq            , mag );
    perturb( fzero             , mag );
    perturb( precsfc           , mag );
    perturb( precssfc          , mag );
    perturb( t0                , mag );
    perturb( q0                , mag );
    perturb( qv0               , mag );
    perturb( tabs0             , mag );
    perturb( tv0               , mag );
    perturb( u0                , mag );
    perturb( v0                , mag );
    perturb( tg0               , mag );
    perturb( qg0               , mag );
    perturb( ug0               , mag );
    perturb( vg0               , mag );
    perturb( p0                , mag );
    perturb( tke0              , mag );
    perturb( t01               , mag );
    perturb( q01               , mag );
    perturb( qp0               , mag );
    perturb( qn0               , mag );
    perturb( prespot           , mag );
    perturb( rho               , mag );
    perturb( rhow              , mag );
    perturb( bet               , mag );
    perturb( gamaz             , mag );
    perturb( wsub              , mag );
    perturb( qtend             , mag );
    perturb( ttend             , mag );
    perturb( utend             , mag );
    perturb( vtend             , mag );
    perturb( sstxy             , mag );
    perturb( fcory             , mag );
    perturb( fcorzy            , mag );
    perturb( latitude          , mag );
    perturb( longitude         , mag );
    perturb( prec_xy           , mag );
    perturb( pw_xy             , mag );
    perturb( cw_xy             , mag );
    perturb( iw_xy             , mag );
    perturb( cld_xy            , mag );
    perturb( u200_xy           , mag );
    perturb( usfc_xy           , mag );
    perturb( v200_xy           , mag );
    perturb( vsfc_xy           , mag );
    perturb( w500_xy           , mag );
    perturb( w_max             , mag );
    perturb( u_max             , mag );
    perturb( twsb              , mag );
    perturb( precflux          , mag );
    perturb( uwle              , mag );
    perturb( uwsb              , mag );
    perturb( vwle              , mag );
    perturb( vwsb              , mag );
    perturb( tkelediss         , mag );
    perturb( tdiff             , mag );
    perturb( tlat              , mag );
    perturb( tlatqi            , mag );
    perturb( qifall            , mag );
    perturb( qpfall            , mag );
    perturb( total_water_evap  , mag );
    perturb( total_water_prec  , mag );
    perturb( CF3D              , mag );
    perturb( u850_xy           , mag );
    perturb( v850_xy           , mag );
    perturb( psfc_xy           , mag );
    perturb( swvp_xy           , mag );
    perturb( cloudtopheight    , mag );
    perturb( echotopheight     , mag );
    perturb( cloudtoptemp      , mag );
    perturb( fcorz             , mag );
    perturb( fcor              , mag );
    perturb( longitude0        , mag );
    perturb( latitude0         , mag );
    perturb( z0                , mag );
    perturb( uhl               , mag );
    perturb( vhl               , mag );
    perturb( taux0             , mag );
    perturb( tauy0             , mag );
    perturb( z                 , mag );
    perturb( pres              , mag );
    perturb( zi                , mag );
    perturb( presi             , mag );
    perturb( adz               , mag );
    perturb( adzw              , mag );
    perturb( dz                , mag );
    perturb( dt3               , mag );
    perturb( sgs_field         , mag );
    perturb( sgs_field_diag    , mag );
    perturb( grdf_x            , mag );
    perturb( grdf_y            , mag );
    perturb( grdf_z            , mag );
    perturb( tkesbbuoy         , mag );
    perturb( tkesbshear        , mag );
    perturb( tkesbdiss         , mag );
    perturb( micro_field       , mag );
    perturb( fluxbmk           , mag );
    perturb( fluxtmk           , mag );
    perturb( mkwle             , mag );
    perturb( mkwsb             , mag );
    perturb( mkadv             , mag );
    perturb( mkdiff            , mag );
    perturb( qn                , mag );
    perturb( qpsrc             , mag );
    perturb( qpevp             , mag );
    perturb( t_vt             , mag );
    perturb( q_vt             , mag );
    perturb( u_vt             , mag );
    perturb( t_vt_tend        , mag );
    perturb( q_vt_tend        , mag );
    perturb( u_vt_tend        , mag );
    perturb( t_vt_pert        , mag );
    perturb( q_vt_pert        , mag );
    perturb( u_vt_pert        , mag );
  #endif
}



real4d u               ;
real4d v               ;
real4d w               ;
real4d t               ;
real4d p               ;
real4d tabs            ;
real4d qv              ;
real4d qcl             ;
real4d qpl             ;
real4d qci             ;
real4d qpi             ;
real4d tke2            ;
real4d tk2             ;
real5d dudt            ;
real5d dvdt            ;
real5d dwdt            ;
real4d misc            ;
real3d fluxbu          ;
real3d fluxbv          ;
real3d fluxbt          ;
real3d fluxbq          ;
real3d fluxtu          ;
real3d fluxtv          ;
real3d fluxtt          ;
real3d fluxtq          ;
real3d fzero           ;
real3d precsfc         ;
real3d precssfc        ;
real2d t0              ;
real2d q0              ;
real2d qv0             ;
real2d tabs0           ;
real2d tv0             ;
real2d u0              ;
real2d v0              ;
real2d tg0             ;
real2d qg0             ;
real2d ug0             ;
real2d vg0             ;
real2d p0              ;
real2d tke0            ;
real2d t01             ;
real2d q01             ;
real2d qp0             ;
real2d qn0             ;
real2d prespot         ;
real2d rho             ;
real2d rhow            ;
real2d bet             ;
real2d gamaz           ;
real2d wsub            ;
real2d qtend           ;
real2d ttend           ;
real2d utend           ;
real2d vtend           ;
real3d sstxy           ;
real2d fcory           ;
real2d fcorzy          ;
real3d latitude        ;
real3d longitude       ;
real3d prec_xy         ;
real3d pw_xy           ;
real3d cw_xy           ;
real3d iw_xy           ;
real3d cld_xy          ;
real3d u200_xy         ;
real3d usfc_xy         ;
real3d v200_xy         ;
real3d vsfc_xy         ;
real3d w500_xy         ;
real2d w_max           ;
real2d u_max           ;
real2d twsb            ;
real2d precflux        ;
real2d uwle            ;
real2d uwsb            ;
real2d vwle            ;
real2d vwsb            ;
real2d tkelediss       ;
real2d tdiff           ;
real2d tlat            ;
real2d tlatqi          ;
real2d qifall          ;
real2d qpfall          ;
real3d total_water_evap;
real3d total_water_prec;
real4d CF3D            ;
real3d u850_xy         ;
real3d v850_xy         ;
real3d psfc_xy         ;
real3d swvp_xy         ;
real3d cloudtopheight  ;
real3d echotopheight   ;
real3d cloudtoptemp    ;

real2d t_vt           ;
real2d q_vt           ;
real2d u_vt           ;
real2d t_vt_tend      ;
real2d q_vt_tend      ;
real2d u_vt_tend      ;
real4d t_vt_pert      ;
real4d q_vt_pert      ;
real4d u_vt_pert      ;

real1d fcorz           ;
real1d fcor            ;
real1d longitude0      ;
real1d latitude0       ;
real1d z0              ;
real1d uhl             ;
real1d vhl             ;
real1d taux0           ;
real1d tauy0           ;

real2d z               ;
real2d pres            ;
real2d zi              ;
real2d presi           ;
real2d adz             ;
real2d adzw            ;
real1d dt3             ;
real1d dz              ;

real5d sgs_field       ;
real5d sgs_field_diag  ;
real2d grdf_x          ;
real2d grdf_y          ;
real2d grdf_z          ;
real2d tkesbbuoy       ;
real2d tkesbshear      ;
real2d tkesbdiss       ;

real5d micro_field     ;
real4d fluxbmk         ;
real4d fluxtmk         ;
real3d mkwle           ;
real3d mkwsb           ;
real3d mkadv           ;
real3d mkdiff          ;
real4d qn              ;
real2d qpsrc           ;
real2d qpevp           ;
intHost1d flag_precip      ;
int3d flag_top         ;

#ifdef MMF_ESMT
real4d u_esmt          ;
real4d v_esmt          ;
real2d u_esmt_sgs      ;
real2d v_esmt_sgs      ;
real2d u_esmt_diff     ;
real2d v_esmt_diff     ;
real3d fluxb_u_esmt    ;
real3d fluxb_v_esmt    ;
real3d fluxt_u_esmt    ;
real3d fluxt_v_esmt    ;
#endif

real2d accrsc          ;
real2d accrsi          ;
real2d accrrc          ;
real2d coefice         ;
real2d accrgc          ;
real2d accrgi          ;
real2d evaps1          ;
real2d evaps2          ;
real2d evapr1          ;
real2d evapr2          ;
real2d evapg1          ;
real2d evapg2          ;

real2d t00             ;
real2d tln             ;
real2d qln             ;
real2d qccln           ;
real2d qiiln           ;
real2d uln             ;
real2d vln             ;
#ifdef MMF_ESMT
real2d   uln_esmt      ;
real2d   vln_esmt      ;
#endif
real3d cwp             ;
real3d cwph            ;
real3d cwpm            ;
real3d cwpl            ;
real3d cltemp          ;
real3d cmtemp          ;
real3d chtemp          ;
real3d cttemp          ;
real2d dd_crm          ;
real2d mui_crm         ;
real2d mdi_crm         ;
real1d ustar           ;
real1d wnd             ;
real2d qtot            ;
real1d colprec         ;
real1d colprecs        ;
real1d bflx            ;

real1d crm_input_bflxls; 
real1d crm_input_wndls ;
real2d crm_input_zmid  ;
real2d crm_input_zint  ;
real2d crm_input_pmid  ;
real2d crm_input_pint  ;
real2d crm_input_pdel  ;
real2d crm_input_ul    ;
real2d crm_input_vl    ;
real2d crm_input_tl    ;
real2d crm_input_qccl  ;
real2d crm_input_qiil  ;
real2d crm_input_ql    ;
real1d crm_input_tau00 ;
#ifdef MMF_ESMT
real2d crm_input_ul_esmt;
real2d crm_input_vl_esmt;
#endif
real2d crm_input_t_vt ;
real2d crm_input_q_vt ;
real2d crm_input_u_vt ;
real4d crm_state_u_wind;
real4d crm_state_v_wind;
real4d crm_state_w_wind; 
real4d crm_state_temperature;
real4d crm_state_qt;
real4d crm_state_qp;
real4d crm_state_qn;
real4d crm_rad_qrad;
real4d crm_rad_temperature;
real4d crm_rad_qv; 
real4d crm_rad_qc; 
real4d crm_rad_qi; 
real4d crm_rad_cld; 
real1d crm_output_subcycle_factor;
real1d crm_output_prectend;
real1d crm_output_precstend; 
real2d crm_output_cld; 
real2d crm_output_cldtop; 
real2d crm_output_gicewp;
real2d crm_output_gliqwp; 
real2d crm_output_mctot; 
real2d crm_output_mcup; 
real2d crm_output_mcdn; 
real2d crm_output_mcuup; 
real2d crm_output_mcudn;
real2d crm_output_qc_mean;
real2d crm_output_qi_mean;
real2d crm_output_qs_mean;
real2d crm_output_qg_mean;
real2d crm_output_qr_mean;
real2d crm_output_mu_crm;
real2d crm_output_md_crm;
real2d crm_output_eu_crm;
real2d crm_output_du_crm;
real2d crm_output_ed_crm;
real2d crm_output_flux_qt; 
real2d crm_output_flux_u;
real2d crm_output_flux_v;
real2d crm_output_fluxsgs_qt;
real2d crm_output_tkez; 
real2d crm_output_tkew; 
real2d crm_output_tkesgsz; 
real2d crm_output_tkz; 
real2d crm_output_flux_qp; 
real2d crm_output_precflux; 
real2d crm_output_qt_trans; 
real2d crm_output_qp_trans; 
real2d crm_output_qp_fall; 
real2d crm_output_qp_evp; 
real2d crm_output_qp_src; 
real2d crm_output_qt_ls; 
real2d crm_output_t_ls; 
real1d crm_output_jt_crm; 
real1d crm_output_mx_crm; 
real1d crm_output_cltot; 
real1d crm_output_clhgh; 
real1d crm_output_clmed; 
real1d crm_output_cllow; 
real2d crm_output_sltend; 
real2d crm_output_qltend; 
real2d crm_output_qcltend; 
real2d crm_output_qiltend;
real2d crm_output_t_vt_tend;
real2d crm_output_q_vt_tend;
real2d crm_output_u_vt_tend;
real2d crm_output_t_vt_ls;
real2d crm_output_q_vt_ls;
real2d crm_output_u_vt_ls;
#ifdef MMF_MOMENTUM_FEEDBACK
real2d crm_output_ultend;
real2d crm_output_vltend;
#endif
real4d crm_output_tk;
real4d crm_output_tkh; 
real4d crm_output_qcl; 
real4d crm_output_qci; 
real4d crm_output_qpl; 
real4d crm_output_qpi; 
real1d crm_output_z0m; 
real1d crm_output_taux; 
real1d crm_output_tauy;
real1d crm_output_precc; 
real1d crm_output_precl;
real1d crm_output_precsc; 
real1d crm_output_precsl; 
real3d crm_output_prec_crm;
#ifdef MMF_ESMT
real2d crm_output_u_tend_esmt;
real2d crm_output_v_tend_esmt;
#endif 
real2d crm_clear_rh;
int2d crm_clear_rh_cnt;
real1d lat0; 
real1d long0;
int1d  gcolp;


int pcols;
int ncrms;

int  nstep                    ;
int  ncycle                   ;
int  icycle                   ;
int  na, nb, nc               ;
real at, bt, ct               ;
real dtn                      ;
real dtfactor                 ;
int  rank                     ;
int  ranknn                   ;
int  rankss                   ;
int  rankee                   ;
int  rankww                   ;
int  rankne                   ;
int  ranknw                   ;
int  rankse                   ;
int  ranksw                   ;
bool dompi                    ;
bool masterproc               ;
bool dostatis                 ;
bool dostatisrad              ;
int  nstatis                  ;
bool compute_reffc            ;
bool compute_reffi            ;
bool notopened2D              ;
bool notopened3D              ;
bool notopenedmom             ;
real dx                       ;
real dy                       ;
bool doconstdz                ;
int  nstop                    ;
int  nelapse                  ;
real dt                       ;
real day0                     ;
int  nrad                     ;
int  nrestart                 ;
int  nstat                    ;
int  nstatfrq                 ;
bool restart_sep              ;
int  nrestart_skip            ;
bool output_sep               ;
bool doisccp                  ;
bool domodis                  ;
bool domisr                   ;
bool dosimfilesout            ;
bool doSAMconditionals        ;
bool dosatupdnconditionals    ;
bool doscamiopdata            ;
bool dozero_out_day0          ;
int  nsave3Dstart             ;
int  nsave3Dend               ;
bool save3Dbin                ;
bool save3Dsep                ;
real qnsave3D                 ;
bool dogzip3D                 ;
bool rad3Dout                 ;
int  nsave2D                  ;
int  nsave2Dstart             ;
int  nsave2Dend               ;
bool save2Dbin                ;
bool save2Dsep                ;
bool save2Davg                ;
bool dogzip2D                 ;
int  nstatmom                 ;
int  nstatmomstart            ;
int  nstatmomend              ;
bool savemomsep               ;
bool savemombin               ;
int  nmovie                   ;
int  nmoviestart              ;
int  nmovieend                ;
bool isInitialized_scamiopdata;
bool wgls_holds_omega         ;

bool dosubsidence    ;
real ug              ;
real vg              ;
bool les             ;
bool sfc_flx_fxd     ;
bool sfc_tau_fxd     ;
bool dodamping       ;
bool docloud         ;
bool docam_sfc_fluxes;
bool doprecip        ;
bool dosgs           ;
bool docoriolis      ;
bool dosurface       ;
bool dowallx         ;
bool dowally         ;
bool docolumn        ;
bool dotracers       ;
bool dosmoke         ;

bool advect_sgs;
bool dosmagor  ;

real vrain;
real vsnow;
real vgrau;
real crain;
real csnow;
real cgrau;

real gam3 ; 
real gams1;
real gams2;
real gams3;
real gamg1;
real gamg2;
real gamg3;
real gamr1;
real gamr2;
real gamr3;

real a_bg;
real a_pr;
real a_gr;

bool use_VT;
int  VT_wn_max;

bool crm_accel_uv;
bool use_crm_accel;
real crm_accel_factor;

real factor_xy;
real factor_xyt;
real idt_gl;
real crm_nx_rad_fac;
real crm_ny_rad_fac;
int  ptop;
real crm_run_time;
real icrm_run_time;
real dt_glob;


bool crm_accel_ceaseflag;

int igstep;





