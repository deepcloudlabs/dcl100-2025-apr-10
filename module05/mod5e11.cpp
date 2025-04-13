#include <iostream>
using namespace std;

const int MAX= 256;

int main(int argc,char *argv[]){
    char palindrome[MAX];
    cout << "Enter a string: " ;
    cin >> palindrome;
    int length,i,j;
    for (length=0;palindrome[length];length++); 
    for (i=0,j=length-1;i<=j;i++,j--)
        if (palindrome[i]!=palindrome[j]) break;
    if (i>j)
       cout << palindrome << " is a palindrome" << endl ;
    else
       cout << palindrome << " is NOT a palindrome" << endl ;
    return 0; 
}

