#include <iostream>
#include <fstream>
#include <vector>
#include "Pythia8/Pythia.h"
using namespace std;
using namespace Pythia8;

int main() {
    
    // Generator. Process selection. LHC initialization.
    Pythia pythia;
    pythia.readString("Beams:eCM = 13000.");
    pythia.readString("WeakSingleBoson:ffbar2gmZ = on");
    pythia.readString("WeakZ0:gmZmode = 2");
    pythia.readString("23:onMode = off");
    pythia.readString("23:onIfMatch = 13 -13");
    pythia.readString("PhaseSpace:pTHatMin = 0.");
    //pythia.readString("Next:numberShowInfo = 0");
    //pythia.readString("Next:numberShowProcess = 0");
    //pythia.readString("Next:numberShowEvent = 0");
    pythia.init();
    
    // Common parameters for the two jet finders.
    double etaMax   = 2.4;
    double radius   = 0.4;
    double pTjetMin = 20.;
    // Exclude neutrinos (and other invisible) from study.
    int    nSel     = 2;
    
    // Set up SlowJet jet finder, with anti-kT clustering
    // and pion mass assumed for non-photons..
    
    SlowJet slowJet( -1, radius, pTjetMin, etaMax, nSel, 1);
    
    //Variables
    

    
    
    // Begin event loop. Generate event. Skip if error. List first one.
    for (int iEvent = 0; iEvent < 100000; ++iEvent)
    {
        if(!pythia.next()) continue;
        
        //printf("this is %d th event",iEvent);
        
        //if (iEvent < 5) {pythia.info.list(); pythia.event.list();}
        
        // Analyze Slowet jet properties. List first few.
        //slowJet.analyze( pythia.event );
        
        /*for(int i = 0; i < pythia.event.size();++i)
        {
            
            
        }//end of event.size()*/
                
        //slowJet.list();
        
    }//end of iEvent
    
    pythia.stat();
    return 0;
}
