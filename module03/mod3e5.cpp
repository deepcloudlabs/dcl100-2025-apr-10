#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
  int x=53,y=47 ;
  cout << "Initially, x holds " << x << " and y holds " << y << endl ;
  x= x^y ; 
  y= x^y ; 
  x= x^y ; 
  cout << "Some magic...then, x holds " << x << " and y holds " << y << endl ;
  return 0; 
}