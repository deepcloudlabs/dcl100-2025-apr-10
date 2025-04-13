#include <iostream>
using namespace std;

int getMin(int[],int);

int main(int argc,char *argv[]){
    int array[]={8,9,3,7,11,2,23,5,49,35,14,41,1};
    int length= sizeof(array)/sizeof(int);    
    int min= getMin(array,length);
    cout << "Minimum is " << min << endl ;
    return 0; 
}

int getMin(int array[],int length){
    int min= array[0];
    for (int i=1;i<length;i++)
	if (min>array[i])
	   min= array[i];
    return min;
}
