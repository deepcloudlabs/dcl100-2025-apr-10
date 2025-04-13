#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    int array[]={10,20,-10,30,-20,50,5,-100,35};
    int size= sizeof(array)/sizeof(int);
    int min=array[0],max=array[0];
    for (int i=1;i<size;i++){
        if (min>array[i])
	   min= array[i];
        if (max<array[i])
	   max= array[i];
    } 
    cout << "Maximum is " << max  
	 << " and minimum is " << min << endl ;
    return 0; 
}

