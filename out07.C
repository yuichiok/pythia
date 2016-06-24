
 *------------------------------------------------------------------------------------* 
 |                                                                                    | 
 |  *------------------------------------------------------------------------------*  | 
 |  |                                                                              |  | 
 |  |                                                                              |  | 
 |  |   PPP   Y   Y  TTTTT  H   H  III    A      Welcome to the Lund Monte Carlo!  |  | 
 |  |   P  P   Y Y     T    H   H   I    A A     This is PYTHIA version 8.215      |  | 
 |  |   PPP     Y      T    HHHHH   I   AAAAA    Last date of change:  4 Jan 2016  |  | 
 |  |   P       Y      T    H   H   I   A   A                                      |  | 
 |  |   P       Y      T    H   H  III  A   A    Now is 21 Mar 2016 at 01:36:11    |  | 
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
 | We collide e+ with e- at a CM energy of 5.000e+02 GeV            |
 |                                                                  |
 |------------------------------------------------------------------|
 |                                                    |             |
 | Subprocess                                    Code |   Estimated |
 |                                                    |    max (mb) |
 |                                                    |             |
 |------------------------------------------------------------------|
 |                                                    |             |
 | GenericResonance                              9001 |   4.088e-01 |
 |                                                                  |
 *-------  End PYTHIA Process Initialization -----------------------*

 *-------  PYTHIA Flag + Mode + Parm + Word + FVec + MVec + PVec Settings (changes only)  -------------------------* 
 |                                                                                                                 | 
 | Name                                          |                      Now |      Default         Min         Max | 
 |                                               |                          |                                      | 
 | Beams:eCM                                     |                500.00000 |    14000.000    10.00000             | 
 | Beams:idA                                     |                      -11 |         2212                         | 
 | Beams:idB                                     |                       11 |         2212                         | 
 | Main:timesAllowErrors                         |                        5 |           10           0             | 
 | Next:numberCount                              |                      100 |         1000           0             | 
 | PDF:lepton                                    |                      off |           on                         | 
 |                                                                                                                 | 
 *-------  End PYTHIA Flag + Mode + Parm + Word + FVec + MVec + PVec Settings  ------------------------------------* 

 --------  PYTHIA Particle Data Table (changed only)  ------------------------------------------------------------------------------
 
      id   name            antiName         spn chg col      m0        mWidth      mMin       mMax       tau0    res dec ext vis wid
             no onMode   bRatio   meMode     products 

      13  mu-              mu+                2  -3   0    0.10566    0.00000    0.00000    0.00000  6.58654e+05   0   1   0   1   0
              0     1   1.0000000   22      -12       11       14 

     130  K_L0                                1   0   0    0.49761    0.00000    0.00000    0.00000  1.53300e+04   0   1   0   1   0
              0     1   0.1952278    0      111      111      111 
              1     1   0.1254178    0      211     -211      111 
              2     1   0.2027688   22      -12       11      211 
              3     1   0.2027688   22       12      -11     -211 
              4     1   0.1352191   22      -14       13      211 
              5     1   0.1352191   22       14      -13     -211 
              6     1   0.0019673    0      211     -211 
              7     1   0.0008641    0      111      111 
              8     1   0.0005471    0       22       22 

     211  pi+              pi-                1   3   0    0.13957    0.00000    0.00000    0.00000  7.80450e+03   0   1   0   1   0
              0     1   0.9998770    0      -13       14 
              1     1   0.0001230    0      -11       12 

     321  K+               K-                 1   3   0    0.49368    0.00000    0.00000    0.00000  3.71300e+03   0   1   0   1   0
              0     1   0.6355250    0      -13       14 
              1     1   0.0000158    0      -11       12 
              2     1   0.2066081    0      211      111 
              3     1   0.0559022    0      211      211     -211 
              4     1   0.0176107    0      211      111      111 
              5     1   0.0507020   22       12      -11      111 
              6     1   0.0335313   22       14      -13      111 
              7     1   0.0000220    0      -11       12      111      111 
              8     1   0.0000409    0      -11       12      211     -211 
              9     1   0.0000140    0      -13       14      111      111 
             10     1   0.0000280    0      -13       14      211     -211 

    2112  n0               nbar0              2   0   0    0.93957    0.00000    0.00000    0.00000  2.65500e+14   0   1   0   1   0
              0     1   1.0000000   22      -12       11     2212 

  999999  GeneralResonance                    1   0   0  500.00000    3.00000    0.00000    0.00000  0.00000e+00   1   1   0   1   0
              0     1   0.0500000  101        1       -1 
              1     1   0.0500000  101        6       -6 
              2     1   0.0500000  101       15      -15 
              3     1   0.3833333  101       21       21 
              4     1   0.3833333  101       22       22 
              5     1   0.0500000  101       24      -24 
              6     1   0.0333333  101       25       25 

 --------  End PYTHIA Particle Data Table  -----------------------------------------------------------------------------------------


 --------  PYTHIA Info Listing  ---------------------------------------- 
 
 Beam A: id =    -11, pz =  2.500e+02, e =  2.500e+02, m =  5.110e-04.
 Beam B: id =     11, pz = -2.500e+02, e =  2.500e+02, m =  5.110e-04.

 In 1: id =  -11, x =  1.000e+00, pdf =  1.000e+00 at Q2 =  2.500e+05.
 In 2: id =   11, x =  1.000e+00, pdf =  1.000e+00 at same Q2.

 Subprocess GenericResonance with code 9001 is 2 -> 1.
 It has sHat =  2.500e+05.
     alphaEM =  7.971e-03,  alphaS =  1.036e-01    at Q2 =  2.500e+05.

 Impact parameter b =  0.000e+00 gives enhancement factor =  1.000e+00.
 Max pT scale for MPI =  5.000e+02, ISR =  5.000e+02, FSR =  5.000e+02.
 Number of MPI =     1, ISR =     0, FSRproc =     0, FSRreson =     1.

 --------  End PYTHIA Info Listing  ------------------------------------

 --------  PYTHIA Event Listing  (hard process)  -----------------------------------------------------------------------------------
 
    no        id   name            status     mothers   daughters     colours      p_x        p_y        p_z         e          m 
     0        90   (system)           -11     0     0     0     0     0     0      0.000      0.000      0.000    500.000    500.000
     1       -11   (e+)               -12     0     0     3     0     0     0      0.000      0.000    250.000    250.000      0.001
     2        11   (e-)               -12     0     0     4     0     0     0      0.000      0.000   -250.000    250.000      0.001
     3       -11   (e+)               -21     1     0     5     0     0     0      0.000      0.000    250.000    250.000      0.000
     4        11   (e-)               -21     2     0     5     0     0     0      0.000      0.000   -250.000    250.000      0.000
     5    999999   (GeneralResonance) -22     3     4     6     7     0     0      0.000      0.000      0.000    500.000    500.000
     6        22   gamma               23     5     0     0     0     0     0    -39.882   -209.670    130.185    250.000      0.000
     7        22   gamma               23     5     0     0     0     0     0     39.882    209.670   -130.185    250.000      0.000
                                   Charge sum:  0.000           Momentum sum:      0.000      0.000      0.000    500.000    500.000

 --------  End PYTHIA Event Listing  -----------------------------------------------------------------------------------------------

 --------  PYTHIA Event Listing  (complete event)  ---------------------------------------------------------------------------------
 
    no        id   name            status     mothers   daughters     colours      p_x        p_y        p_z         e          m 
     0        90   (system)           -11     0     0     0     0     0     0      0.000      0.000      0.000    500.000    500.000
     1       -11   (e+)               -12     0     0     3     0     0     0      0.000      0.000    250.000    250.000      0.001
     2        11   (e-)               -12     0     0     4     0     0     0      0.000      0.000   -250.000    250.000      0.001
     3       -11   (e+)               -21     1     0     5     0     0     0      0.000      0.000    250.000    250.000      0.000
     4        11   (e-)               -21     2     0     5     0     0     0      0.000      0.000   -250.000    250.000      0.000
     5    999999   (GeneralResonance) -22     3     4     6     7     0     0      0.000      0.000      0.000    500.000    500.000
     6        22   (gamma)            -23     5     0    10    10     0     0    -39.882   -209.670    130.185    250.000      0.000
     7        22   (gamma)            -23     5     0     8     9     0     0     39.882    209.670   -130.185    250.000      0.000
     8       -11   e+                  51     7     0     0     0     0     0     19.973    106.111    -65.879    126.485      0.001
     9        11   e-                  51     7     0     0     0     0     0     19.909    103.559    -64.305    123.515      0.001
    10        22   gamma               52     6     6     0     0     0     0    -39.882   -209.670    130.185    250.000      0.000
                                   Charge sum:  0.000           Momentum sum:      0.000      0.000      0.000    500.000    500.000

 --------  End PYTHIA Event Listing  -----------------------------------------------------------------------------------------------
 PYTHIA Warning in TauDecays::decay: unknown correlated tau production, assuming from unpolarized photon  

 Pythia::next(): 100 events have been generated 

 Pythia::next(): 200 events have been generated 

 Pythia::next(): 300 events have been generated 
 PYTHIA Warning in TimeShower::findMEcorr: ME weight above PS one  

 Pythia::next(): 400 events have been generated 

 Pythia::next(): 500 events have been generated 

 Pythia::next(): 600 events have been generated 

 Pythia::next(): 700 events have been generated 

 Pythia::next(): 800 events have been generated 

 Pythia::next(): 900 events have been generated 

 *-------  PYTHIA Event and Cross Section Statistics  -------------------------------------------------------------*
 |                                                                                                                 |
 | Subprocess                                    Code |            Number of events       |      sigma +- delta    |
 |                                                    |       Tried   Selected   Accepted |     (estimated) (mb)   |
 |                                                    |                                   |                        |
 |-----------------------------------------------------------------------------------------------------------------|
 |                                                    |                                   |                        |
 | GenericResonance                              9001 |        1039       1000       1000 |   3.894e-01  5.662e-10 |
 |                                                    |                                   |                        |
 | sum                                                |        1039       1000       1000 |   3.894e-01  5.662e-10 |
 |                                                                                                                 |
 *-------  End PYTHIA Event and Cross Section Statistics ----------------------------------------------------------*

 *-------  PYTHIA Error and Warning Messages Statistics  ----------------------------------------------------------* 
 |                                                                                                                 | 
 |  times   message                                                                                                | 
 |                                                                                                                 | 
 |     56   Warning in TauDecays::decay: unknown correlated tau production, assuming from unpolarized photon       | 
 |      1   Warning in TimeShower::findMEcorr: ME weight above PS one                                              | 
 |                                                                                                                 | 
 *-------  End PYTHIA Error and Warning Messages Statistics  ------------------------------------------------------* 


  2016-03-21 01:36       energy spectrum of photons

        3.12*10^ 4  X                                                                                                   
        3.00*10^ 4  X                                                                                                   
        2.88*10^ 4  X                                                                                                   
        2.76*10^ 4  X                                                                                                   
        2.64*10^ 4  X                                                                                                   
        2.52*10^ 4  X                                                                                                   
        2.40*10^ 4  X                                                                                                   
        2.28*10^ 4  X                                                                                                   
        2.16*10^ 4  X                                                                                                   
        2.04*10^ 4  X                                                                                                   
        1.92*10^ 4  X                                                                                                   
        1.80*10^ 4  X                                                                                                   
        1.68*10^ 4  X                                                                                                   
        1.56*10^ 4  X                                                                                                   
        1.44*10^ 4  X                                                                                                   
        1.32*10^ 4  X                                                                                                   
        1.20*10^ 4  X                                                                                                   
        1.08*10^ 4  X                                                                                                   
        0.96*10^ 4  X                                                                                                   
        0.84*10^ 4  X                                                                                                   
        0.72*10^ 4  X                                                                                                   
        0.60*10^ 4  X                                                                                                   
        0.48*10^ 4  X5                                                                                                  
        0.36*10^ 4  XX                                                                                                  
        0.24*10^ 4  XX4                                                                                                 
        0.12*10^ 4  XXX742211                                                                                           

          Contents                                                                                                      
            *10^ 4  3000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 3  1410000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 2  2168522110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 1  2464091526654332111110110000110000000000000000000000000000000000000000000000000000000000000000000002

          Low edge                                                                                                      
            *10^ 2  0000000000000000000000000000000000000000111111111111111111111111111111111111111122222222222222222222
            *10^ 1  0000111122223333444455556666777788889999000011112222333344445555666677778888999900001111222233334444
            *10^ 0  0358035803580358035803580358035803580358035803580358035803580358035803580358035803580358035803580358

   Entries  =       40213    Mean =  2.7810e+00    Underflow =  0.0000e+00    Low edge  =  0.0000e+00
   All chan =  3.9533e+04    Rms  =  7.2131e+00    Overflow  =  6.8000e+02    High edge =  2.5000e+02


  2016-03-21 01:36       energy spectrum of e+ and e-

        3.48*10^ 4  2                                                                                                   
        3.36*10^ 4  X                                                                                                   
        3.24*10^ 4  X                                                                                                   
        3.12*10^ 4  X                                                                                                   
        3.00*10^ 4  X                                                                                                   
        2.88*10^ 4  X                                                                                                   
        2.76*10^ 4  X                                                                                                   
        2.64*10^ 4  X                                                                                                   
        2.52*10^ 4  X                                                                                                   
        2.40*10^ 4  X                                                                                                   
        2.28*10^ 4  X                                                                                                   
        2.16*10^ 4  X                                                                                                   
        2.04*10^ 4  X                                                                                                   
        1.92*10^ 4  X                                                                                                   
        1.80*10^ 4  X                                                                                                   
        1.68*10^ 4  X                                                                                                   
        1.56*10^ 4  X                                                                                                   
        1.44*10^ 4  X                                                                                                   
        1.32*10^ 4  X                                                                                                   
        1.20*10^ 4  X                                                                                                   
        1.08*10^ 4  X                                                                                                   
        0.96*10^ 4  X                                                                                                   
        0.84*10^ 4  X                                                                                                   
        0.72*10^ 4  X                                                                                                   
        0.60*10^ 4  X                                                                                                   
        0.48*10^ 4  X                                                                                                   
        0.36*10^ 4  X                                                                                                   
        0.24*10^ 4  XX                                                                                                  
        0.12*10^ 4  XX732111                                                                                            

          Contents                                                                                                      
            *10^ 4  3000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 3  3200000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 2  8484210000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 1  0170348653212111110100000000000000000000000000000000000000000000000000000000000000000000000000000000

          Low edge                                                                                                      
            *10^ 2  0000000000000000000000000000000000000000111111111111111111111111111111111111111122222222222222222222
            *10^ 1  0000111122223333444455556666777788889999000011112222333344445555666677778888999900001111222233334444
            *10^ 0  0358035803580358035803580358035803580358035803580358035803580358035803580358035803580358035803580358

   Entries  =       38260    Mean =  2.1418e+00    Underflow =  0.0000e+00    Low edge  =  0.0000e+00
   All chan =  3.8260e+04    Rms  =  6.0365e+00    Overflow  =  0.0000e+00    High edge =  2.5000e+02


  2016-03-21 01:36       energy spectrum of p and pbar

        1.08*10^ 3  1                                                                                                   
        1.04*10^ 3  X                                                                                                   
        1.00*10^ 3  X3                                                                                                  
        0.96*10^ 3  XX                                                                                                  
        0.92*10^ 3  XX                                                                                                  
        0.88*10^ 3  XX                                                                                                  
        0.84*10^ 3  XX                                                                                                  
        0.80*10^ 3  XX                                                                                                  
        0.76*10^ 3  XX                                                                                                  
        0.72*10^ 3  XX                                                                                                  
        0.68*10^ 3  XX                                                                                                  
        0.64*10^ 3  XX                                                                                                  
        0.60*10^ 3  XX                                                                                                  
        0.56*10^ 3  XX9                                                                                                 
        0.52*10^ 3  XXX                                                                                                 
        0.48*10^ 3  XXX                                                                                                 
        0.44*10^ 3  XXX                                                                                                 
        0.40*10^ 3  XXX                                                                                                 
        0.36*10^ 3  XXX4                                                                                                
        0.32*10^ 3  XXXX                                                                                                
        0.28*10^ 3  XXXX                                                                                                
        0.24*10^ 3  XXXX9                                                                                               
        0.20*10^ 3  XXXXXX                                                                                              
        0.16*10^ 3  XXXXXX                                                                                              
        0.12*10^ 3  XXXXXX760                                                                                           
        0.08*10^ 3  XXXXXXXXX6 4                                                                                        
        0.04*10^ 3  XXXXXXXXXXXX97452423332 11  1 111                                                                   

          Contents                                                                                                      
            *10^ 3  1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 2  0953211100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 1  4753390086353212010111000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 0  2055589522967750978022814310402320001011100100000000000001000010000000000000000000000000000000000000

          Low edge                                                                                                      
            *10^ 2  0000000000000000000000000000000000000000111111111111111111111111111111111111111122222222222222222222
            *10^ 1  0000111122223333444455556666777788889999000011112222333344445555666677778888999900001111222233334444
            *10^ 0  0358035803580358035803580358035803580358035803580358035803580358035803580358035803580358035803580358

   Entries  =        3990    Mean =  8.9117e+00    Underflow =  0.0000e+00    Low edge  =  0.0000e+00
   All chan =  3.9900e+03    Rms  =  1.1349e+01    Overflow  =  0.0000e+00    High edge =  2.5000e+02


  2016-03-21 01:36       energy spectrum of neutrinos

        0.96*10^ 5  9                                                                                                   
        0.92*10^ 5  X                                                                                                   
        0.88*10^ 5  X                                                                                                   
        0.84*10^ 5  X                                                                                                   
        0.80*10^ 5  X                                                                                                   
        0.76*10^ 5  X                                                                                                   
        0.72*10^ 5  X                                                                                                   
        0.68*10^ 5  X                                                                                                   
        0.64*10^ 5  X                                                                                                   
        0.60*10^ 5  X                                                                                                   
        0.56*10^ 5  X                                                                                                   
        0.52*10^ 5  X                                                                                                   
        0.48*10^ 5  X                                                                                                   
        0.44*10^ 5  X                                                                                                   
        0.40*10^ 5  X                                                                                                   
        0.36*10^ 5  X                                                                                                   
        0.32*10^ 5  X                                                                                                   
        0.28*10^ 5  X                                                                                                   
        0.24*10^ 5  X                                                                                                   
        0.20*10^ 5  X                                                                                                   
        0.16*10^ 5  X                                                                                                   
        0.12*10^ 5  X                                                                                                   
        0.08*10^ 5  X6                                                                                                  
        0.04*10^ 5  XX63111                                                                                             

          Contents                                                                                                      
            *10^ 4  9000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 3  5621000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 2  7520532110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 1  5124522608755422222111111111110100001100100011000010000000000000000000000000000000000000000000000000

          Low edge                                                                                                      
            *10^ 2  0000000000000000000000000000000000000000111111111111111111111111111111111111111122222222222222222222
            *10^ 1  0000111122223333444455556666777788889999000011112222333344445555666677778888999900001111222233334444
            *10^ 0  0358035803580358035803580358035803580358035803580358035803580358035803580358035803580358035803580358

   Entries  =      107498    Mean =  2.0740e+00    Underflow =  0.0000e+00    Low edge  =  0.0000e+00
   All chan =  1.0750e+05    Rms  =  5.8392e+00    Overflow  =  0.0000e+00    High edge =  2.5000e+02
