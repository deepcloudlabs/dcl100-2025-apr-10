#include <iostream>
#include <ctime>
using namespace std;

int main(int argc,char *argv[]){
    int lottery[6]={0};
    bool isDrawn[50]={false} ;
    srand(time(0L));
    lottery[0]= rand()%49+1; 
    for (int i=1;i<6;i++){
	int draw;
        do{
          draw= rand()%49+1; 
	} while(isDrawn[draw]);
	isDrawn[draw]= true;
        lottery[i]=draw; 
    }
    for (int i=6;i>0;i--)
        for (int j=0;j<i;j++)
	    if (lottery[j]>lottery[j+1]){
	       int temp= lottery[j];
	       lottery[j]= lottery[j+1];
	       lottery[j+1]= temp;
	    }

    for (int i=0;i<6;i++)
        cout << lottery[i] << " " ;
    cout << endl ;	
    return 0; 
}
