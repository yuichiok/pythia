#include <iostream>
#include <fstream>
#include <vector>
#include "Pythia8/Pythia.h"
using namespace std;
using namespace Pythia8;

int main() {
    
    const char *path = "/Users/Yuichi/root/macros/mytext22a.txt";
    const char *path2 = "/Users/Yuichi/root/macros/mytext22b.txt";
    ofstream myfile (path);
    ofstream myfile2(path2);
    
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
    
    //Variables
    
    int i;
    int j;
    
    // Begin event loop. Generate event. Skip if error. List first one.
    for (int iEvent = 0; iEvent < 6; ++iEvent)      //begin event loop
    {
        if(!pythia.next()) continue;
        
        cout << "Event" << iEvent << endl;
        
        if (iEvent < 5) {pythia.info.list(); pythia.event.list();}
        
        slowJet.analyze( pythia.event );        //analyze jet before particle loop
        
        int sParticle = 0;      //initialize stable particle counting
        
        for (i = 0; i < pythia.event.size(); ++i)       //begin particle loop
        {
            if (pythia.event[i].isFinal())      //list final state (stable) particle.
            {
                ++sParticle;     //number of stable particle
                
                myfile << setw(15) << sParticle;                    //particle number only with stable particle
                myfile << setw(15) << i;                            //particle number including unstable particle
                myfile << setw(15) << pythia.event[i].id();         //particle id
                myfile << setw(15) << pythia.event[i].mother1();
                myfile << setw(15) << pythia.event[i].mother2();
                myfile << setw(15) << pythia.event[i].daughter1();
                myfile << setw(15) << pythia.event[i].daughter2();
                myfile << setw(15) << pythia.event[i].px();
                myfile << setw(15) << pythia.event[i].py();
                myfile << setw(15) << pythia.event[i].pz();
                myfile << endl;
                
            }//end of isFinal
        
        }//end of event.size
        
        slowJet.list();
        
        cout << "show jet assignment: " << slowJet.jetAssignment(13) << endl;
        
        for(j = 0;j < slowJet.sizeJet() ;++j){
            
            //get list the indices of the particles that have been clustered into the j'th jet
            vector<int> myvec = slowJet.constituents(j);
            
            printf("Jet%d has constituents:",j);
            
            for (unsigned n=0; n < myvec.size(); n++){
                cout << " " << myvec.at(n);
            }
            cout << endl;
            
            //output .txt about info of Jets
            myfile2 << setw(10) << j;       //number of jets in iEvent
            myfile2 << setw(10) << slowJet.pT(j);
            myfile2 << setw(10) << slowJet.phi(j);
            myfile2 << setw(10) << slowJet.y(j);
            myfile2 << endl;
            
        }//end of slowJet
        
    }//end of iEvent
    

    
    pythia.stat();
    return 0;
}
