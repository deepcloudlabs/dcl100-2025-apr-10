#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    int array[]={12,15,7,3,-1,-3,-7,-2,3,4,-2,-10};
    int size= sizeof(array)/sizeof(int);
    for (int i=0;i<size-1;i++)
        if ((array[i]*array[i+1])<0)
	   cout << "Zero crossing at array[" 
		<< i << "]\n" ;
    return 0; 
}

