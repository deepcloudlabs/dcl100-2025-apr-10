#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
     double a11,a12; // coefficients
     double a21,a22; // coefficients
     double det; // solution
     cout << "Please enter a11 and a12 : " ;
     cin >> a11 >> a12 ;
     cout << "Please enter a21 and a22 : " ;
     cin >> a21 >> a22 ;
     det = a11 * a22 - a12 * a21 ;
     cout << "x= " << x << endl ;
     return 0; 
}
