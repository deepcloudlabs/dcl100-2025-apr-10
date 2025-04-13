#include <iostream>
using namespace std;

int getMin(int,int,int);

int main(int argc,char *argv[]){
    int m= getMin(36,7,getMin(9,4,18));
    cout << "Minimum of {36,7,9,4,18} is " << m << endl ;
    return 0; 
}

int getMin(int a,int b,int c){
    int min= a;
    if (min>b) min=b;
    if (min>c) min=c;

    return min;
}
