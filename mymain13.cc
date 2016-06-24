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
    
    //Decleration of momentum variables
/*    double px1 = 0.0;
    double py1 = 0.0;
    double pz1 = 0.0;
    double e1 = 0.0;
    
    double px2 = 0.0;
    double py2 = 0.0;
    double pz2 = 0.0;
    double e2 = 0.0;
    
    vector<double> hpx;
    vector<double> hpy;
    vector<double> hpz;
    vector<double> hen;
*/
    
    
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
    Hist higgsm("higgs invariant mass2", 100, 0., 300.);

    
    vector<int> mom1;
    vector<int> mom2;
  
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
            if (pythia.event[i].id() == 5)
            {
                mom1.clear();
                mom1 = pythia.event[i].motherList();
                for (int m = 0 ; m < int(mom1.size()) ; m++)
                {
                if( pythia.event[ mom1[m] ].id() == 25 )
                {
                    ib = i;
                    isb = true;
                    break;
                }
                }
            }
            if (pythia.event[i].id() == -5)
            {
                mom2.clear();
                mom2 = pythia.event[i].motherList();
                for (int m = 0 ; m < int(mom2.size()) ; m++)
                {
                    if( pythia.event[ mom2[m] ].id() == 25 )
                    {
                        ibbar = i;
                        isbbar = true;
                        break;
                    }
                }
            }
            
/*            int idp = pythia.event[i].id();
            int mother = pythia.event[i].mother1();
            
            if (idp==5 && mother==25)
            {
                cout<<"id b = "<< idp <<endl;
                
                 px1 = pythia.event[i].px();
                 py1 = pythia.event[i].py();
                 pz1 = pythia.event[i].pz();
                 e1  = pythia.event[i].e();
                
                cout << px1 << endl;
                
                
                cout<<"b -> PX,PY,PZ,EN = "<<px1<<", "<<py1<<", "<<pz1<<", "<<e1<<endl;
            }//end if idp==5
            
            if (idp==-5 && mother==25)
            {
                cout<<"id bbar = "<< idp <<endl;
                
                 px2 = pythia.event[i].px();
                 py2 = pythia.event[i].py();
                 pz2 = pythia.event[i].pz();
                 e2  = pythia.event[i].e();
                
                cout<<"bbar -> PX,PY,PZ,EN = "<<px2<<", "<<py2<<", "<<pz2<<", "<<e2<<endl;
            }//end if idp==-5
            

        
*/        }//end particle loop

/*        hpx.push_back((px1+px2)*(px1+px2));
        hpy.push_back((py1+py2)*(py1+py2));
        hpz.push_back((pz1+pz2)*(pz1+pz2));
        hen.push_back((e1+e2)*(e1+e2));
*/
        
        if(isb && isbbar)
        {
             vector<int> bmass;
             
             bmass.push_back(pythia.event[ib].px());
             
             cout << "myvector contains:";
             for (unsigned i=0; i<bmass.size(); i++)
             cout << ' ' << bmass.at(i);
             cout << '\n';
             
            
            int invm = sqrt((pythia.event[ib].m())*(pythia.event[ib].m()) + (pythia.event[ibbar].m())*(pythia.event[ibbar].m()) + 2*((pythia.event[ib].e())*(pythia.event[ibbar].m()) - (pythia.event[ib].px())*(pythia.event[ibbar].px()) - (pythia.event[ib].py())*(pythia.event[ibbar].py()) - (pythia.event[ib].pz())*(pythia.event[ibbar].pz())));
            
            cout << "invariant mass is, " << invm << endl;
            
            hm.fill( sqrt((pythia.event[ib].m())*(pythia.event[ib].m()) + (pythia.event[ibbar].m())*(pythia.event[ibbar].m()) + 2*((pythia.event[ib].e())*(pythia.event[ibbar].m()) - (pythia.event[ib].px())*(pythia.event[ibbar].px()) - (pythia.event[ib].py())*(pythia.event[ibbar].py()) - (pythia.event[ib].pz())*(pythia.event[ibbar].pz()))) );
            
            //higgsm.fill( pythia.event[iH].m() );
        }
        
        
        
    }// End of event loop. Statistics. Histogram. Done.
    
    

    
    
    
    
    
    //vector<double> hmass;
    
    //int n = hpx.size();
    
/*    for(int i = 0; i < 100; i++){
        
    hmass.push_back(sqrt(hen.at(i) - hpx.at(i) - hpy.at(i) - hpz.at(i)) );
    
    hm.fill(hmass.at(i));
    }
*/
    cout << hm << higgsm;
    pythia.stat();
    return 0;
}
