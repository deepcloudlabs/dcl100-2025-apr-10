#include <iostream>
#include <ctime>
using namespace std;

int main(int argc,char *argv[]){
    int cells[20]={0};
    srand(time(0L));
    for (int i=0;i<20;i++)
	cells[i]= rand() % 20 ;
    int current= 0, next;
    do {
       cout << "I am at the cell " << current << endl;
       next= cells[current];
       cells[current]= -1;
       current= next;
    } while (next!=-1);
    return 0; 
}

