#include <iostream>
#include <fstream>
#include "Pythia8/Pythia.h"
using namespace std;
using namespace Pythia8;

int main() {
    
    ofstream myfile ("mytext10.txt");
    
    int nListJets = 5;
    
  // Generator. Process selection. LHC initialization.
  Pythia pythia;
  pythia.readString("Beams:eCM = 8000.");
  pythia.readString("HiggsSM:ffbar2HZ = on");
  pythia.readString("25:onMode = off");
  pythia.readString("25:onIfMatch = 5 -5");
  pythia.readString("23:onMode = off");
  pythia.readString("23:onIfMatch = 13 -13");
  pythia.readString("PhaseSpace:pTHatMin = 20.");
  pythia.init();
    
    // Common parameters for the two jet finders.
    double etaMax   = 4.;
    double radius   = 0.7;
    double pTjetMin = 10.;
    // Exclude neutrinos (and other invisible) from study.
    int    nSel     = 2;
    // Range and granularity of CellJet jet finder.
    int    nEta     = 80;
    int    nPhi     = 64;
    
    // Set up SlowJet jet finder, with anti-kT clustering
    // and pion mass assumed for non-photons..
    SlowJet slowJet( -1, radius, pTjetMin, etaMax, nSel, 1);
    
    // Set up CellJet jet finder.
    CellJet cellJet( etaMax, nEta, nPhi, nSel);
    
  // Begin event loop. Generate event. Skip if error. List first one.
    
    Hist eGamma("Energy spectrum of photons", 100, 0., 10.);
    Hist eRest("Energy spectrum of stable particle", 100, 0., 10.);
    
    for (int iEvent = 0; iEvent < 1; ++iEvent)
    {
        pythia.next();
        
        // Analyze Slowet jet properties. List first few.
        slowJet. analyze( pythia.event );
        if (iEvent < nListJets) slowJet.list();
        
        // Analyze CellJet jet properties. List first few.
        cellJet. analyze( pythia.event, pTjetMin, radius );
        if (iEvent < nListJets) cellJet.list();
        
        
        
        
        int nParticle = 0;
        
        cout << "   List#       i        id        M1        M2        D1        D2        px        py        pz" << endl;
        
        for (int i = 0; i < pythia.event.size(); ++i)
        {
            if (pythia.event[i].isFinal())
            {
                ++nParticle;
                
                cout << setw(6) << nParticle;
                cout << setw(10) << i;
                cout << setw(10) << pythia.event[i].id();
                cout << setw(10) << pythia.event[i].mother1();
                cout << setw(10) << pythia.event[i].mother2();
                cout << setw(10) << pythia.event[i].daughter1();
                cout << setw(10) << pythia.event[i].daughter2();
                cout << setw(10) << pythia.event[i].px();
                cout << setw(10) << pythia.event[i].py();
                cout << setw(10) << pythia.event[i].pz();
                cout<< endl;
                
                int idAbs = pythia.event[i].idAbs();
                double eI = pythia.event[i].e();
                if (idAbs == 22)
                {
                    eGamma.fill(eI);
                    
                    myfile << eI << endl;
                }
                else {eRest.fill(eI);}
                
            }
            
        }
       cout << "Event " << iEvent << ", Stable Particles " << nParticle << endl;
    }
    
    pythia.stat();
    cout << eGamma << eRest;
    return 0;
}
