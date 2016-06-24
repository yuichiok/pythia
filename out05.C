
 *------------------------------------------------------------------------------------* 
 |                                                                                    | 
 |  *------------------------------------------------------------------------------*  | 
 |  |                                                                              |  | 
 |  |                                                                              |  | 
 |  |   PPP   Y   Y  TTTTT  H   H  III    A      Welcome to the Lund Monte Carlo!  |  | 
 |  |   P  P   Y Y     T    H   H   I    A A     This is PYTHIA version 8.215      |  | 
 |  |   PPP     Y      T    HHHHH   I   AAAAA    Last date of change:  4 Jan 2016  |  | 
 |  |   P       Y      T    H   H   I   A   A                                      |  | 
 |  |   P       Y      T    H   H  III  A   A    Now is 15 Mar 2016 at 13:49:04    |  | 
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
 | g g -> g g                                     111 |   1.720e-04 |
 | g g -> q qbar (uds)                            112 |   2.971e-06 |
 | q g -> q g                                     113 |   3.255e-04 |
 | q q(bar)' -> q q(bar)'                         114 |   5.571e-05 |
 | q qbar -> g g                                  115 |   4.574e-07 |
 | q qbar -> q' qbar' (uds)                       116 |   2.590e-07 |
 | g g -> c cbar                                  121 |   9.901e-07 |
 | q qbar -> c cbar                               122 |   8.633e-08 |
 | g g -> b bbar                                  123 |   9.889e-07 |
 | q qbar -> b bbar                               124 |   8.628e-08 |
 |                                                                  |
 *-------  End PYTHIA Process Initialization -----------------------*

 *-------  PYTHIA Multiparton Interactions Initialization  ---------* 
 |                                                                  | 
 |                   sigmaNonDiffractive =   57.54 mb               | 
 |                                                                  | 
 |    pT0 =  2.65 gives sigmaInteraction =  331.57 mb: accepted     | 
 |                                                                  | 
 *-------  End PYTHIA Multiparton Interactions Initialization  -----* 

 *-------  PYTHIA Flag + Mode + Parm + Word + FVec + MVec + PVec Settings (changes only)  -------------------------* 
 |                                                                                                                 | 
 | Name                                          |                      Now |      Default         Min         Max | 
 |                                               |                          |                                      | 
 | HardQCD:all                                   |                       on |          off                         | 
 | Next:numberShowEvent                          |                        0 |            1           0             | 
 | Next:numberShowInfo                           |                        0 |            1           0             | 
 | Next:numberShowProcess                        |                        0 |            1           0             | 
 | PhaseSpace:pTHatMin                           |                200.00000 |          0.0         0.0             | 
 |                                                                                                                 | 
 *-------  End PYTHIA Flag + Mode + Parm + Word + FVec + MVec + PVec Settings  ------------------------------------* 

 --------  PYTHIA Particle Data Table (changed only)  ------------------------------------------------------------------------------
 
      id   name            antiName         spn chg col      m0        mWidth      mMin       mMax       tau0    res dec ext vis wid
             no onMode   bRatio   meMode     products 

 no particle data has been changed from its default value 

 --------  End PYTHIA Particle Data Table  -----------------------------------------------------------------------------------------

#--------------------------------------------------------------------------
#                     FastJet release 3.0.5 [fjcore]
#                 M. Cacciari, G.P. Salam and G. Soyez                  
#     A software package for jet finding and analysis at colliders      
#                           http://fastjet.fr                           
#	                                                                      
# Please cite EPJC72(2012)1896 [arXiv:1111.6097] if you use this package
# for scientific work and optionally PLB641(2006)57 [hep-ph/0512210].   
#                                                                       
# FastJet is provided without warranty under the terms of the GNU GPLv2.
# It uses T. Chan's closest pair algorithm, S. Fortune's Voronoi code
# and 3rd party plugin jet algorithms. See COPYING file for details.
#--------------------------------------------------------------------------

 --  PYTHIA SlowJet(fjcore) Listing, p = -1, R = 0.700, pTjetMin =  10.000, etaMax =  4.000  -- 
 
   no      pTjet      y       phi   mult      p_x        p_y        p_z         e          m 
    0    228.654   -0.506   -1.649    35    -17.893   -227.953   -121.972    261.139     32.156
    1    207.360   -0.559    1.464    80     22.103    206.179   -128.561    253.334     68.203
    2     17.114    1.863   -2.705    25    -15.510     -7.233     58.750     61.649      7.492
    3     17.015    0.301    1.378    20      3.260     16.700      5.513     18.849      5.947
    4     14.085    0.848    0.458    13     12.631      6.232     14.177     20.547      4.776
    5     11.747    2.902    1.827    19     -2.977     11.363    119.575    120.298      5.951
    6     11.519   -1.742   -2.857    21    -11.054     -3.239    -34.640     36.832      4.897
    7     10.363   -3.524   -2.726    17     -9.482     -4.183   -191.280    191.613      4.465

 --------  End PYTHIA SlowJet Listing  --------------------------------------------------------

 --------  PYTHIA CellJet Listing, eTjetMin =   10.000, coneRadius = 0.700  ------------------------------ 
 
  no     eTjet  etaCtr  phiCtr   etaWt   phiWt mult      p_x        p_y        p_z         e          m 
   0   227.976  -0.550  -1.620  -0.522  -1.625   33    -12.238   -226.959   -124.933    260.826     27.610
   1   199.468  -0.650   1.522  -0.597   1.452   71     23.281    193.242   -127.924    239.228     54.601
   2    30.644   0.150   1.424   0.131   1.544   24      0.819     29.414      4.116     31.494     10.446
   3    18.106   2.050  -2.798   2.058  -2.715   21    -16.170     -7.330     73.514     75.940      6.884
   4    15.920   0.650   0.442   0.801   0.445   17     14.038      6.714     14.707     22.158      5.705
   5    11.193   2.550   1.718   2.673   1.648   18     -0.841     10.851     85.473     86.294      4.751
   6    10.944  -1.050   0.245  -1.071   0.226   17     10.309      2.358    -14.869     18.812      4.582
   7    10.389  -3.750  -2.896  -3.579  -2.791   16     -9.335     -3.400   -190.550    190.847      3.825
   8    10.145  -2.050  -2.700  -1.793  -2.766   18     -9.161     -3.609    -30.445     32.178      3.401

 --------  End PYTHIA CellJet Listing  -------------------------------------------------------------------

 --  PYTHIA SlowJet(fjcore) Listing, p = -1, R = 0.700, pTjetMin =  10.000, etaMax =  4.000  -- 
 
   no      pTjet      y       phi   mult      p_x        p_y        p_z         e          m 
    0    271.086   -1.809    0.455    70    243.504    119.135   -821.168    866.481     54.628
    1    191.846   -3.185   -2.392    18   -140.471   -130.663  -2321.731   2329.695     15.514
    2    116.271   -1.351    2.996    26   -115.043     16.850   -212.631    243.195     20.332
    3     15.585   -1.869   -0.291    17     14.931     -4.469    -51.686     54.206      4.894
    4     11.630    0.581   -2.265    10     -7.444     -8.936      7.522     14.381      3.868
    5     10.242   -0.778   -0.866    16      6.638     -7.800     -9.742     14.954      4.879

 --------  End PYTHIA SlowJet Listing  --------------------------------------------------------

 --------  PYTHIA CellJet Listing, eTjetMin =   10.000, coneRadius = 0.700  ------------------------------ 
 
  no     eTjet  etaCtr  phiCtr   etaWt   phiWt mult      p_x        p_y        p_z         e          m 
   0   275.674  -1.750   0.442  -1.804   0.446   72    245.584    117.916   -822.153    867.975     56.817
   1   192.177  -3.150  -2.405  -3.147  -2.402   19   -141.771   -129.464  -2234.885   2243.154     13.025
   2   117.393  -1.350   2.994  -1.344   2.992   25   -115.214     17.330   -211.131    241.986     20.155
   3    13.321  -1.950  -0.245  -1.997  -0.262   15     12.765     -3.415    -49.330     51.187      3.473
   4    12.222   0.450  -2.111   0.568  -2.243   11     -7.279     -9.183      7.410     14.428      3.994

 --------  End PYTHIA CellJet Listing  -------------------------------------------------------------------

 --  PYTHIA SlowJet(fjcore) Listing, p = -1, R = 0.700, pTjetMin =  10.000, etaMax =  4.000  -- 
 
   no      pTjet      y       phi   mult      p_x        p_y        p_z         e          m 
    0    219.948    1.230   -0.885    65    139.293   -170.220    358.587    425.599     64.596
    1    186.112   -0.526    2.177    48   -106.039    152.949   -106.623    221.058     53.486
    2     47.094   -1.401    1.977    28    -18.594     43.268    -93.624    105.719     13.898
    3     40.982    0.626   -2.257    26    -25.977    -31.698     28.466     51.252     11.699
    4     23.630    1.520   -1.758    12     -4.392    -23.218     52.419     57.691      4.704
    5     14.374   -2.010    0.922    17      8.685     11.454    -56.744     58.819      5.762

 --------  End PYTHIA SlowJet Listing  --------------------------------------------------------

 --------  PYTHIA CellJet Listing, eTjetMin =   10.000, coneRadius = 0.700  ------------------------------ 
 
  no     eTjet  etaCtr  phiCtr   etaWt   phiWt mult      p_x        p_y        p_z         e          m 
   0   218.512   1.050  -0.933   1.226  -0.869   63    139.604   -164.967    349.631    415.402     60.113
   1   184.112  -0.650   2.307  -0.537   2.192   43   -104.453    145.386   -104.526    212.904     48.528
   2    45.202  -1.350   2.111  -1.403   2.020   24    -19.271     39.769    -86.801     97.966     10.484
   3    41.615   0.550  -2.209   0.621  -2.246   25    -25.592    -31.836     27.981     50.697     10.898
   4    27.414   1.450  -1.718   1.502  -1.718   14     -3.976    -26.882     58.993     65.139      4.946
   5    14.378  -1.350   0.344  -1.428   0.446   16     12.187      5.820    -29.039     32.571      5.934
   6    11.107  -2.050   1.129  -2.089   1.030   12      5.543      9.242    -44.793     46.190      3.313

 --------  End PYTHIA CellJet Listing  -------------------------------------------------------------------

 --  PYTHIA SlowJet(fjcore) Listing, p = -1, R = 0.700, pTjetMin =  10.000, etaMax =  4.000  -- 
 
   no      pTjet      y       phi   mult      p_x        p_y        p_z         e          m 
    0    268.428    1.293   -2.535    63   -220.544   -153.016    457.326    531.895     41.379
    1    179.493   -0.838    0.465    42    160.399     80.560   -173.696    253.706     44.482
    2     68.313    3.739    0.824    33     46.401     50.136   1476.298   1477.969     16.479
    3     30.441   -2.238   -0.082    34     30.339     -2.487   -150.762    154.231     11.461
    4     20.979    2.650    1.713    21     -2.978     20.766    157.634    159.215      7.792
    5     16.324   -3.250    1.088    31      7.582     14.457   -237.163    237.877      8.535
    6     15.798   -3.671    2.542    20    -13.045      8.911   -337.432    337.869      6.758
    7     11.480    3.465   -0.721    15      8.624     -7.578    204.153    204.553      5.625
    8     10.726   -1.423    2.870    16    -10.332      2.880    -23.221     26.086      5.120

 --------  End PYTHIA SlowJet Listing  --------------------------------------------------------

 --------  PYTHIA CellJet Listing, eTjetMin =   10.000, coneRadius = 0.700  ------------------------------ 
 
  no     eTjet  etaCtr  phiCtr   etaWt   phiWt mult      p_x        p_y        p_z         e          m 
   0   268.519   1.350  -2.602   1.284  -2.544   63   -221.296   -150.677    451.670    526.596     40.283
   1   177.423  -0.950   0.442  -0.844   0.443   41    159.684     75.712   -171.733    249.894     41.511
   2    69.958   3.750   0.834   3.740   0.832   34     46.072     50.636   1479.067   1480.738     16.113
   3    32.183  -2.350  -0.147  -2.275  -0.121   34     30.741     -3.721   -159.267    162.671     11.702
   4    20.458   2.850   1.718   2.721   1.717   20     -2.909     19.692    158.341    159.720      6.499
   5    16.358  -3.650   2.209  -3.700   2.392   19    -11.321     10.445   -340.217    340.635      6.903
   6    13.246  -3.150   1.325  -3.176   1.184   25      4.773     11.739   -163.738    164.308      5.164
   7    10.795  -1.350   2.798  -1.424   2.840   13    -10.009      3.123    -21.925     24.634      4.028
   8    10.258   0.850   2.209   0.853   2.218   17     -5.811      7.684     10.418     15.053      5.025
   9    10.030  -1.950  -1.914  -1.980  -1.950   11     -3.575     -9.047    -38.475     39.964      4.705

 --------  End PYTHIA CellJet Listing  -------------------------------------------------------------------

 --  PYTHIA SlowJet(fjcore) Listing, p = -1, R = 0.700, pTjetMin =  10.000, etaMax =  4.000  -- 
 
   no      pTjet      y       phi   mult      p_x        p_y        p_z         e          m 
    0    224.800   -0.733    2.870    60   -216.559     60.309   -183.314    293.267     43.200
    1    149.809   -0.744   -0.604    44    123.286    -85.108   -124.759    197.602     32.236
    2     65.995   -2.072    1.209    34     23.361     61.722   -265.168    273.714     15.806
    3     34.612   -1.392   -0.122    17     34.356     -4.205    -68.474     77.492     10.879
    4     29.075    2.168   -0.087    27     28.964     -2.534    132.997    136.522     10.231
    5     17.018    0.591   -1.642    22     -1.210    -16.975     11.211     21.141      5.624

 --------  End PYTHIA SlowJet Listing  --------------------------------------------------------

 --------  PYTHIA CellJet Listing, eTjetMin =   10.000, coneRadius = 0.700  ------------------------------ 
 
  no     eTjet  etaCtr  phiCtr   etaWt   phiWt mult      p_x        p_y        p_z         e          m 
   0   226.805  -0.750   2.798  -0.729   2.883   60   -217.554     57.606   -181.746    291.917     39.187
   1   150.827  -0.750  -0.638  -0.748  -0.594   42    123.048    -83.046   -123.947    195.583     29.194
   2    65.799  -2.150   1.129  -2.082   1.186   30     24.383     60.127   -261.574    269.838     13.498
   3    35.815  -1.550  -0.245  -1.430  -0.169   15     35.004     -5.953    -73.089     81.966     10.757
   4    29.636   2.350  -0.049   2.205  -0.076   27     28.868     -2.147    137.543    140.919     10.106
   5    17.763   0.750  -1.718   0.623  -1.641   23     -1.208    -17.229     12.065     21.823      5.691

 --------  End PYTHIA CellJet Listing  -------------------------------------------------------------------
 PYTHIA Warning in StringFragmentation::fragmentToJunction: bad convergence junction rest frame  
 PYTHIA Error in StringFragmentation::fragment: stuck in joining  
 PYTHIA Error in Pythia::next: hadronLevel failed; try again  

 *-------  PYTHIA Event and Cross Section Statistics  -------------------------------------------------------------*
 |                                                                                                                 |
 | Subprocess                                    Code |            Number of events       |      sigma +- delta    |
 |                                                    |       Tried   Selected   Accepted |     (estimated) (mb)   |
 |                                                    |                                   |                        |
 |-----------------------------------------------------------------------------------------------------------------|
 |                                                    |                                   |                        |
 | g g -> g g                                     111 |        1166        196        196 |   2.788e-05  9.863e-07 |
 | g g -> q qbar (uds)                            112 |          21          3          3 |   5.304e-07  1.513e-07 |
 | q g -> q g                                     113 |        2347        235        235 |   3.297e-05  1.111e-06 |
 | q q(bar)' -> q q(bar)'                         114 |         416         60         60 |   7.346e-06  5.415e-07 |
 | q qbar -> g g                                  115 |           5          1          1 |   5.380e-08  5.380e-08 |
 | q qbar -> q' qbar' (uds)                       116 |           3          1          1 |   8.349e-08  8.349e-08 |
 | g g -> c cbar                                  121 |           5          1          1 |   4.718e-08  4.718e-08 |
 | q qbar -> c cbar                               122 |           0          0          0 |   0.000e+00  0.000e+00 |
 | g g -> b bbar                                  123 |           7          1          1 |   1.481e-07  1.481e-07 |
 | q qbar -> b bbar                               124 |           3          2          2 |   5.272e-08  1.999e-08 |
 |                                                    |                                   |                        |
 | sum                                                |        3973        500        500 |   6.911e-05  1.599e-06 |
 |                                                                                                                 |
 *-------  End PYTHIA Event and Cross Section Statistics ----------------------------------------------------------*

 *-------  PYTHIA Error and Warning Messages Statistics  ----------------------------------------------------------* 
 |                                                                                                                 | 
 |  times   message                                                                                                | 
 |                                                                                                                 | 
 |      1   Error in Pythia::next: hadronLevel failed; try again                                                   | 
 |      1   Error in StringFragmentation::fragment: stuck in joining                                               | 
 |      2   Warning in StringFragmentation::fragmentToJunction: bad convergence junction rest frame                | 
 |                                                                                                                 | 
 *-------  End PYTHIA Error and Warning Messages Statistics  ------------------------------------------------------* 


  2016-03-15 13:49       number of jets, SlowJet

        8.40*10^ 1       X                                            
        8.10*10^ 1       X                                            
        7.80*10^ 1       X3                                           
        7.50*10^ 1       XX                                           
        7.20*10^ 1       XX                                           
        6.90*10^ 1       XX                                           
        6.60*10^ 1       XXX                                          
        6.30*10^ 1      7XXX                                          
        6.00*10^ 1      XXXX                                          
        5.70*10^ 1      XXXX                                          
        5.40*10^ 1      XXXX                                          
        5.10*10^ 1      XXXX                                          
        4.80*10^ 1      XXXXX                                         
        4.50*10^ 1     7XXXXX                                         
        4.20*10^ 1     XXXXXX7                                        
        3.90*10^ 1     XXXXXXX                                        
        3.60*10^ 1     XXXXXXX                                        
        3.30*10^ 1     XXXXXXX                                        
        3.00*10^ 1     XXXXXXX7                                       
        2.70*10^ 1     XXXXXXXX                                       
        2.40*10^ 1     XXXXXXXX                                       
        2.10*10^ 1     XXXXXXXX                                       
        1.80*10^ 1     XXXXXXXX                                       
        1.50*10^ 1     XXXXXXXX7                                      
        1.20*10^ 1    7XXXXXXXXX7                                     
        0.90*10^ 1    XXXXXXXXXXX                                     
        0.60*10^ 1    XXXXXXXXXXX 7                                   
        0.30*10^ 1    XXXXXXXXXXXXX7X3                                

          Contents                                                    
            *10^ 1  00146876442110000000000000000000000000000000000000
            *10^ 0  00142466819413523100000000000000000000000000000000
            *10^-1  00000000000000000000000000000000000000000000000000
            *10^-2  00000000000000000000000000000000000000000000000000

          Low edge  -                                                 
            *10^ 1  00000000000111111111122222222223333333333444444444
            *10^ 0  00123456789012345678901234567890123456789012345678
            *10^-1  55555555555555555555555555555555555555555555555555

   Entries  =         500    Mean =  6.5460e+00    Underflow =  0.0000e+00    Low edge  = -5.0000e-01
   All chan =  5.0000e+02    Rms  =  2.6989e+00    Overflow  =  0.0000e+00    High edge =  4.9500e+01


  2016-03-15 13:49       number of jets, CellJet

        8.40*10^ 1       3                                            
        8.10*10^ 1       X                                            
        7.80*10^ 1       X                                            
        7.50*10^ 1       X                                            
        7.20*10^ 1       X77                                          
        6.90*10^ 1       XXX                                          
        6.60*10^ 1       XXX                                          
        6.30*10^ 1       XXX                                          
        6.00*10^ 1       XXX                                          
        5.70*10^ 1       XXX                                          
        5.40*10^ 1       XXX 7                                        
        5.10*10^ 1       XXX X                                        
        4.80*10^ 1      3XXXXX                                        
        4.50*10^ 1      XXXXXX                                        
        4.20*10^ 1     XXXXXXX                                        
        3.90*10^ 1     XXXXXXX                                        
        3.60*10^ 1     XXXXXXX                                        
        3.30*10^ 1     XXXXXXX                                        
        3.00*10^ 1     XXXXXXX                                        
        2.70*10^ 1     XXXXXXX                                        
        2.40*10^ 1     XXXXXXX7                                       
        2.10*10^ 1     XXXXXXXX                                       
        1.80*10^ 1     XXXXXXXX7                                      
        1.50*10^ 1     XXXXXXXXX                                      
        1.20*10^ 1     XXXXXXXXXXX                                    
        0.90*10^ 1    3XXXXXXXXXXX                                    
        0.60*10^ 1    XXXXXXXXXXXX7X                                  
        0.30*10^ 1    XXXXXXXXXXXXXXX33                               

          Contents                                                    
            *10^ 1  00044877452111000000000000000000000000000000000000
            *10^ 0  00726211833722563110000000000000000000000000000000
            *10^-1  00000000000000000000000000000000000000000000000000
            *10^-2  00000000000000000000000000000000000000000000000000

          Low edge  -                                                 
            *10^ 1  00000000000111111111122222222223333333333444444444
            *10^ 0  00123456789012345678901234567890123456789012345678
            *10^-1  55555555555555555555555555555555555555555555555555

   Entries  =         500    Mean =  6.9560e+00    Underflow =  0.0000e+00    Low edge  = -5.0000e-01
   All chan =  5.0000e+02    Rms  =  2.9062e+00    Overflow  =  0.0000e+00    High edge =  4.9500e+01


  2016-03-15 13:49       number of jets, CellJet - SlowJet

        2.70*10^ 2                        1                      
        2.60*10^ 2                        X                      
        2.50*10^ 2                        X                      
        2.40*10^ 2                        X                      
        2.30*10^ 2                        X                      
        2.20*10^ 2                        X                      
        2.10*10^ 2                        X                      
        2.00*10^ 2                        X                      
        1.90*10^ 2                        X                      
        1.80*10^ 2                        X                      
        1.70*10^ 2                        X                      
        1.60*10^ 2                        X                      
        1.50*10^ 2                        X4                     
        1.40*10^ 2                        XX                     
        1.30*10^ 2                        XX                     
        1.20*10^ 2                        XX                     
        1.10*10^ 2                        XX                     
        1.00*10^ 2                        XX                     
        0.90*10^ 2                        XX                     
        0.80*10^ 2                        XX                     
        0.70*10^ 2                        XX                     
        0.60*10^ 2                        XX                     
        0.50*10^ 2                        XX                     
        0.40*10^ 2                       7XXX                    
        0.30*10^ 2                       XXXX                    
        0.20*10^ 2                       XXXX                    
        0.10*10^ 2                     17XXXX631                 

          Contents                                               
            *10^ 2  000000000000000000000021000000000000000000000
            *10^ 1  000000000000000000000364400000000000000000000
            *10^ 0  000000000000000000017714063100000000000000000
            *10^-1  000000000000000000000000000000000000000000000

          Low edge  -----------------------                      
            *10^ 1  222111111111100000000000000000000111111111122
            *10^ 0  210987654321098765432100123456789012345678901
            *10^-1  555555555555555555555555555555555555555555555

   Entries  =         500    Mean =  4.1000e-01    Underflow =  0.0000e+00    Low edge  = -2.2500e+01
   All chan =  5.0000e+02    Rms  =  9.1755e-01    Overflow  =  0.0000e+00    High edge =  2.2500e+01


  2016-03-15 13:49       pT for jets, SlowJet

        8.40*10^ 2    1                                                                                                 
        8.10*10^ 2    X                                                                                                 
        7.80*10^ 2    X                                                                                                 
        7.50*10^ 2    X                                                                                                 
        7.20*10^ 2    X                                                                                                 
        6.90*10^ 2    X                                                                                                 
        6.60*10^ 2    X                                                                                                 
        6.30*10^ 2    X                                                                                                 
        6.00*10^ 2    X                                                                                                 
        5.70*10^ 2    X                                                                                                 
        5.40*10^ 2    X                                                                                                 
        5.10*10^ 2    X                                                                                                 
        4.80*10^ 2    X                                                                                                 
        4.50*10^ 2    X                                                                                                 
        4.20*10^ 2    X                                                                                                 
        3.90*10^ 2    XX                                                                                                
        3.60*10^ 2    XX                                                                                                
        3.30*10^ 2    XX                                                                                                
        3.00*10^ 2    XX                                                                                                
        2.70*10^ 2    XX                                                                                                
        2.40*10^ 2    XX                                                                                                
        2.10*10^ 2    XX8                                                                                               
        1.80*10^ 2    XXX                                                                                               
        1.50*10^ 2    XXX4                                                                                              
        1.20*10^ 2    XXXX53                                                                                            
        0.90*10^ 2    XXXXXX3                                                                                           
        0.60*10^ 2    XXXXXXX7443                         41457445311  1                                                
        0.30*10^ 2    XXXXXXXXXXX9X878565535555537655557X7XXXXXXXXXXXXXX985755654433323232213111111 11  2   1           

          Contents                                                                                                      
            *10^ 2  0083211000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 1  0019030965443232221111011111121111122243445444433333221211111100000000000000000000000000000000000000
            *10^ 0  0030336881238613044864945545008545619212340125023102635054743299978786539334344032105101200110110000
            *10^-1  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

          Low edge                                                                                                      
            *10^ 2  0000000000000000000011111111111111111111222222222222222222223333333333333333333344444444444444444444
            *10^ 1  0011223344556677889900112233445566778899001122334455667788990011223344556677889900112233445566778899
            *10^ 0  0505050505050505050505050505050505050505050505050505050505050505050505050505050505050505050505050505

   Entries  =        3273    Mean =  9.5490e+01    Underflow =  0.0000e+00    Low edge  =  0.0000e+00
   All chan =  3.2580e+03    Rms  =  1.0410e+02    Overflow  =  1.5000e+01    High edge =  5.0000e+02


  2016-03-15 13:49       eT for jets, CellJet

        1.00*10^ 3    X                                                                                                 
        0.96*10^ 3    X                                                                                                 
        0.92*10^ 3    X                                                                                                 
        0.88*10^ 3    X                                                                                                 
        0.84*10^ 3    X                                                                                                 
        0.80*10^ 3    X                                                                                                 
        0.76*10^ 3    X                                                                                                 
        0.72*10^ 3    X                                                                                                 
        0.68*10^ 3    X                                                                                                 
        0.64*10^ 3    X                                                                                                 
        0.60*10^ 3    X                                                                                                 
        0.56*10^ 3    X                                                                                                 
        0.52*10^ 3    X                                                                                                 
        0.48*10^ 3    X                                                                                                 
        0.44*10^ 3    X                                                                                                 
        0.40*10^ 3    X2                                                                                                
        0.36*10^ 3    XX                                                                                                
        0.32*10^ 3    XX                                                                                                
        0.28*10^ 3    XX                                                                                                
        0.24*10^ 3    XX                                                                                                
        0.20*10^ 3    XX9                                                                                               
        0.16*10^ 3    XXX6                                                                                              
        0.12*10^ 3    XXXX85                                                                                            
        0.08*10^ 3    XXXXXX7522                            1122 1                                                      
        0.04*10^ 3    XXXXXXXXXX997747454334343434552365987XXXXX9XX9796947363543423222221111211111 111  1               

          Contents                                                                                                      
            *10^ 3  0010000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 2  0003111000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 1  0006941976443322121111111111111101223323444434332323121211111010000000000000000000000000000000000000
            *10^ 0  0019752900675786775850454636278893304269426773966427683429727839787965539256241222105101110110100100

          Low edge                                                                                                      
            *10^ 2  0000000000000000000011111111111111111111222222222222222222223333333333333333333344444444444444444444
            *10^ 1  0011223344556677889900112233445566778899001122334455667788990011223344556677889900112233445566778899
            *10^ 0  0505050505050505050505050505050505050505050505050505050505050505050505050505050505050505050505050505

   Entries  =        3478    Mean =  9.0662e+01    Underflow =  0.0000e+00    Low edge  =  0.0000e+00
   All chan =  3.4630e+03    Rms  =  1.0239e+02    Overflow  =  1.5000e+01    High edge =  5.0000e+02


  2016-03-15 13:49       y for jets, SlowJet

        8.10*10^ 1                                                 3                                                    
        7.80*10^ 1                                                 X 7         7                                        
        7.50*10^ 1                                                 X X     7   X  X                                     
        7.20*10^ 1                                                 X X     X7  X  X                                     
        6.90*10^ 1                                              3  X XX    XX  X  X                                     
        6.60*10^ 1                                            X X  X XX7   XX  X  X                                     
        6.30*10^ 1                                          X X7X  X7XXX   XX  X  X 3                                   
        6.00*10^ 1                                          X XXX3 XXXXX 73XX73X  X X                                   
        5.70*10^ 1                                     3   3X XXXX XXXXX XXXXXXX  X X   3                               
        5.40*10^ 1                                     X   XX XXXX XXXXX3XXXXXXX  X X 7 X  X                            
        5.10*10^ 1                               3   33X   XX XXXX3XXXXXXXXXXXXXX X3X3X X  X                            
        4.80*10^ 1                               X X XXXX  XX7XXXXXXXXXXXXXXXXXXXXXXXXXXX 3X                            
        4.50*10^ 1                             X X X XXXX7 XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XX                            
        4.20*10^ 1                             XXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XX X                          
        3.90*10^ 1                             XXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XXXX                          
        3.60*10^ 1                           X XXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XXXXX3 3                      
        3.30*10^ 1                           XXXXX3XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XXXXXX X  7                   
        3.00*10^ 1                     7     XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX X 3X                   
        2.70*10^ 1                 3  3X 3   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX   7               
        2.40*10^ 1                 X  XX X7X3XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX  X               
        2.10*10^ 1                 X3 XX7XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX37X3              
        1.80*10^ 1               77XX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX              
        1.50*10^ 1               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX             
        1.20*10^ 1              XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX             
        0.90*10^ 1              XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX            
        0.60*10^ 1             3XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX3           
        0.30*10^ 1            7XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX           

          Contents                                                                                                      
            *10^ 1  0000000000001112112222222334443444454445646665476766555775575474645453453433232232122110000000000000
            *10^ 0  0000000000242775955905342635291829958425376278992795298419871859193850649264747824906959400000000000
            *10^-1  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^-2  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

          Low edge  --------------------------------------------------                                                  
            *10^ 0  5444444444433333333332222222222111111111100000000000000000001111111111222222222233333333334444444444
            *10^-1  0987654321098765432109876543210987654321098765432101234567890123456789012345678901234567890123456789
            *10^-2  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

   Entries  =        3273    Mean =  7.1907e-02    Underflow =  0.0000e+00    Low edge  = -5.0000e+00
   All chan =  3.2730e+03    Rms  =  1.7919e+00    Overflow  =  0.0000e+00    High edge =  5.0000e+00


  2016-03-15 13:49       eta for jets, CellJet

        8.40*10^ 1                                                          3                                           
        8.10*10^ 1                                                          X                                           
        7.80*10^ 1                                                          X                                           
        7.50*10^ 1                                              3  X 7 3   7X     X                                     
        7.20*10^ 1                                          X   X  X7X3X   XX  X  X                                     
        6.90*10^ 1                                         7X  7X  XXXXX  XXX  X  X                                     
        6.60*10^ 1                                         XX  XX37XXXXX3 XXX  X3 X                                     
        6.30*10^ 1                                         XX  XXXXXXXXXX XXX7 XX XX                                    
        6.00*10^ 1                                         XX  XXXXXXXXXX7XXXX XX XX7                                   
        5.70*10^ 1                                   7X3   XX 3XXXXXXXXXXXXXXX7XX3XXX  7                                
        5.40*10^ 1                              7    XXX3  XX XXXXXXXXXXXXXXXXXXXXXXXX X   X                            
        5.10*10^ 1                              X  3 XXXX  XX XXXXXXXXXXXXXXXXXXXXXXXXXX 33X                            
        4.80*10^ 1                             3X  X XXXX  XX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX7                           
        4.50*10^ 1                             XX7 X XXXX3 XX3XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                           
        4.20*10^ 1                             XXX XXXXXXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX     7                     
        3.90*10^ 1                             XXX XXXXXXX7XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX     X                     
        3.60*10^ 1                           XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX7 X  X                     
        3.30*10^ 1                           XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX7X  X3 3                  
        3.00*10^ 1                X   7  X   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX 3XX7X                  
        2.70*10^ 1                X   X  X 3 XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX3XXXXX7                 
        2.40*10^ 1                X X X 7XXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX  X              
        2.10*10^ 1                X X7X3XXXX3XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XX7             
        1.80*10^ 1                X XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XXX             
        1.50*10^ 1              XXX3XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XXX7            
        1.20*10^ 1              XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XXXX            
        0.90*10^ 1              XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX3           
        0.60*10^ 1             7XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX           
        0.30*10^ 1            7XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX           

          Contents                                                                                                      
            *10^ 1  0000000000001131222123221334543445555436745676677777656786576576555544454333224323202221000000000000
            *10^ 0  0000000000255503409930459666346926752388235834551403499422624553941689947526581191691404700000000000
            *10^-1  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^-2  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

          Low edge  --------------------------------------------------                                                  
            *10^ 0  5444444444433333333332222222222111111111100000000000000000001111111111222222222233333333334444444444
            *10^-1  0987654321098765432109876543210987654321098765432101234567890123456789012345678901234567890123456789
            *10^-2  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

   Entries  =        3478    Mean =  7.8493e-02    Underflow =  0.0000e+00    Low edge  = -5.0000e+00
   All chan =  3.4780e+03    Rms  =  1.7941e+00    Overflow  =  0.0000e+00    High edge =  5.0000e+00


  2016-03-15 13:49       phi for jets, SlowJwt

        4.80*10^ 1        X                                                                                             
        4.70*10^ 1        X                                                                                             
        4.60*10^ 1        X                                                                                           X 
        4.50*10^ 1        X                                                                                           X 
        4.40*10^ 1        X                       X                                                                   X 
        4.30*10^ 1        X                       X                                                                   X 
        4.20*10^ 1        X                       X                                                 X                 X 
        4.10*10^ 1        X                       X                                         X       X                 X 
        4.00*10^ 1        X         X             XX             X       X                  X       X    X            X 
        3.90*10^ 1       XX         X         X   XX             X       X                  X       X    X            X 
        3.80*10^ 1       XX   X     XX    X X X   XX             X       X   X   XX    X    X   X   X    X            X 
        3.70*10^ 1       XX   X     XX    X X X   XX   X         X     X X   X   XX    X    X   X X X    X    X       X 
        3.60*10^ 1       XX   X     XX   XX X X   XX   X      X  X     X X   X   XX    X  X X   X X X    X    X       X 
        3.50*10^ 1    X XXX   XX    XX   XX XXX  XXX   X      X  X XX XX X   X   XXX   X  X X   X XXX    X X  X       X 
        3.40*10^ 1    X XXXX  XX    XX   XX XXX  XXX X XX     X  X XXXXX X   X   XXXX  X  X X   X XXX    X X  X       X 
        3.30*10^ 1    X XXXX  XX    XX  XXXXXXX  XXX X XX     XX X XXXXX X X X   XXXX  X  X X  XX XXX   XX X  X    X  XX
        3.20*10^ 1    X XXXX  XX    XX XXXXXXXX  XXX X XX X   XX X XXXXX X XXX X XXXX  X  X X  XX XXX   XX X  X  X X  XX
        3.10*10^ 1    X XXXX  XX    XX XXXXXXXX  XXXXXXXXXX  XXX X XXXXXXXXXXX X XXXX  X  X X  XX XXXX  XX XX XX X X  XX
        3.00*10^ 1    XXXXXX XXX   XXXXXXXXXXXX  XXXXXXXXXX  XXX X XXXXXXXXXXX X XXXXXXX XX X  XX XXXXX XXXXX XX X X  XX
        2.90*10^ 1    XXXXXX XXX   XXXXXXXXXXXXX XXXXXXXXXX  XXXXX XXXXXXXXXXX XXXXXXXXX XX X XXX XXXXX XXXXX XX X X  XX
        2.80*10^ 1  XXXXXXXX XXX   XXXXXXXXXXXXX XXXXXXXXXX  XXXXXXXXXXXXXXXXX XXXXXXXXX XX X XXX XXXXX XXXXX XX XXX  XX
        2.70*10^ 1  XXXXXXXXXXXX X XXXXXXXXXXXXX XXXXXXXXXX  XXXXXXXXXXXXXXXXX XXXXXXXXX XX XXXXX XXXXX XXXXX XX XXX XXX
        2.60*10^ 1  XXXXXXXXXXXX X XXXXXXXXXXXXXXXXXXXXXXXX  XXXXXXXXXXXXXXXXX XXXXXXXXX XXXXXXXX XXXXX XXXXX XX XXXXXXX
        2.50*10^ 1  XXXXXXXXXXXX X XXXXXXXXXXXXXXXXXXXXXXXX  XXXXXXXXXXXXXXXXX XXXXXXXXX XXXXXXXXXXXXXX XXXXX XX XXXXXXX
        2.40*10^ 1  XXXXXXXXXXXXXX XXXXXXXXXXXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XXXXXXXXXX
        2.30*10^ 1  XXXXXXXXXXXXXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
        2.20*10^ 1  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
        2.10*10^ 1  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

          Contents                                                                                                      
            *10^ 1  2233334323332223433333333332234433333332233324233333343333232333333323324223323343323433323323232243
            *10^ 0  8850598470854720080236838599654014174124316390855457101328129885400840661793857521043005137142836763
            *10^-1  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^-2  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

          Low edge  --------------------------------------------------                                                  
            *10^ 0  3332222222222222222111111111111111100000000000000000000000000000001111111111111111222222222222222233
            *10^-1  1009887765543322100988776554332110098876655433211000112334556678890011233455677889001223345567788900
            *10^-2  4825936048159260471582603715826937148259370481593606395184073952841739628517306285174062951840639528

   Entries  =        3273    Mean = -2.6214e-02    Underflow =  0.0000e+00    Low edge  = -3.1416e+00
   All chan =  3.2730e+03    Rms  =  1.8062e+00    Overflow  =  0.0000e+00    High edge =  3.1416e+00


  2016-03-15 13:49       phi for jets, CellJet

        4.92*10^ 1         8                      8                                                                     
        4.80*10^ 1       X X                      X                                                                     
        4.68*10^ 1       X X                      X                   3                                                 
        4.56*10^ 1       X X         5            X                   X                                                 
        4.44*10^ 1       X X         X            X                   X                                                 
        4.32*10^ 1       X X         X        8   X    8              X      8                                          
        4.20*10^ 1       X X         X        X   X    X          X   X      X              2                  X        
        4.08*10^ 1       X X   3     X        X   X    X          X   X   3  X  3  3        X  3               X        
        3.96*10^ 1       X X   X     X    5   X  5X    X          X   X  5X  X  X  X  5     X  X  5            X   5    
        3.84*10^ 1       X7X   X     X 7  X   X  XX    X7 7       X   X 7XX  X  X  X  X     X  X  X 77  7      X   X    
        3.72*10^ 1      8XXX   X     X X  X 8 X 8XX    XX X    8  X   X XXX  X  X  X  X     X  X 8X XX  X   8  X 8 X    
        3.60*10^ 1    2XXXXX  2X    2X X XX X X XXXX 2 XX X   XXX X  XX XXX  X  X2 X  X2    X XX XX XX  X2  XX X X X  X 
        3.48*10^ 1    XXXXXX  XX    XX X XX X X XXXX3X XX X   XXX X  XX XXX  X  XX X3 XX    X XX XX XX3 XX3 XX X X X 3X 
        3.36*10^ 1    XXXXXX  XX    XX X XX X X5XXXXXX XX X   XXX5X  XX XXX  X5 XX XX XX  5 X XX XX XXX5XXX XX X X X XX 
        3.24*10^ 1   7XXXXXX  XX  7 XX X7XX X7XXXXXXXX7XX X  7XXXXX  XX XXX7 XX XX XX XX  X X XX XX XXXXXXX XX7X X X XX 
        3.12*10^ 1   XXXXXXX  XX  X XX8XXXX XXXXXXXXXXXXX X 8XXXXXX  XX XXXX8XX XX XX XX8 X X XX XX8XXXXXXX XXXX X X XX 
        3.00*10^ 1  2XXXXXXX 2XX  X2XXXXXXX XXXXXXXXXXXXXXX XXXXXXX2XXX XXXXXXX XX XX XXXXX X XXXXXXXXXXXXX2XXXX2X X XX 
        2.88*10^ 1  XXXXXXXX XXX 3XXXXXXXXX3XXXXXXXXXXXXXXX3XXXXXXXXXXX XXXXXXX3XX3XX XXXXX X XXXXXXXXXXXXXXXXXXXX X XX 
        2.76*10^ 1  XXXXXXXX XXX5XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XXXXXXXXXXXXX5XXXXX5X XXXXXXXXXXXXXXXXXXXX5X XX 
        2.64*10^ 1  XXXXXXXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXXXXXXXX XX 
        2.52*10^ 1  XXXXXXXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXXXXXXX XXXXXXXXXXXXXXXXXXXXXX XX 
        2.40*10^ 1  XXXXXXXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX2XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX 
        2.28*10^ 1  XXXXXXXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX 
        2.16*10^ 1  XXXXXXXX5XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX 
        2.04*10^ 1  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX 
        1.92*10^ 1  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX 
        1.80*10^ 1  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

          Contents                                                                                                      
            *10^ 1  2333343422342232343333323343334333343332333333423342334334324324323333324234333333333332333423232331
            *10^ 0  9256788919507829551826987233799645238088126763290663890213380580479510371460079188438549762297794468
            *10^-1  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^-2  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

          Low edge  --------------------------------------------------                                                  
            *10^ 0  3332222222222222222111111111111111100000000000000000000000000000001111111111111111222222222222222233
            *10^-1  1009887765543322100988776554332110098876655433211000112334556678890011233455677889001223345567788900
            *10^-2  4825936048159260471582603715826937148259370481593606395184073952841739628517306285174062951840639528

   Entries  =        3478    Mean = -3.8727e-02    Underflow =  9.0000e+00    Low edge  = -3.1416e+00
   All chan =  3.4550e+03    Rms  =  1.7990e+00    Overflow  =  1.4000e+01    High edge =  3.1416e+00


  2016-03-15 13:49       R distance between jets, SlowJet

        4.35*10^ 2                                12                                                                    
        4.20*10^ 2                                XX                                                                    
        4.05*10^ 2                                XX                                                                    
        3.90*10^ 2                              7 XX                                                                    
        3.75*10^ 2                             7X7XX                                                                    
        3.60*10^ 2                             XXXXX                                                                    
        3.45*10^ 2                          25 XXXXX                                                                    
        3.30*10^ 2                         4XX5XXXXX9                                                                   
        3.15*10^ 2                        9XXXXXXXXXX                                                                   
        3.00*10^ 2                       3XXXXXXXXXXX5                                                                  
        2.85*10^ 2                     47XXXXXXXXXXXXX                                                                  
        2.70*10^ 2            3        XXXXXXXXXXXXXXX3                                                                 
        2.55*10^ 2            X6      7XXXXXXXXXXXXXXXX                                                                 
        2.40*10^ 2            XX3 8 98XXXXXXXXXXXXXXXXX5                                                                
        2.25*10^ 2            XXX9X5XXXXXXXXXXXXXXXXXXXX8 6                                                             
        2.10*10^ 2           XXXXXXXXXXXXXXXXXXXXXXXXXXXX1X                                                             
        1.95*10^ 2           XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX5                                                            
        1.80*10^ 2           XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX3                                                           
        1.65*10^ 2           XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                                                           
        1.50*10^ 2          5XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX2 X                                                        
        1.35*10^ 2          XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX5X 1                                                      
        1.20*10^ 2          XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX8X                                                      
        1.05*10^ 2          XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX2156                                                  
        0.90*10^ 2          XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX 1                                                
        0.75*10^ 2          XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX9X8                                               
        0.60*10^ 2          XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX6544 3                                         
        0.45*10^ 2         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX9X                                         
        0.30*10^ 2         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX76125   3                               
        0.15*10^ 2         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX8X675434311                      

          Contents                                                                                                      
            *10^ 2  0000000012222222222222333333334432222121111111000000000000000000000000000000000000000000000000000000
            *10^ 1  0000000441542231335788123327872229532918732512999977755554532211211110100000000000000000000000000000
            *10^ 0  0000000520999377970619413820512393922698088071327937242113006478255299076565120000000000000000000000
            *10^-1  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

          Low edge                                                                                                      
            *10^ 0  0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
            *10^-1  0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789
            *10^-2  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

   Entries  =       10897    Mean =  2.9105e+00    Underflow =  0.0000e+00    Low edge  =  0.0000e+00
   All chan =  1.0897e+04    Rms  =  1.2799e+00    Overflow  =  0.0000e+00    High edge =  1.0000e+01


  2016-03-15 13:49       R distance between jets, CellJet

        5.00*10^ 2                                7                                                                     
        4.80*10^ 2                                X                                                                     
        4.60*10^ 2                                X3                                                                    
        4.40*10^ 2                              76XX                                                                    
        4.20*10^ 2                             4XXXX                                                                    
        4.00*10^ 2                           6 XXXXX                                                                    
        3.80*10^ 2                        1 1X3XXXXX7                                                                   
        3.60*10^ 2                        XXXXXXXXXXX2                                                                  
        3.40*10^ 2                      66XXXXXXXXXXXX                                                                  
        3.20*10^ 2                    8 XXXXXXXXXXXXXX                                                                  
        3.00*10^ 2                    X XXXXXXXXXXXXXX8                                                                 
        2.80*10^ 2                 114X7XXXXXXXXXXXXXXX 9 1                                                             
        2.60*10^ 2             8 43XXXXXXXXXXXXXXXXXXXX X X                                                             
        2.40*10^ 2           5XX7XXXXXXXXXXXXXXXXXXXXXX9X X                                                             
        2.20*10^ 2          8XXXXXXXXXXXXXXXXXXXXXXXXXXXX7X                                                             
        2.00*10^ 2          XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX67                                                           
        1.80*10^ 2          XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX9 5                                                        
        1.60*10^ 2          XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX4X 5                                                      
        1.40*10^ 2         3XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX5X3                                                     
        1.20*10^ 2         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX3  5                                                 
        1.00*10^ 2         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX96X                                                 
        0.80*10^ 2         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX67X04                                            
        0.60*10^ 2        6XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX885                                         
        0.40*10^ 2        XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX9273 2                                   
        0.20*10^ 2      68XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX8X8X8X3733333211                     

          Contents                                                                                                      
            *10^ 2  0000000122222222223233333334444433222221111111110010000000000000000000000000000000000000000000000000
            *10^ 1  0000115213353446661733666960339474937169974725209917776655432321212120100000000000000000000000000000
            *10^ 0  0000152750954751287431301267414544688311478090768212391866973566350507377676411000000000000000000000
            *10^-1  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

          Low edge                                                                                                      
            *10^ 0  0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
            *10^-1  0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789
            *10^-2  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

   Entries  =       12469    Mean =  2.9013e+00    Underflow =  0.0000e+00    Low edge  =  0.0000e+00
   All chan =  1.2469e+04    Rms  =  1.3004e+00    Overflow  =  0.0000e+00    High edge =  1.0000e+01


  2016-03-15 13:49       pT difference, SlowJet

        1.00*10^ 3                      8                                                                               
        0.96*10^ 3                      X                                                                               
        0.92*10^ 3                      X                                                                               
        0.88*10^ 3                      X                                                                               
        0.84*10^ 3                      X                                                                               
        0.80*10^ 3                      X                                                                               
        0.76*10^ 3                      X                                                                               
        0.72*10^ 3                      X                                                                               
        0.68*10^ 3                      X                                                                               
        0.64*10^ 3                      X                                                                               
        0.60*10^ 3                      X                                                                               
        0.56*10^ 3                      X                                                                               
        0.52*10^ 3                      X                                                                               
        0.48*10^ 3                      X                                                                               
        0.44*10^ 3                      X                                                                               
        0.40*10^ 3                      X                                                                               
        0.36*10^ 3                      X                                                                               
        0.32*10^ 3                      X9                                                                              
        0.28*10^ 3                      XX                                                                              
        0.24*10^ 3                      XX                                                                              
        0.20*10^ 3                      XX3                                                                             
        0.16*10^ 3                      XXX                                                                             
        0.12*10^ 3                      XXXX56                                                                          
        0.08*10^ 3                      XXXXXX6621                                                                      
        0.04*10^ 3                      XXXXXXXXXX989897665655643454344553335543333112221112121 1  1  1        1        

          Contents                                                                                                      
            *10^ 2  0000000000000000000093111100000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 1  0000000000000000000091720066543333322222222111111111211111111110000000000000000000000000000000000000
            *10^ 0  0000000000000000000026311545037242665503012647854668131088602144689862373741210311301010111200000000
            *10^-1  0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

          Low edge  --------------------                                                                                
            *10^ 2  1000000000000000000000000000000000000000111111111111111111112222222222222222222233333333333333333333
            *10^ 1  0998877665544332211000112233445566778899001122334455667788990011223344556677889900112233445566778899
            *10^ 0  0505050505050505050505050505050505050505050505050505050505050505050505050505050505050505050505050505

   Entries  =        2773    Mean =  4.3931e+01    Underflow =  0.0000e+00    Low edge  = -1.0000e+02
   All chan =  2.7670e+03    Rms  =  6.4585e+01    Overflow  =  6.0000e+00    High edge =  4.0000e+02


  2016-03-15 13:49       eT difference, CellJet

        1.16*10^ 3                      8                                                                               
        1.12*10^ 3                      X                                                                               
        1.08*10^ 3                      X                                                                               
        1.04*10^ 3                      X                                                                               
        1.00*10^ 3                      X                                                                               
        0.96*10^ 3                      X                                                                               
        0.92*10^ 3                      X                                                                               
        0.88*10^ 3                      X                                                                               
        0.84*10^ 3                      X                                                                               
        0.80*10^ 3                      X                                                                               
        0.76*10^ 3                      X                                                                               
        0.72*10^ 3                      X                                                                               
        0.68*10^ 3                      X                                                                               
        0.64*10^ 3                      X                                                                               
        0.60*10^ 3                      X                                                                               
        0.56*10^ 3                      X                                                                               
        0.52*10^ 3                      X                                                                               
        0.48*10^ 3                      X                                                                               
        0.44*10^ 3                      X                                                                               
        0.40*10^ 3                      X                                                                               
        0.36*10^ 3                      X                                                                               
        0.32*10^ 3                      XX                                                                              
        0.28*10^ 3                      XX                                                                              
        0.24*10^ 3                      XX                                                                              
        0.20*10^ 3                      XX8                                                                             
        0.16*10^ 3                      XXX                                                                             
        0.12*10^ 3                      XXX967                                                                          
        0.08*10^ 3                      XXXXXX77321                                                                     
        0.04*10^ 3                      XXXXXXXXXXX887778564576555553334352325433323212211 21111 1 11 1                 

          Contents                                                                                                      
            *10^ 3  0000000000000000000010000000000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 2  0000000000000000000013111100000000000000000000000000000000000000000000000000000000000000000000000000
            *10^ 1  0000000000000000000051910076544332223221222112111111120101111101000000000000000000000000000000000000
            *10^ 0  0000000000000000000039373709292336990027092991893417419499720370959953174525031220310110111101000000

          Low edge  --------------------                                                                                
            *10^ 2  1000000000000000000000000000000000000000111111111111111111112222222222222222222233333333333333333333
            *10^ 1  0998877665544332211000112233445566778899001122334455667788990011223344556677889900112233445566778899
            *10^ 0  0505050505050505050505050505050505050505050505050505050505050505050505050505050505050505050505050505

   Entries  =        2978    Mean =  4.1551e+01    Underflow =  0.0000e+00    Low edge  = -1.0000e+02
   All chan =  2.9730e+03    Rms  =  6.3268e+01    Overflow  =  5.0000e+00    High edge =  4.0000e+02
