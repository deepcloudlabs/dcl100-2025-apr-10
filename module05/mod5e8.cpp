#include <iostream>
#include <ctime>
using namespace std;

int main(int argc,char *argv[]){
    int lottery[6]={0};
    srand(time(0L));
    lottery[0]= rand()%49+1; 
    for (int i=1;i<6;i++){
	bool isDrawnBefore;
        do{
          lottery[i]= rand()%49+1; 
	  isDrawnBefore= false;
	  for (int k=0;k<i;k++)
	      if (lottery[i]==lottery[k]){
	         isDrawnBefore= true;
		 break;
	      }	   
	} while(isDrawnBefore);
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
