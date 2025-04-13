#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
  int x ;
  cout << "Enter an integer: ";
  cin >> x ;
  if ((x%2)==0)
     cout << x << " is even." << endl ;
  else 
      cout << x << " is odd." << endl ;
  return 0; 
}