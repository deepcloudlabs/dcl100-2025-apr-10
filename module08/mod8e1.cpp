#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    int count=0, *temp, sum=0;
    temp=&count ;
    *temp=20;
    temp=&sum;
    *temp= count;
    cout << count << "," << *temp << "," << sum ;

    return 0; 
}
