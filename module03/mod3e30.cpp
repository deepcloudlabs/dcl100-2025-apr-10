#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    int sumLeft,sumRight;
    int i; // loop variable
    int n; // solution
    
    for (n=100;n<1000;n++){
	for (i=1,sumLeft=0;i<n;sumLeft+=i,i++);
	for (i=n+1,sumRight=0;sumRight<sumLeft;sumRight+=i,i++);
        if (sumLeft==sumRight){
	   cout << "Door number is " << n << endl ;
           break;
        }	   
    }
    return 0; 
}
