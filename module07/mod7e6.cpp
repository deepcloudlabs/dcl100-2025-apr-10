#include <iostream>
using namespace std;

bool isPerfect(int);

int main(int argc,char *argv[]){
   for (int n=4;n<=1000;n++)
       if (isPerfect(n))	   
	  cout << n << " is a perfect number." << endl ;
    return 0; 
}

bool isPerfect(int number){
     int sum,div;	
     for (sum=1,div=2;div<=(number/2);div++)
            if (!(number%div)) sum+= div;
     if (sum==number) 
        return true;
    return false;
}
