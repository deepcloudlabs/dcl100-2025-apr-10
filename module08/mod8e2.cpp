#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    double f[]= {0.,1.,2.,3.};
    double *fp[]={f+3,f+2,f+1,f};
    double **fpp= fp+3;
    cout << *f << "," << **fp << "," << **fpp << endl ;
    cout << *fp-f << "," << fpp-fp << "," << *fpp-f << endl ;
    cout << **fpp-- << endl ;
    cout << **(--fpp-1) << endl ;
    cout << **fpp++ << endl ;
    cout << *fp-f << "," << fpp-fp << "," << *fpp-f << endl ;

    return 0; 
}
