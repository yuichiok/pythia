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
    
    
    for (int iEvent = 0; iEvent < 1; ++iEvent)
    {
        pythia.next();
//        pythia.info.list();
        pythia.event.list();
        
        int nParticle = 0;
        cout << "nParticle     id     Mother1     Mother2     Daughter1     Daughter2     px     py     pz" << endl;
        for (int i = 0; i < pythia.event.size(); ++i)
        {
            if (pythia.event[i].isFinal())
            {
                ++nParticle;
                
                cout << i << "     " << pythia.event[i].id() << "     " << pythia.event[i].mother1() << "     " << pythia.event[i].mother2() << "     " << pythia.event[i].daughter1() << "     " << pythia.event[i].daughter2() << "     " << pythia.event[i].px() << "     " << pythia.event[i].py() << "     " << pythia.event[i].pz() << endl;
            }
            
//           if (pythia.event[i].id() == 5 )
//           {
//                BQuark = i;
//                cout << "i, id, Mother 1, Mother 2, Daughter 1, Daughter 2 = " << i << "," << pythia.event[i].id() << "," << pythia.event[i].mother1() << ", " << pythia.event[i].mother2() << "," << pythia.event[i].daughter1() << ", " << pythia.event[i].daughter2() << endl;
//            }
//            if (pythia.event[i].id() == -5)
//            {
//                BbarQuark = i;
//                cout << "i, id, Mother 1, Mother 2, Daughter 1, Daughter 2 = " << i << "," << pythia.event[i].id() << "," << pythia.event[i].mother1() << ", " << pythia.event[i].mother2() << "," << pythia.event[i].daughter1() << ", " << pythia.event[i].daughter2() << endl;
//            }
        }
        
        cout << "Event " << iEvent << ", Stable Particles " << nParticle << endl;
        
    }
    
    pythia.stat();
    return 0;
}
