#include <iostream>
#include <fstream>
#include "Pythia8/Pythia.h"
using namespace std;
using namespace Pythia8;

int main() {
    
/*    const char *patha = "/Users/Yuichi/root/macros/mytext11a.txt";
    const char *pathb = "/Users/Yuichi/root/macros/mytext11b.txt";
    const char *pathc = "/Users/Yuichi/root/macros/mytext11c.txt";*/
    ofstream myfile1 ("mytext12dpT150.txt");
    ofstream myfile2 ("mytext12dphi150.txt");
    ofstream myfile3 ("mytext12dR150.txt");
    ofstream myfile4 ("mytext12mHiggs150.txt");

    int nListJets = 5;
    
  // Generator. Process selection. LHC initialization.
  Pythia pythia;
  pythia.readString("Beams:eCM = 8000.");
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
    
    Hist dpThist("dpT histogram", 100, 0., 100.);
    Hist dphihist("dphi histogram", 100, 0., M_PI);
    Hist dRhist("dR histogram", 100, 0., 7.);
    Hist mHiggs("Mass higgs histogram", 100, 0., 300.);
    
    for (int iEvent = 0; iEvent < 1000; ++iEvent)
    {
        if(!pythia.next()) continue;
        
        // Analyze Slowet jet properties. List first few.
        slowJet. analyze( pythia.event );
        if (iEvent < nListJets) slowJet.list();
        
        int nParticle = 0;
        int sParticle = 0;
        
        for (int i = 0; i < pythia.event.size(); ++i)
        {
            if (pythia.event[i].isFinal())
            {
                ++sParticle;
            }
        }
        
        cout << "Event " << iEvent << ", Stable Particles " << sParticle << endl;
        
        for (int i = 0; i < pythia.event.size(); ++i)
        {
            if (pythia.event[i].isFinal())
            {
                ++nParticle;
                
                int idAbs = pythia.event[i].idAbs();
                double a = pythia.event[i].px();
                double b = pythia.event[i].py();
                double c = pythia.event[i].pz();
                double minimum = 8000; /*
                                        *change this to access the Center of Mass Energy so the script works
                                        *for some arbitrary energy and not hard coded in
                                        */
                double tempdpT = 0;
                if (idAbs == 13)
                {
                    double pT = sqrt( (a)*(a) + (b)*(b) );
                    double muphi = pythia.event[i].phi();
                    
                    for (int k = 0; k < slowJet.sizeJet()-1; ++k)
                    {
                    for (int j = k+1; j < slowJet.sizeJet(); ++j)
                    {
                        double dpT = abs( pT - slowJet.pT(j) );
                        double dphi = abs( muphi - slowJet.phi(j) );
                        double dEta = pythia.event[i].y() - slowJet.y(j);
                        if (dphi > M_PI) dphi = 2. * M_PI - dphi;
                        double dR = sqrt( (dEta)*(dEta) + (dphi)*(dphi) );
                        
                        cout << "dphi is " << dphi << endl;
                        
                        dphihist.fill(dphi);
                        dpThist.fill(dpT);
                        dRhist.fill(dR);
                        
                        myfile1 << dpT << endl;
                        myfile2 << dphi << endl;
                        myfile3 << dR << endl;
                        
                        tempdpT = dpT;
                        if(tempdpT < minimum){
                            minimum = tempdpT;
                        }
                        
                        if (dpT==minimum) {
                            slowJet.removeJet(j);
                            slowJet.list();
                            Vec4 p4v1, p4v2;
                            p4v1=slowJet.p(k);
                            p4v2=slowJet.p(j);
                            //double m12=0;
                            //double ppx = p4v1.px();
                            double m12 =sqrt( slowJet.m(k)*slowJet.m(k) + slowJet.m(j)*slowJet.m(j) + 2*(p4v1.e()*p4v2.e() - ( p4v1.px()*p4v2.px() + p4v1.py()*p4v2.py() + p4v1.pz()*p4v2.pz() )) );
                            mHiggs.fill(m12);
                            myfile4 << m12 << endl;
                        }
                        
                        
                    }
                    }
                    
                    cout << "muon pT = " << pT << ", px= " << a << ", py= " << b << ", pz= " << c << endl;
                    
                    cout << "minimum = " << minimum << endl;
                }
            }
        }
    }
    
    pythia.stat();
    cout << dpThist << dphihist << dRhist << mHiggs;
    return 0;
}
