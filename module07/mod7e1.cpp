#include <iostream>
using namespace std;

int getSqrSum(int,int);

int main(int argc,char *argv[]){
    int sum=1;
    for (int i=2;i<100;i+=2)
       sum += getSqrSum(i,i+1);
    cout << "1^2+2^2+...+99^2=" << sum << endl ;
    return 0; 
}

int getSqrSum(int a,int b){
    return (a*a+b*b);
}
