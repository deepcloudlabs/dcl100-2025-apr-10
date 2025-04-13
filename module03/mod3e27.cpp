#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    int number;
    cout << "Enter a positive integer: " ;
    cin >> number ;
    int i=number;
    while (i>0){
        cout << i%10  ;
	i/=10;
    }
    cout << endl ; 
    return 0; 
}
