#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
 int nsides	;
 cout << "Enter number of sides " ;
 cin >> nsides ;
 if (nsides<5)
    if (nsides==3)
       cout << "triangle" << endl ;
    else
       cout << "square" << endl ;
else
    if (nsides==5)
       cout << "pentagon" << endl ;
    else
       cout << "polygon" << endl ;
      return 0; 
}
