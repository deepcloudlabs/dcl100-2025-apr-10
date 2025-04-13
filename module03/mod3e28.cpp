#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    int i,j;
    int min=5,max=5;
    for (i=1;i<=5;i++,min--,max++){
        cout << endl ; 
        for (j=1;j<min;j++)
            cout << " " ;
        for (j=min;j<=max;j++)
            cout << "*" ;
    }
    cout << endl ; 
    return 0; 
}
