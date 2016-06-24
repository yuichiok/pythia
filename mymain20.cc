#include <iostream>
#include <fstream>
#include <vector>
#include "Pythia8/Pythia.h"
using namespace std;
using namespace Pythia8;

int main() {
    
    const char *path = "/Users/Yuichi/root/macros/mytext20.txt";
    const char *path2 = "/Users/Yuichi/root/macros/mytext20_2.txt";
    const char *path3 = "/Users/Yuichi/root/macros/mytext20_3.txt";
    ofstream myfile (path);
    ofstream myfile2 (path2);
    ofstream myfile3 (path3);
    
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
    
    int idAbs;
    int sta;
    double pT;
    double dpT;
    //double spT;
    double px;
    double py;
    double muphi;
    double dphi;
    double dEta;
    double dR;
    //double tempno = 0;
    //int min;
    //int max = 100;
    
    Hist dRhist("dR histogram", 100, 0., 7.);
    
    
    
    
    
    
    
    
    for (int iEvent = 0; iEvent < 10000; ++iEvent)
    {
        if(!pythia.next()) continue;
        
        printf("this is %d th event",iEvent);
        
        if (iEvent < 5) {pythia.info.list(); pythia.event.list();}
        
        // Analyze Slowet jet properties. List first few.
        slowJet.analyze( pythia.event );
        
        for(int i = 0; i < pythia.event.size();++i)
        {
            
            idAbs = pythia.event[i].idAbs();
            sta = pythia.event[i].status();
            
            if(idAbs == 13)
            {
                //take first stable particle between state 0 < status < 80
                if(sta < 0)
                {
                    px = pythia.event[i].px();
                    py = pythia.event[i].py();
                }
                
                pT = sqrt(px*px + py*py);
                muphi = pythia.event[i].phi();
                
                //Jet removal
                /*for(int n = 0; n < slowJet.sizeJet(); n++)
                {
                    while(n<slowJet.sizeJet())
                    {
                    dpT = abs( pT - slowJet.pT(n) );
                    }
                    
                    //finding minimum dpT
                    min = arr[0];
                    while(j<slowJet.sizeJet())
                    {
                        if(arr[0]>arr[j]){
                            min = arr[j];
                        }
                    }
                    
                    if(arr[j] == min)
                    {
                        slowJet.removeJet(j);
                    }
                        
                }*/
                
                cout << "number of jets: " << slowJet.sizeJet() << endl;
                
                for (int k = 0; k < slowJet.sizeJet()-1; ++k)
                {
                for (int j = k+1; j < slowJet.sizeJet(); ++j)
                {
                    dpT = abs( pT - slowJet.pT(j) );
                    dphi = abs( muphi - slowJet.phi(j) );
                    dEta = pythia.event[i].y() - slowJet.y(j);
                    if (dphi > M_PI) dphi = 2. * M_PI - dphi;
                    dR = sqrt( (dEta)*(dEta) + (dphi)*(dphi) );
                    
                    dRhist.fill(dR);
                    myfile3 << setw(10) << dR;
                    myfile3 << setw(10) << dphi;
                    myfile3 << setw(10) << abs(dEta);
                    myfile3 << endl;
                    
                    
                    
                    
                    
                Vec4 p4v1, p4v2;
                p4v1=slowJet.p(k);
                p4v2=slowJet.p(j);
                double m12 =sqrt( slowJet.m(k)*slowJet.m(k) + slowJet.m(j)*slowJet.m(j) + 2*(p4v1.e()*p4v2.e() - ( p4v1.px()*p4v2.px() + p4v1.py()*p4v2.py() + p4v1.pz()*p4v2.pz() )) );
                    myfile2 << setw(6) << m12;
                myfile2 << endl;
                
                }
                }
                
            }//end of idAbs
            
            
        }//end of event.size()
        
        myfile << setw(10) << px;
        myfile << setw(10) << py;
        myfile << setw(10) << pT;
        myfile << endl;
        
        cout << "muon pT = " << pT << ", px= " << px << ", py= " << py << endl;
        
        slowJet.list();
        
    }//end of iEvent
    

    
    pythia.stat();
    cout << dRhist;
    return 0;
}
