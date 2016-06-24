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
    
    SlowJet slowJet( -1, radius, pTjetMin, etaMax, nSel, 1);
    
  // Begin event loop. Generate event. Skip if error. List first one.
    
    for (int iEvent = 0; iEvent < 100; ++iEvent)
    {
        if(!pythia.next()) continue;
        
        // Analyze Slowet jet properties. List first few.
        slowJet.analyze( pythia.event );
        
        int nParticle = 0;
        
        for (int i = 0; i < pythia.event.size(); ++i)
        {
            double pT;
            double dpT;
            double a;
            double b;
            
            
            if (pythia.event[i].isFinal())
            {
                ++nParticle;
                
                int idAbs = pythia.event[i].idAbs();
                a = pythia.event[i].px();
                b = pythia.event[i].py();
                //double c = pythia.event[i].pz();
                double minimum = 13000; /*
                                         *change this to access the Center of Mass Eneprgy so the script works
                                         *for some arbitrary energy and not hard coded in
                                         */
                double tempdpT = 0;
                
                if (idAbs == 13)
                {
                    pT = sqrt( (a)*(a) + (b)*(b) );
                    double muphi = pythia.event[i].phi();
                    
                    for (int j = 0; j < slowJet.sizeJet(); ++j)
                    {
                        dpT = abs( pT - slowJet.pT(j) );
                        double dphi = abs( muphi - slowJet.phi(j) );
                        if (dphi > M_PI) dphi = 2. * M_PI - dphi;
                        cout << "dphi is " << dphi << endl;
                        
                        tempdpT = dpT;
                        if(tempdpT < minimum){
                            minimum = tempdpT;
                        }
                    
                        /*if (dpT==minimum) {
                        slowJet.removeJet(j);
                        }*/
                        
                        slowJet.list();
                    }
                    
                    /*cout << "muon pT = " << pT << ", px= " << a << ", py= " << b << ", pz= " << c << endl;
                    
                    cout << "minimum = " << minimum << endl;*/
                }
            }
        }//end of particle loop
        
        cout << "muon pT = " << pT << ", px= " << a << ", py= " << b << ", pz= " << c << endl;
        
        cout << "minimum = " << minimum << endl;
        
    }//end of event loop
    
    pythia.stat();
    return 0;
}
