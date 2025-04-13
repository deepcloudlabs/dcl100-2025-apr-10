#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
    int num1, num2;
   cout << "Enter two integers, and I will tell you" << endl ;
   cout << "the relationships they satisfy: ";
   cin >> num1 >> num2;   
   if (num1 == num2) 
      cout << num1 << " is equal to " << num2 << endl ;
   if (num1 != num2) 
      cout << num1 << " is NOT equal to " << num2 << endl ;   
   if (num1 < num2) 
      cout << num1 << " is less than " << num2 << endl ;
   if (num1 > num2) 
     cout << num1 << " is greater than " << num2 << endl ;
   if (num1 <= num2) 
      cout << num1 << " is less than or equal to " << num2 << endl ;
   if (num1 >= num2) 
      cout << num1 << " is greater than or equal to " << num2 << endl ;
  return 0; 
}
