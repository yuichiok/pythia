#include <iostream>
#include <fstream>
#include "Pythia8/Pythia.h"
using namespace std;
using namespace Pythia8;

int main() {
    
  // Generator. Process selection. LHC initialization.
  Pythia pythia;
  pythia.readString("Beams:eCM = 13000.");
  pythia.readString("HiggsSM:ffbar2HZ = on");
  pythia.readString("25:onMode = off");
  pythia.readString("25:onIfMatch = 5 -5");
  pythia.readString("23:onMode = off");
  pythia.readString("23:onIfMatch = 13 -13");
  pythia.readString("PhaseSpace:pTHatMin = 150.");
  pythia.readString("Next:numberShowInfo = 0");
  pythia.readString("Next:numberShowProcess = 0");
  pythia.readString("Next:numberShowEvent = 0");
  pythia.init();
    
    // Common parameters for the two jet finders.
    double etaMax   = 2.4;
    double radius   = 0.4;
    double pTjetMin = 20.;
    // Exclude neutrinos (and other invisible) from study.
    int    nSel     = 2;
    
    // Set up SlowJet jet finder, with anti-kT clustering
    // and pion mass assumed for non-photons..
    
    SlowJet slowJet( 1, radius, pTjetMin, etaMax, nSel, 1);
    
  // Begin event loop. Generate event. Skip if error. List first one.
    
    Hist hm("higgs invariant mass", 100, 0., 300.);
    Hist hpt("higgs pT", 100, 0., 100.);
    
    //begin event analysis
    bool isH = false;
    bool isb = false;
    bool isbbar = false;
    int iH = 0;
    int ib = 0;
    int ibbar = 0;

    
    for (int iEvent = 0; iEvent < 100; ++iEvent)
    {
        if (!pythia.next()) continue;
        
        
        //particle loop
        for (int i = 0; i < pythia.event.size(); i++)
        {
            // find the most recent H
            if (pythia.event[i].id() == 25)
            {
                iH = i;
                isH = true;
            }
            
            // find the final b bbar who's first mother is the H
            if (pythia.event[i].id() == 5 && pythia.event[pythia.event[i].mother1()].id()==25)
            {
                ib = i;
                isb = true;
                break;
            }
            if (pythia.event[i].id() == -5 && pythia.event[pythia.event[i].mother1()].id()==25)
            {
                ibbar = i;
                isbbar = true;
                break;
            }
        }
        
        if(isb && isbbar)
        {
            hm.fill( sqrt((pythia.event[ib].m())*(pythia.event[ib].m()) + (pythia.event[ibbar].m())*(pythia.event[ibbar].m()) + 2*((pythia.event[ib].e())*(pythia.event[ibbar].m()) - (pythia.event[ib].px())*(pythia.event[ibbar].px()) - (pythia.event[ib].py())*(pythia.event[ibbar].py()) - (pythia.event[ib].pz())*(pythia.event[ibbar].pz()))) );
            
            hpt.fill( pythia.event[iEvent].pT());
            
        }
        
        
        
    }// End of event loop. Statistics. Histogram. Done.
    
    cout << hm;
    cout << hpt;
    pythia.stat();
    return 0;
}
