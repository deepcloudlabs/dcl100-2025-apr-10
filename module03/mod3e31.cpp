#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    int sumOfDigits,sumOfDivisors,sum,k;
    
    for (int n=2;n<1000;n++){
	sumOfDigits=0;
        for (int i=n;i>0;sumOfDigits+=i%10,i/=10);
	sumOfDivisors=0; 
	k=n;
        for (int div=2;div<=(n/2);div++){
	    while ((k%div)==0){
	       sum=0;
               for (int i=div;i>0;sum+=i%10,i/=10);
	       sumOfDivisors+= sum;
	       k /= div ;
	    }   
	}
        if (sumOfDivisors==sumOfDigits)
	   cout << n << " is a Smith number." << endl ;
    }
    return 0; 
}
