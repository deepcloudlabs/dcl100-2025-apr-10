#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
     int array[10]={1,1} ;
    for (int i=2;i<10;i++)
          array[i]=array[i-1]+array[i-2];   
     for (int i=0;i<00;i++)
   cout << "array [" << i << "]=" << array[i] << endl ;
    return 0; 
}

