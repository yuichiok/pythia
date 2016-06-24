// main27.cc is a part of the PYTHIA event generator.
// Copyright (C) 2016 Torbjorn Sjostrand.
// PYTHIA is licenced under the GNU GPL version 2, see COPYING for details.
// Please respect the MCnet Guidelines, see GUIDELINES for details.

// Kaluza-Klein gamma*/Z resonances in TeV-sized extra dimensions.

#include <assert.h>
#include <time.h>
#include <sstream>

#include "Pythia8/Pythia.h"
using namespace Pythia8;

int main() {

  // Generator.
  Pythia pythia;
  //ParticleData& pdt = pythia.particleData;

  // Pick new random number seed for each run, based on clock.
  //pythia.readString("Random:setSeed = on");
  //pythia.readString("Random:seed = 0");

  // Process selection.
    pythia.readString("HiggsSM:ffbar2HZ = on");
    pythia.readString("25:onMode = off");
    pythia.readString("25:onIfMatch = 5 -5");
    pythia.readString("23:onMode = off");
    pythia.readString("23:onIfMatch = 13 -13");
    pythia.readString("PhaseSpace:pTHatMin = 150.");
    //pythia.readString("Next:numberShowInfo = 0");
    //pythia.readString("Next:numberShowProcess = 0");
    //pythia.readString("Next:numberShowEvent = 0");

  // Initialize for LHC.
  pythia.readString("Beams:eCM = 14000.");
  pythia.init();

  // Histograms.
  Hist mHatHisto("mass", 100, 0, 300);
  Hist pTmuHisto("pT", 100, 1., 2501.);

  vector<int> moms;

  // Measure the cpu runtime.
  clock_t start, stop;
  double t = 0.0;
  // Depending on operating system, either of lines below gives warning.
  //assert((start = clock()) != -1); // Start timer; clock_t signed.
  //assert((start = clock()) != -1u); // Start timer; clock_t unsigned.
  // Simpler option, not using assert.
  start = clock();

  // Begin event loop. Generate event. Skip if error. List first one.
  for (int iEvent = 0 ; iEvent < 1000 ; ++iEvent) {
    if (!pythia.next()) continue;

    // Begin event analysis.
    bool isZ = false;
    bool ismu = false;
    bool ismub = false;
    int iZ = 0;
    int imu = 0;
    int imub = 0;
    for (int i = 0 ; i < pythia.event.size() ; ++i) {
      // find the most recent Z
      if (pythia.event[i].id() == 25) {
        iZ = i;
        isZ = true;
      }
      // find the final muon who's first mother is the Z
      if (pythia.event[i].id() == 5) {
        moms.clear();
        moms = pythia.event[i].motherList();
        for (int m = 0 ; m < int(moms.size()) ; m++) {
          if( pythia.event[ moms[m] ].id() == 25 ) {
            imu = i;
            ismu = true;
            break;
          } // end if 5000023
        } // end for moms.size()
      } // end if final muon
        
        if (pythia.event[i].id() == -5) {
            moms.clear();
            moms = pythia.event[i].motherList();
            for (int m = 0 ; m < int(moms.size()) ; m++) {
                if( pythia.event[ moms[m] ].id() == 25 ) {
                    imub = i;
                    ismub = true;
                    break;
                } // end if 5000023
            } // end for moms.size()
        } // end if final muon
        
    } // end for event.size()

      cout << "b= " << imu << "bbar= " << imub << endl;
      
    if(ismu && ismub)
    {
        double invm = sqrt((pythia.event[imu].m())*(pythia.event[imu].m()) + (pythia.event[imub].m())*(pythia.event[imub].m()) + 2*((pythia.event[imu].e())*(pythia.event[imub].e()) - (pythia.event[imu].px())*(pythia.event[imub].px()) - (pythia.event[imu].py())*(pythia.event[imub].py()) - (pythia.event[imu].pz())*(pythia.event[imub].pz())));
        
      mHatHisto.fill( invm );
      pTmuHisto.fill( pythia.event[imu].pT() );
        
        cout << "invariant mass is " << invm << ", pxb = "<< pythia.event[imu].px() << ", pxbbar = " << pythia.event[imub].px() << endl;
    }
      
    if(iEvent%10 == 0) cout << "Event: " << iEvent << endl << std::flush;
  } // end for iEvent<500

  // Done. Print results.
  stop = clock(); // Stop timer
  t = (double) (stop-start)/CLOCKS_PER_SEC;

  pythia.stat();
  cout << mHatHisto;
  cout << pTmuHisto;

  cout << "\n" << "|----------------------------------------|" << endl;
  cout << "| CPU Runtime = " << t << " sec" << endl;
  cout << "|----------------------------------------|" << "\n" << endl;

  return 0;
}
