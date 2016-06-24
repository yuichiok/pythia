#include <iostream>
#include <fstream>
#include <vector>
#include "Pythia8/Pythia.h"
using namespace std;
using namespace Pythia8;

double invariant(double,double,double,double,double,double,double,double,double,double);

int main() {
    const char *path = "/Users/Yuichi/root/macros/mytext24.txt";
    const char *pathb = "/Users/Yuichi/root/macros/mytext24b.txt";
    ofstream myfile(path);
    ofstream myfileb(pathb);
    
  // Generator. Process selection. LHC initialization.
  Pythia pythia;
  pythia.readString("Beams:eCM = 13000.");
  pythia.readString("HiggsSM:ffbar2HZ = on");
  pythia.readString("25:onMode = off");
  pythia.readString("25:onIfMatch = 5 -5");
  pythia.readString("23:onMode = off");
  pythia.readString("23:onIfMatch = 13 -13");
  pythia.readString("PhaseSpace:pTHatMin = 50.");
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
    
    //Histogram
    
    
    //Variables
    
    int id;
    int mom1,mom2;
    int mom1id,mom2id;
    double hm;
    double zm;
    double invm;
    double dpT,dphi,deta,dR;
    double px1,py1,pz1,e1,m1;
    double px2,py2,pz2,e2,m2;
    double px3,py3,pz3,e3,m3;
    double px4,py4,pz4,e4,m4;
    Vec4 jet1,jet2;
    
    // Begin event loop. Generate event. Skip if error. List first one.
    for (int iEvent = 0; iEvent < 1000; ++iEvent)
    {
        int foo=0;
        
        if(!pythia.next()) continue;
        
        cout << "This is " << iEvent << " th event" << string(114,'=') << endl;
        
        //if (iEvent < 5) {pythia.info.list(); pythia.event.list();}    //print particle lists
        
        // Analyze Slowet jet properties. List first few.
        slowJet.analyze( pythia.event );
        
        //defining jet size before removal
        int jetsize = slowJet.sizeJet();
        
        //Particle loop =========================================================
        for(int i = 0; i < pythia.event.size();++i)
        {
            //declear id, mom1, mom2, mom1id, mom2id
            id = pythia.event[i].id();
            mom1 = pythia.event[i].mother1();
            mom2 = pythia.event[i].mother2();
            mom1id = pythia.event[mom1].id();
            mom2id = pythia.event[mom2].id();
            
            //defining px1,px2,... for b and bbar
            if(id == 5 && (mom1id == 25 || mom2id == 25))
            {
                px1 = pythia.event[i].px();
                py1 = pythia.event[i].py();
                pz1 = pythia.event[i].pz();
                e1 = pythia.event[i].e();
                m1 = pythia.event[i].m();
            }
            
            if(id == -5 && (mom1id == 25 || mom2id == 25))
            {
                px2 = pythia.event[i].px();
                py2 = pythia.event[i].py();
                pz2 = pythia.event[i].pz();
                e2 = pythia.event[i].e();
                m2 = pythia.event[i].m();
            }
            
            //defining px3,px4,... for muon
            if(id == 13)
            {
                px3 = pythia.event[i].px();
                py3 = pythia.event[i].py();
                pz3 = pythia.event[i].pz();
                e3 = pythia.event[i].e();
                m3 = pythia.event[i].m();
            }
            
            if(id == -13)
            {
                px4 = pythia.event[i].px();
                py4 = pythia.event[i].py();
                pz4 = pythia.event[i].pz();
                e4 = pythia.event[i].e();
                m4 = pythia.event[i].m();
            }
            
        }//end of particle loop
        //=======================================================================
        
        //slowJet.list();     //Initial jet list
        
        //Remove jet by discarding jet with < 10 multiplicity
        for(int j=0;j < jetsize;++j)
        {
            //removal of jet
            if(slowJet.multiplicity(foo) < 10)
            {
                slowJet.removeJet(foo);--foo;
            }
            
            //counting number of times program went through
            ++foo;
            
       }
        
        slowJet.list();     //Final jet list
        
        //Calculation involving dijets
        if(slowJet.sizeJet() > 1)
        {
            //selecting two different jets
            for(int n = 0; n < slowJet.sizeJet()-1; ++n)
            {
                for(int l = n+1; l < slowJet.sizeJet(); ++l)
                {
                    //dpT,dphi,deta,dR calculation
                    {
                        dpT = abs( slowJet.pT(n) - slowJet.pT(l) );
                        dphi = abs( slowJet.phi(n) - slowJet.phi(l) );
                        deta = slowJet.y(n) - slowJet.y(l);
                        
                        if (dphi > M_PI) dphi = 2. * M_PI - dphi;
                        dR = sqrt( (deta)*(deta) + (dphi)*(dphi) );
                        
                        myfileb << setw(10) << dpT;
                        myfileb << setw(10) << dphi;
                        myfileb << setw(10) << deta;
                        myfileb << setw(10) << dR;
                    }
                    //Higgs invariant mass
                    {
                        jet1 = slowJet.p(n);
                        jet2 = slowJet.p(l);
                        
                        invm = invariant(slowJet.m(n),slowJet.m(l),jet1.e(),jet2.e(),jet1.px(),jet2.px(),jet1.py(),jet2.py(),jet1.pz(),jet2.pz());
                        
                        myfileb << setw(10) << invm;
                        myfileb << endl;
                    }
                }
            }
        }
        
        //Calling function for Higgs/Z0 mass
        {
            hm = invariant(m1,m2,e1,e2,px1,px2,py1,py2,pz1,pz2);
            zm = invariant(m3,m4,e3,e4,px3,px4,py3,py4,pz3,pz4);
            
            cout << "px of -mu is " << px3 << " and px of +mu is " << px4 << endl;
            cout << "higgs mass from b bbar: " << hm << endl;
            cout << "z mass from mu mubar: " << zm << endl;
            
            myfile << setw(10) << hm;
            myfile << setw(10) << zm;
            myfile << endl;
        }
        
        cout << endl;
    }//end of iEvent
    
    pythia.stat();
    return 0;
}

//function for calculation of invariant mass
double invariant(double m1,double m2,double e1,double e2,double px1,double px2,double py1,double py2,double pz1,double pz2){
    
    double a;
    
    a = sqrt(m1*m1 + m2*m2 + 2*(e1*e2 - px1*px2 - py1*py2 - pz1*pz2));
    
    return a;
}








