#include <iostream>
using namespace std;

int main(){
    unsigned long long int ulli=0xFFFFFFFFFFFFFFFF ;
    long long int lli=0x7FFFFFFFFFFFFFFF ;

    cout << "unsigned long long int is " << sizeof(unsigned long long int) << "-byte." << endl ;
    cout << "long long int is " << sizeof(long long int) << "-byte." << endl ;
    cout << "Max of unsigned long long int is " << ulli << endl ;
    cout << "Min of unsigned long long int is " << (ulli+1) << endl ;
    cout << "Max of long long int is " << lli << endl ;
    cout << "Min of long long int is " << (lli+1) << endl ;
    return 0;
}
