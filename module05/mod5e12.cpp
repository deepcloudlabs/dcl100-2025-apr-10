#include <iostream>
using namespace std;


int main(int argc,char *argv[]){
    int Matrix[4][5]={
	                 {2,6,1,7,9},
	                 {7,3,8,3,6},
	                 {5,1,4,2,3},
	                 {5,2,7,3,1}
                     };
    int Max[4] ;
    
    cout << "Matrix" << endl ;
    for (int row=0;row<4;row++){
	Max[row]= Matrix[row][0];
        for (int col=1;col<5;col++)
            if (Max[row]<Matrix[row][col]) 
	       Max[row]= Matrix[row][col];
    }

    for (int row=0;row<4;row++){
        for (int col=0;col<5;col++)
            cout << Matrix[row][col] << " " ;
        cout << endl ;
    }
    cout << "Max" << endl ;
    for (int row=0;row<4;row++)
        cout << Max[row] << endl;

    return 0; 
}

