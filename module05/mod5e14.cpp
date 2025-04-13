#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    char str[80];   
    cout << "Enter a string: ";
    cin >> str;
    for (int i=0;str[i];i++)
	if ((str[i]>='A')&&(str[i]<='Z')) str[i]=str[i]-'A'+'a';    
    cout << str << endl ;
    return 0; 
}

