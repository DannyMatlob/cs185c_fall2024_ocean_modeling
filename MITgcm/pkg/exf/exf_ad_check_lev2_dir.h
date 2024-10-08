#ifdef ALLOW_EXF

# ifdef EXF_SEAICE_FRACTION
CADJ STORE areamask0    = tapelev2, key = ilev_2
CADJ STORE areamask1    = tapelev2, key = ilev_2
# endif

#ifdef AUTODIFF_USE_STORE_RESTORE
CADJ STORE StoreEXF1   = tapelev2, key = ilev_2
CADJ STORE StoreEXF2   = tapelev2, key = ilev_2
CADJ STORE StoreCTRLS1 = tapelev2, key = ilev_2
#else
CADJ STORE hflux0   = tapelev2, key = ilev_2
CADJ STORE hflux1   = tapelev2, key = ilev_2
CADJ STORE sflux0   = tapelev2, key = ilev_2
CADJ STORE sflux1   = tapelev2, key = ilev_2
CADJ STORE wspeed0  = tapelev2, key = ilev_2
CADJ STORE wspeed1  = tapelev2, key = ilev_2
# ifdef ALLOW_RUNOFF
CADJ STORE runoff0  = tapelev2, key = ilev_2
CADJ STORE runoff1  = tapelev2, key = ilev_2
# endif
# ifdef ATMOSPHERIC_LOADING
CADJ STORE apressure0=tapelev2, key = ilev_2
CADJ STORE apressure1=tapelev2, key = ilev_2
CADJ STORE siceload = tapelev2, key = ilev_2
# endif
# ifdef ALLOW_CLIMSSS_RELAXATION
CADJ STORE climsss0 = tapelev2, key = ilev_2
CADJ STORE climsss1 = tapelev2, key = ilev_2
# endif
# ifdef ALLOW_CLIMSST_RELAXATION
CADJ STORE climsst0 = tapelev2, key = ilev_2
CADJ STORE climsst1 = tapelev2, key = ilev_2
# endif
# ifdef ALLOW_SALTFLX
CADJ STORE saltflx0 = tapelev2, key = ilev_2
CADJ STORE saltflx1 = tapelev2, key = ilev_2
# endif
# ifdef ALLOW_ATM_TEMP
CADJ STORE ustress0    = tapelev2, key = ilev_2
CADJ STORE ustress1    = tapelev2, key = ilev_2
CADJ STORE vstress0    = tapelev2, key = ilev_2
CADJ STORE vstress1    = tapelev2, key = ilev_2
CADJ STORE aqh0        = tapelev2, key = ilev_2
CADJ STORE aqh1        = tapelev2, key = ilev_2
CADJ STORE atemp0      = tapelev2, key = ilev_2
CADJ STORE atemp1      = tapelev2, key = ilev_2
CADJ STORE precip0     = tapelev2, key = ilev_2
CADJ STORE precip1     = tapelev2, key = ilev_2
CADJ STORE snowprecip0 = tapelev2, key = ilev_2
CADJ STORE snowprecip1 = tapelev2, key = ilev_2
#  ifdef ALLOW_READ_TURBFLUXES
CADJ STORE hs0         = tapelev2, key = ilev_2
CADJ STORE hs1         = tapelev2, key = ilev_2
CADJ STORE hl0         = tapelev2, key = ilev_2
CADJ STORE hl1         = tapelev2, key = ilev_2
#  endif
#  ifdef EXF_READ_EVAP
CADJ STORE evap0       = tapelev2, key = ilev_2
CADJ STORE evap1       = tapelev2, key = ilev_2
#  endif /* EXF_READ_EVAP */
# endif /* ALLOW_ATM_TEMP */
# ifdef ALLOW_DOWNWARD_RADIATION
CADJ STORE swdown0     = tapelev2, key = ilev_2
CADJ STORE swdown1     = tapelev2, key = ilev_2
CADJ STORE lwdown0     = tapelev2, key = ilev_2
CADJ STORE lwdown1     = tapelev2, key = ilev_2
# else
#  ifdef SHORTWAVE_HEATING
CADJ STORE swflux0     = tapelev2, key = ilev_2
CADJ STORE swflux1     = tapelev2, key = ilev_2
#  endif
# endif /* ALLOW_DOWNWARD_RADIATION */
CADJ STORE uwind0      = tapelev2, key = ilev_2
CADJ STORE uwind1      = tapelev2, key = ilev_2
CADJ STORE vwind0      = tapelev2, key = ilev_2
CADJ STORE vwind1      = tapelev2, key = ilev_2
#endif /* AUTODIFF_USE_STORE_RESTORE */
#endif /* ALLOW_EXF */
