// main01.cc is a part of the PYTHIA event generator.
// Copyright (C) 2016 Torbjorn Sjostrand.
// PYTHIA is licenced under the GNU GPL version 2, see COPYING for details.
// Please respect the MCnet Guidelines, see GUIDELINES for details.

// This is a simple test program. It fits on one slide in a talk.
// It studies the charged multiplicity distribution at the LHC.

#include "Pythia8/Pythia.h"
#include "TTree.h"
#include "TFile.h"
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
    
  //Set up the ROOT TFile and TTree.
  TFile *file = TFile::Open("pytree.root","recreate");
  Event *event = &pythia.event;
  TTree *T = new TTree("T","ev1 Tree");
  T->Branch("event",&event);
    
  //Hist mult("charged multiplicity", 100, -0.5, 799.5);
  // Begin event loop. Generate event. Skip if error. List first one.
  for (int iEvent = 0; iEvent < 100; ++iEvent) {
    if (!pythia.next()) continue;
      if (iEvent < 10) {
          pythia.info.list(); pythia.event.list();
      }
      T->Fill();
    // Find number of all final charged particles and fill histogram.
    //int nCharged = 0;
    //for (int i = 0; i < pythia.event.size(); ++i)
      //if (pythia.event[i].isFinal() && pythia.event[i].isCharged())
        //++nCharged;
    //mult.fill( nCharged );
  // End of event loop. Statistics. Histogram. Done.
  }
  pythia.stat();
  T->Print();
  T->Write();
    cout << T;
    
  //cout << mult;
  return 0;
}
