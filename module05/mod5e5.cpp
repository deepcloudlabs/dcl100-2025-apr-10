#include <iostream>
#include <ctime>
using namespace std;

int main(int argc,char *argv[]){
    int set[]={-7,3,1,9,13,27};
    srand(time(0L)) ;
    int randomIndex= rand()%6;
    cout << "random number: " << set[randomIndex] << endl ; 
    return 0; 
}

