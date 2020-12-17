#include "NCrystal/NCPluginBoilerplate.hh"//<--- this line added manually

namespace NCPluginNamespace { void registerData(); }

void NCPluginNamespace::registerData()
{
  {
    // File nanodiamond_SANSND.ncmat
    const char * textdata =
      "NCMAT v3\n"
      "#Diamond.\n"
      "#\n"
      "#Crystal structure was converted from the cif file of the entry 0011242 in the AMCSD.\n"
      "#Additional reference: Wyckoff R W G, Crystal Structures, vol. 1, p. 7-83, 1963.\n"
      "#\n"
      "#The Debye temperature is derived from the Debye-waller factor at 293K compiled\n"
      "#in the supplement of Acta Cryst., A52, p. 456-470, 1996\n"
      "#\n"
      "#The VDOS curve was extracted by T. Kittelmann using the engauge digitizer\n"
      "#software from Figure 9 (the 0 GPa curve) of:\n"
      "#\n"
      "#   \"High-pressure thermal expansion, bulk modulus, and phonon structure of diamond\"\n"
      "#   Jianjun Xie, et. al.\n"
      "#   Phys. Rev. B 60, 9444 - Published 1 October 1999\n"
      "#   https://doi.org/10.1103/PhysRevB.60.9444\n"
      "#\n"
      "#Finally here is \"magic comment\" which ensures that NCrystal will model this as\n"
      "#a diamond powder with lower density than Diamond:\n"
      "#NCRYSTALMATCFG[packfact=0.1828]\n"
      "@CELL\n"
      "  lengths 3.56679 3.56679 3.56679\n"
      "  angles 90 90 90\n"
      "@SPACEGROUP\n"
      "  227\n"
      "@ATOMPOSITIONS\n"
      "  C 1/2 0   1/2\n"
      "  C 1/4 3/4 3/4\n"
      "  C 1/2 1/2 0\n"
      "  C 1/4 1/4 1/4\n"
      "  C 0   0   0\n"
      "  C 3/4 3/4 1/4\n"
      "  C 0   1/2 1/2\n"
      "  C 3/4 1/4 3/4\n"
      "@DEBYETEMPERATURE\n"
      "  C 1920.3\n"
      "@DYNINFO\n"
      "  element  C\n"
      "  fraction 1\n"
      "  type     vdos\n"
      "  vdos_egrid .040474125140929 .16798283517138\n"
      "  vdos_density .0208322 .0213076 .0217831 .0222585 .022734 .0232095 .0236849\n"
      "    .0241604 .0246358 .0251113 .0255868 .0260622 .0265377 .0270133 .0275731\n"
      "    .0281328 .0286926 .0292523 .0298121 .0303718 .0309315 .0314913 .032051\n"
      "    .0326108 .0331705 .0337302 .03429 .0348497 .0356357 .0364415 .0372473\n"
      "    .0380532 .038859 .0396648 .0404706 .0412765 .0420823 .0428881 .0436939\n"
      "    .0444998 .0453056 .0461114 .0468834 .0476182 .0483529 .0490876 .0498223\n"
      "    .0505571 .0512918 .0520265 .0527612 .053496 .0542702 .055183 .0560958\n"
      "    .0570086 .0579214 .0588342 .059747 .0607879 .0619747 .0631614 .0643482\n"
      "    .0655349 .0667217 .0679084 .0690952 .0703094 .0717365 .0731637 .0745908\n"
      "    .0760962 .0776445 .0791928 .0807411 .0822894 .0838377 .0856917 .0878991\n"
      "    .0901065 .0923139 .0945213 .0976238 .101169 .10377 .104992 .108393 .114493\n"
      "    .120593 .126694 .132794 .138894 .144994 .146451 .147567 .148684 .1498\n"
      "    .150917 .152033 .15315 .154137 .154192 .154247 .154301 .154356 .154411\n"
      "    .154466 .154521 .154575 .15463 .154967 .155995 .157022 .158049 .159076\n"
      "    .160103 .16113 .162157 .162549 .162916 .163284 .163651 .164018 .164386\n"
      "    .164753 .16512 .165488 .165855 .166222 .16659 .166957 .167324 .167927\n"
      "    .168808 .169689 .17057 .171451 .172331 .173212 .174069 .174612 .175156\n"
      "    .175699 .176242 .176785 .177328 .177872 .178415 .178958 .179501 .180045\n"
      "    .180692 .181497 .182302 .183106 .183911 .184716 .18552 .186325 .187117\n"
      "    .187897 .188677 .189458 .190238 .191019 .191799 .192635 .193608 .19458\n"
      "    .195553 .196525 .197498 .19847 .199443 .201077 .202782 .204487 .206103\n"
      "    .207348 .208593 .209839 .211403 .214142 .216881 .218667 .220738 .223765\n"
      "    .2141 .201306 .193143 .18784 .184288 .185293 .195514 .205401 .172496 .168951\n"
      "    .165405 .162106 .160663 .159221 .157778 .156335 .154892 .153145 .151376\n"
      "    .149607 .147838 .146924 .146116 .145307 .144498 .143689 .142477 .141042\n"
      "    .139607 .138172 .136737 .135463 .134894 .134325 .133756 .133186 .132965\n"
      "    .132877 .132789 .132701 .132613 .132525 .132437 .132349 .132261 .132214\n"
      "    .132235 .132256 .132277 .132297 .132318 .132339 .13236 .132381 .132402\n"
      "    .133474 .134617 .13576 .136934 .138717 .1405 .142283 .143533 .144639 .145746\n"
      "    .146853 .14796 .149649 .153727 .148934 .142612 .139787 .13817 .138382\n"
      "    .138594 .138806 .139018 .13923 .141406 .144479 .14733 .150019 .152751\n"
      "    .155708 .158586 .160988 .163541 .166937 .170333 .176119 .183038 .192287\n"
      "    .206496 .22562 .245836 .252412 .262008 .25854 .26291 .268142 .27071 .261951\n"
      "    .24655 .221666 .209016 .205139 .201262 .197386 .191581 .185467 .180004\n"
      "    .176313 .172621 .168359 .162538 .15627 .15214 .148415 .144716 .141082\n"
      "    .137448 .134439 .131758 .128905 .125789 .123866 .124448 .126201 .135127\n"
      "    .138293 .146204 .15248 .178646 .199596 .203163 .195408 .183744 .16916\n"
      "    .162971 .159575 .162367 .165421 .171465 .180004 .192103 .203499 .213156\n"
      "    .222813 .233418 .244643 .25807 .273766 .291084 .31186 .332635 .357688\n"
      "    .371861 .38364 .395821 .408464 .424661 .448554 .47286 .484037 .484864\n"
      "    .484827 .479981 .465302 .451224 .434788 .424912 .424257 .42579 .430239\n"
      "    .434809 .441672 .449316 .455607 .46594 .479648 .501786 .5229 .541428 .562215\n"
      "    .586174 .630549 .693711 .74561 .779826 .865355 .934832 1 .958397 .944071\n"
      "    .944199 .95086 .97667 .841092 .74341 .64457 .486839 .405613 .382277 .357093\n"
      "    .342668 .331059 .318807 .302933 .291655 .281707 .275841 .269975 .263549\n"
      "    .257005 .251534 .247 .242356 .237365 .232373 .226915 .220776 .218083 .217178\n"
      "    .265855 .300494 .41769 .385856 .222808 .130473 .0823366 .0292034 .0125285 0\n"
      "\n"
      "@CUSTOM_SANSND\n"
      "# custom physics that enables SANS for nanodiamond particles\n"
      "  1.0                                   # plugin version\n"
      "  132.869 -1.33605 0.0519763 -3.97314   # piecewise power law parameters (A1, b1, A2, b2)\n"
      "  0.0510821 5.551                       # boundary parameter and par for absolute cross section    \n"
      "\n";
    ::NCrystal::registerInMemoryStaticFileData("nanodiamond_SANSND.ncmat",textdata);
  }
}
