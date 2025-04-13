#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    int number,div,sum;
    for (number=4;number<=1000;number++){
	for (sum=1,div=2;div<=(number/2);div++)
            if (!(number%div)) sum+= div;
        if (sum==number) 
           cout << number << " is a perfect number" << endl  ;
    }
    cout << endl ; 
    return 0; 
}
