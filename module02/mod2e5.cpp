#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
     int number;
     cout << "Please enter a decimal number : " ;
     cin >> number ;
     cout << dec << number << "= 0x" << hex << number << endl ;
     cout << dec << number << "= 0" << oct << number << endl ;
     return 0; 
}
