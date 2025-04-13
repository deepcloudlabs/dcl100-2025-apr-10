#include <iostream>
using namespace std;

int getMin(int,int,int);

int main(int argc,char *argv[]){
    int array[]={8,9,3,7,11,2,23,5,49,35,14,41,1};
    int length= sizeof(array)/sizeof(int);    
    int min= getMin(array[0],array[1],array[2]);
    int last= length - (length-3)%2 ;
    for (int i=3;i<last;i+=2)
	min= getMin(min,array[i],array[i+1]);
    if (last<length)
	min= getMin(min,min,array[length-1]);
    cout << "Minimum is " << min << endl ;
    return 0; 
}

int getMin(int a,int b,int c){
    int min= a;
    if (min>b) min=b;
    if (min>c) min=c;

    return min;
}
