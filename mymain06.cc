// main01.cc is a part of the PYTHIA event generator.
// Copyright (C) 2016 Torbjorn Sjostrand.
// PYTHIA is licenced under the GNU GPL version 2, see COPYING for details.
// Please respect the MCnet Guidelines, see GUIDELINES for details.

// This is a simple test program. It fits on one slide in a talk.
// It studies the charged multiplicity distribution at the LHC.

#include "Pythia8/Pythia.h"
using namespace Pythia8;
int main() {
  // Generator. Process selection. LHC initialization. Histogram.
  Pythia pythia;
  pythia.readString("Beams:eCM = 8000.");
  pythia.readString("HiggsSM:ffbar2HZ = on");
  pythia.readString("25:onMode = off");
  pythia.readString("25:onIfMatch = 5 -5");
  pythia.readString("23:onMode = off");
  pythia.readString("23:onIfMatch = 13 -13");
  pythia.readString("PhaseSpace:pTHatMin = 20.");
  pythia.init();
  //Hist mult("charged multiplicity", 100, -0.5, 799.5);
  // Begin event loop. Generate event. Skip if error. List first one.
    
    Hist pTH("Higgs Transverse Momentum",100,0.,500);
    Hist yH("Higgs pseudorapidity",100,-5.,5.);
    
    for (int iEvent = 0; iEvent < 100; ++iEvent) {
    if (!pythia.next()) continue;
      
      //if (iEvent < 1)
      //{
      //pythia.info.list();
      
      //pythia.event.list();
      //}
    
      int iH = 0;
      for (int i = 0; i < pythia.event.size(); ++i)
      {
          if (pythia.event[i].id() == 25) iH = i;
          
      }
        
        //Particle loop
        
        int nCharged = 0;
        int indexBQuark(0), indexBbarQuark(0);
        for (int i = 0; i < pythia.event.size(); ++i) {
            if (pythia.event[i].isFinal() && pythia.event[i].isCharged()) {
                ++nCharged;
            }
            Particle& theParticle = pythia.event[i];
            
            if (theParticle.id() == 5 ) {
                indexBQuark = i;
                cout << "b    Mother 1, Mother 2 = " << theParticle.mother1() << ", " << theParticle.mother2() << endl;
            }
            if (theParticle.id() == -5) {
                indexBbarQuark = i;
                cout << "bbar Mother 1, Mother 2 = " << theParticle.mother1() << ", " << theParticle.mother2() << endl;
            }
        } // particle loop
        
        
        
        //cout << "event size = " << pythia.event.size() << endl;
        
        //cout <<  "id = " << pythia.event[i].id() << ", Mother1 = " << pythia.event[iH].mother1() << ", Mother2 = " << pythia.event[iH].mother2() <<endl;
        
        //int iMoth1 = pythia.event[iH].mother1();
        //int iMoth2 = pythia.event[iH].mother2();
        //int iDau1 = pythia.event[iH].daughter1();
        //int iDau2 = pythia.event[iH].daughter2();
        
        pTH.fill( pythia.event[iH].pT() );
        yH.fill( pythia.event[iH].y() );
      
    // Find number of all final charged particles and fill histogram.
    //int nCharged = 0;
    //for (int i = 0; i < pythia.event.size(); ++i)
      //if (pythia.event[i].isFinal() && pythia.event[i].isCharged())
        //++nCharged;
    //mult.fill( nCharged );
  // End of event loop. Statistics. Histogram. Done.
  }
  pythia.stat();
    cout << pTH << yH;
  //cout << mult;
  return 0;
}
