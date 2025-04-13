#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
  int x ;
  cout << "Enter an integer: ";
  cin >> x ;
 if ((!(x%5)&&(x%7)))
     cout << x << " is multiple of 5." << endl ;
  else 
 if ((!(x%7)&&(x%5)))
     cout << x << " is multiple of 7." << endl ;
  return 0; 
}