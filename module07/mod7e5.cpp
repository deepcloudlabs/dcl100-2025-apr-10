#include <iostream>
using namespace std;

int reverse(int);

int main(int argc,char *argv[]){
    cout << reverse(12345) << endl ;
    return 0; 
}

int reverse(int number){
    int retVal=0;
    for (int i=number;i;i/=10)
	retVal = 10 * retVal + (i%10);
    return retVal;
}
