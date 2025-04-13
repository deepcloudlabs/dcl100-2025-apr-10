#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    char str[80];   
    cout << "Enter a string: ";
    cin >> str;
    int i=0,j;
    while (str[i]){
	if ((str[i]<'0')||(str[i]>'9')){
           for (j=i;str[j];str[j]=str[j+1],j++);
	   str[j-1]='\0';
	}
        else i++;	
    }
    cout << str << endl ;
    return 0; 
}
