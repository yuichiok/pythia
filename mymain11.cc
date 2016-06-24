#include <iostream>
#include <fstream>
#include "Pythia8/Pythia.h"
using namespace std;
using namespace Pythia8;

int main() {
    
    const char *patha = "/Users/Yuichi/root/macros/mytext11a.txt";
    const char *pathb = "/Users/Yuichi/root/macros/mytext11b.txt";
    const char *pathc = "/Users/Yuichi/root/macros/mytext11c.txt";
    ofstream myfile (patha);
    ofstream myfile2 (pathb);
    ofstream myfile3 (pathc);
    
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
    
    Hist eGamma("Energy spectrum of photons", 100, 0., 10.);
    Hist eRest("Energy spectrum of stable particle", 100, 0., 10.);
    
    for (int iEvent = 0; iEvent < 15; ++iEvent)
    {
        if(!pythia.next()) continue;
        
        // Analyze Slowet jet properties. List first few.
        slowJet. analyze( pythia.event );
        if (iEvent < nListJets) slowJet.list();
        
        // Fill SlowJet distance between jets.
        for (int i = 0; i < slowJet.sizeJet() - 1; ++i)
            for (int j = i +1; j < slowJet.sizeJet(); ++j)
            {
                double dEta = slowJet.y(i) - slowJet.y(j);
                double dPhi = abs( slowJet.phi(i) - slowJet.phi(j) );
                if (dPhi > M_PI) dPhi = 2. * M_PI - dPhi;
                double dR = sqrt( (dEta)*(dEta) + (dPhi)*(dPhi) );
                myfile3 << dR << endl;
            }
        
        int nParticle = 0;
        int uParticle = 0;
        
        for (int i = 0; i < pythia.event.size(); ++i)
        {
            if (pythia.event[i].isFinal())
            {
                ++uParticle;
            }
            
        }
        
        cout << "Event " << iEvent << ", Stable Particles " << uParticle << endl;
        cout << "   List#       i        id        M1        M2        D1        D2        px        py        pz" << endl;
        
        for (int i = 0; i < pythia.event.size(); ++i)
        {
            if (pythia.event[i].isFinal())
            {
                ++nParticle;
                
                int idAbs = pythia.event[i].idAbs();
                double eI = pythia.event[i].e();
                double x = pythia.event[i].px();
                double y = pythia.event[i].py();
                double z = pythia.event[i].pz();
                
                if (idAbs == 13)
                {
                    double pT = sqrt( (x)*(x) + (y)*(y) );
                    cout << "muon pT = " << pT << endl;
                }
                
                cout << setw(6) << nParticle;
                cout << setw(10) << i;
                cout << setw(10) << pythia.event[i].id();
                cout << setw(10) << pythia.event[i].mother1();
                cout << setw(10) << pythia.event[i].mother2();
                cout << setw(10) << pythia.event[i].daughter1();
                cout << setw(10) << pythia.event[i].daughter2();
                cout << setw(10) << x;
                cout << setw(10) << y;
                cout << setw(10) << z;
                cout<< endl;
                
                if (idAbs == 22)
                {
                    eGamma.fill(eI);
                    myfile << eI << endl;
                }
                else
                {
                    eRest.fill(eI);
                    myfile2 << eI << endl;
                }
            }
        }
    }
    
    pythia.stat();
    cout << eGamma << eRest;
    return 0;
}
