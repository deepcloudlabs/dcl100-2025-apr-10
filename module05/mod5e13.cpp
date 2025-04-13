#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    for (int i=0,k=0;i<64;cout << endl, i++)
        for (int j=0;j<4;cout << k << "-" << char(k) << "\t", j++,k++);
    return 0; 
}

