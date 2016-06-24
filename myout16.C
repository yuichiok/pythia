
 *------------------------------------------------------------------------------------* 
 |                                                                                    | 
 |  *------------------------------------------------------------------------------*  | 
 |  |                                                                              |  | 
 |  |                                                                              |  | 
 |  |   PPP   Y   Y  TTTTT  H   H  III    A      Welcome to the Lund Monte Carlo!  |  | 
 |  |   P  P   Y Y     T    H   H   I    A A     This is PYTHIA version 8.215      |  | 
 |  |   PPP     Y      T    HHHHH   I   AAAAA    Last date of change:  4 Jan 2016  |  | 
 |  |   P       Y      T    H   H   I   A   A                                      |  | 
 |  |   P       Y      T    H   H  III  A   A    Now is 20 Apr 2016 at 02:35:37    |  | 
 |  |                                                                              |  | 
 |  |   Torbjorn Sjostrand;  Department of Astronomy and Theoretical Physics,      |  | 
 |  |      Lund University, Solvegatan 14A, SE-223 62 Lund, Sweden;                |  | 
 |  |      e-mail: torbjorn@thep.lu.se                                             |  | 
 |  |   Jesper Roy Christiansen;  Department of Astronomy and Theoretical Physics, |  | 
 |  |      Lund University, Solvegatan 14A, SE-223 62 Lund, Sweden;                |  | 
 |  |      e-mail: Jesper.Roy.Christiansen@thep.lu.se                              |  | 
 |  |   Nishita Desai;  Institut fuer Theoretische Physik,                         |  | 
 |  |     Universitaet Heidelberg, Philosophenweg 16, D-69120 Heidelberg, Germany; |  | 
 |  |      e-mail: n.desai@thphys.uni-heidelberg.de                                |  | 
 |  |   Ilkka Helenius;  Department of Astronomy and Theoretical Physics,          |  | 
 |  |      Lund University, Solvegatan 14A, SE-223 62 Lund, Sweden;                |  | 
 |  |      e-mail: ilkka.helenius@thep.lu.se                                       |  | 
 |  |   Philip Ilten;  Massachusetts Institute of Technology,                      |  | 
 |  |      77 Massachusetts Ave, Cambridge, MA 02139, USA;                         |  | 
 |  |      e-mail: philten@cern.ch                                                 |  | 
 |  |   Stephen Mrenna;  Computing Division, Simulations Group,                    |  | 
 |  |      Fermi National Accelerator Laboratory, MS 234, Batavia, IL 60510, USA;  |  | 
 |  |      e-mail: mrenna@fnal.gov                                                 |  | 
 |  |   Stefan Prestel;  Theoretical Physics Group,                                |  | 
 |  |      SLAC National Accelerator Laboratory, Menlo Park, CA 94025, USA;        |  | 
 |  |      e-mail: prestel@slac.stanford.edu                                       |  | 
 |  |   Christine O. Rasmussen;  Department of Astronomy and Theoretical Physics,  |  | 
 |  |      Lund University, Solvegatan 14A, SE-223 62 Lund, Sweden;                |  | 
 |  |      e-mail: christine.rasmussen@thep.lu.se                                  |  | 
 |  |   Peter Skands;  School of Physics,                                          |  | 
 |  |      Monash University, PO Box 27, 3800 Melbourne, Australia;                |  | 
 |  |      e-mail: peter.skands@monash.edu                                         |  | 
 |  |                                                                              |  | 
 |  |   The main program reference is 'An Introduction to PYTHIA 8.2',             |  | 
 |  |   T. Sjostrand et al, Comput. Phys. Commun. 191 (2015) 159                   |  | 
 |  |   [arXiv:1410.3012 [hep-ph]]                                                 |  | 
 |  |                                                                              |  | 
 |  |   The main physics reference is the 'PYTHIA 6.4 Physics and Manual',         |  | 
 |  |   T. Sjostrand, S. Mrenna and P. Skands, JHEP05 (2006) 026 [hep-ph/0603175]  |  | 
 |  |                                                                              |  | 
 |  |   An archive of program versions and documentation is found on the web:      |  | 
 |  |   http://www.thep.lu.se/Pythia                                               |  | 
 |  |                                                                              |  | 
 |  |   This program is released under the GNU General Public Licence version 2.   |  | 
 |  |   Please respect the MCnet Guidelines for Event Generator Authors and Users. |  | 
 |  |                                                                              |  | 
 |  |   Disclaimer: this program comes without any guarantees.                     |  | 
 |  |   Beware of errors and use common sense when interpreting results.           |  | 
 |  |                                                                              |  | 
 |  |   Copyright (C) 2016 Torbjorn Sjostrand                                      |  | 
 |  |                                                                              |  | 
 |  |                                                                              |  | 
 |  *------------------------------------------------------------------------------*  | 
 |                                                                                    | 
 *------------------------------------------------------------------------------------* 


 *-------  PYTHIA Process Initialization  --------------------------*
 |                                                                  |
 | We collide p+ with p+ at a CM energy of 1.400e+04 GeV            |
 |                                                                  |
 |------------------------------------------------------------------|
 |                                                    |             |
 | Subprocess                                    Code |   Estimated |
 |                                                    |    max (mb) |
 |                                                    |             |
 |------------------------------------------------------------------|
 |                                                    |             |
 | f fbar -> H0 Z0 (SM)                           904 |   1.217e-11 |
 |                                                                  |
 *-------  End PYTHIA Process Initialization -----------------------*

 *-------  PYTHIA Multiparton Interactions Initialization  ---------* 
 |                                                                  | 
 |                   sigmaNonDiffractive =   57.54 mb               | 
 |                                                                  | 
 |    pT0 =  2.65 gives sigmaInteraction =  331.90 mb: accepted     | 
 |                                                                  | 
 *-------  End PYTHIA Multiparton Interactions Initialization  -----* 

 *-------  PYTHIA Flag + Mode + Parm + Word + FVec + MVec + PVec Settings (changes only)  -------------------------* 
 |                                                                                                                 | 
 | Name                                          |                      Now |      Default         Min         Max | 
 |                                               |                          |                                      | 
 | HiggsSM:ffbar2HZ                              |                       on |          off                         | 
 | Next:numberShowEvent                          |                        0 |            1           0             | 
 | Next:numberShowInfo                           |                        0 |            1           0             | 
 | Next:numberShowProcess                        |                        0 |            1           0             | 
 | PhaseSpace:pTHatMin                           |                150.00000 |          0.0         0.0             | 
 |                                                                                                                 | 
 *-------  End PYTHIA Flag + Mode + Parm + Word + FVec + MVec + PVec Settings  ------------------------------------* 

 --------  PYTHIA Particle Data Table (changed only)  ------------------------------------------------------------------------------
 
      id   name            antiName         spn chg col      m0        mWidth      mMin       mMax       tau0    res dec ext vis wid
             no onMode   bRatio   meMode     products 

      23  Z0                                  3   0   0   91.18760    2.50419   10.00000    0.00000  0.00000e+00   1   1   0   0   0
              0     0   0.1540492    0        1       -1 
              1     0   0.1194935    0        2       -2 
              2     0   0.1540386    0        3       -3 
              3     0   0.1193325    0        4       -4 
              4     0   0.1523269    0        5       -5 
              5     0   0.0335480    0       11      -11 
              6     0   0.0667305    0       12      -12 
              7     1   0.0335477    0       13      -13 
              8     0   0.0667305    0       14      -14 
              9     0   0.0334720    0       15      -15 
             10     0   0.0667305    0       16      -16 

      25  h0                                  1   0   0  125.00000    0.00408  124.79583  125.20417  0.00000e+00   1   1   0   0   0
              0     0   0.0000009    0        1       -1 
              1     0   0.0000002    0        2       -2 
              2     0   0.0002163    0        3       -3 
              3     0   0.0288493    0        4       -4 
              4     1   0.5768873    0        5       -5 
              5     0   0.0000000    0        6       -6 
              6     0   0.0000000    0       11      -11 
              7     0   0.0002185    0       13      -13 
              8     0   0.0628569    0       15      -15 
              9     0   0.0850383    0       21       21 
             10     0   0.0022965    0       22       22 
             11     0   0.0016155    0       22       23 
             12     0   0.0261758    0       23       23 
             13     0   0.2158445    0       24      -24 
             14     0   0.0000000  103  1000022  1000022 
             15     0   0.0000000  103  1000023  1000022 
             16     0   0.0000000  103  1000023  1000023 
             17     0   0.0000000  103  1000025  1000022 
             18     0   0.0000000  103  1000025  1000023 
             19     0   0.0000000  103  1000025  1000025 
             20     0   0.0000000  103  1000035  1000022 
             21     0   0.0000000  103  1000035  1000023 
             22     0   0.0000000  103  1000035  1000025 
             23     0   0.0000000  103  1000035  1000035 
             24     0   0.0000000  103  1000024 -1000024 
             25     0   0.0000000  103  1000024 -1000037 
             26     0   0.0000000  103  1000037 -1000024 
             27     0   0.0000000  103  1000037 -1000037 
             28     0   0.0000000  103  1000001 -1000001 
             29     0   0.0000000  103  2000001 -2000001 
             30     0   0.0000000  103  1000001 -2000001 
             31     0   0.0000000  103 -1000001  2000001 
             32     0   0.0000000  103  1000002 -1000002 
             33     0   0.0000000  103  2000002 -2000002 
             34     0   0.0000000  103  1000002 -2000002 
             35     0   0.0000000  103 -1000002  2000002 
             36     0   0.0000000  103  1000003 -1000003 
             37     0   0.0000000  103  2000003 -2000003 
             38     0   0.0000000  103  1000003 -2000003 
             39     0   0.0000000  103 -1000003  2000003 
             40     0   0.0000000  103  1000004 -1000004 
             41     0   0.0000000  103  2000004 -2000004 
             42     0   0.0000000  103  1000004 -2000004 
             43     0   0.0000000  103 -1000004  2000004 
             44     0   0.0000000  103  1000005 -1000005 
             45     0   0.0000000  103  2000005 -2000005 
             46     0   0.0000000  103  1000005 -2000005 
             47     0   0.0000000  103 -1000005  2000005 
             48     0   0.0000000  103  1000006 -1000006 
             49     0   0.0000000  103  2000006 -2000006 
             50     0   0.0000000  103  1000006 -2000006 
             51     0   0.0000000  103 -1000006  2000006 
             52     0   0.0000000  103  1000011 -1000011 
             53     0   0.0000000  103  2000011 -2000011 
             54     0   0.0000000  103  1000011 -2000011 
             55     0   0.0000000  103 -1000011  2000011 
             56     0   0.0000000  103  1000012 -1000012 
             57     0   0.0000000  103  2000012 -2000012 
             58     0   0.0000000  103  1000012 -2000012 
             59     0   0.0000000  103 -1000012  2000012 
             60     0   0.0000000  103  1000013 -1000013 
             61     0   0.0000000  103  2000013 -2000013 
             62     0   0.0000000  103  1000013 -2000013 
             63     0   0.0000000  103 -1000013  2000013 
             64     0   0.0000000  103  1000014 -1000014 
             65     0   0.0000000  103  2000014 -2000014 
             66     0   0.0000000  103  1000014 -2000014 
             67     0   0.0000000  103 -1000014  2000014 
             68     0   0.0000000  103  1000015 -1000015 
             69     0   0.0000000  103  2000015 -2000015 
             70     0   0.0000000  103  1000015 -2000015 
             71     0   0.0000000  103 -1000015  2000015 
             72     0   0.0000000  103  1000016 -1000016 
             73     0   0.0000000  103  2000016 -2000016 
             74     0   0.0000000  103  1000016 -2000016 
             75     0   0.0000000  103 -1000016  2000016 

 --------  End PYTHIA Particle Data Table  -----------------------------------------------------------------------------------------

Event: 0
Event: 10
Event: 20
Event: 30
Event: 40
Event: 50
Event: 60
Event: 70
Event: 80
Event: 90

 *-------  PYTHIA Event and Cross Section Statistics  -------------------------------------------------------------*
 |                                                                                                                 |
 | Subprocess                                    Code |            Number of events       |      sigma +- delta    |
 |                                                    |       Tried   Selected   Accepted |     (estimated) (mb)   |
 |                                                    |                                   |                        |
 |-----------------------------------------------------------------------------------------------------------------|
 |                                                    |                                   |                        |
 | f fbar -> H0 Z0 (SM)                           904 |         793        100        100 |   1.521e-12  8.032e-14 |
 |                                                    |                                   |                        |
 | sum                                                |         793        100        100 |   1.521e-12  8.032e-14 |
 |                                                                                                                 |
 *-------  End PYTHIA Event and Cross Section Statistics ----------------------------------------------------------*

 *-------  PYTHIA Error and Warning Messages Statistics  ----------------------------------------------------------* 
 |                                                                                                                 | 
 |  times   message                                                                                                | 
 |                                                                                                                 | 
 |      0   no errors or warnings to report                                                                        | 
 |                                                                                                                 | 
 *-------  End PYTHIA Error and Warning Messages Statistics  ------------------------------------------------------* 

|----------------------------------------|
| CPU Runtime = 1.763e+00 sec
|----------------------------------------|

