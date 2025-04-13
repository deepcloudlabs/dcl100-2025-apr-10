#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    int number;
    cout << "Enter a positive integer: " ;
    cin >> number ;
    for (int i=number;i>0;i/=10)
        cout << i%10  ;
    cout << endl ; 
    return 0; 
}
