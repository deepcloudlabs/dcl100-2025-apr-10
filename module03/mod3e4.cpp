#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
  int x,y ;
int m,n;
cin >> x >> y ;
m = x & 0x0F | y & 0xF0 ;
n = x & 0xF0 | y & 0x0F ;
cout << "m=" << m << ",n=" << n << endl; 
  return 0; 
}