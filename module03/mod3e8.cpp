#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
  int x ;
  cout << "Enter an integer: ";
  cin >> x ;
 if (x&1)
     cout << x << " is odd." << endl ;
  else 
      cout << x << " is even." << endl ;
  return 0; 
}