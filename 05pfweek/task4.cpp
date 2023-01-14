#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

bool  ifEvenish (int number);
 main(){
   int number, result;
  cout << "Enter Three Digit Number: ";
  cin >> number;
   result = ifEvenish(number);
    if (result == true ){
      cout << "This is Even Number ";
  }
 if (result == false ){
      cout << "This is odd Number ";
  }
}
bool ifEvenish (int number){

     int mod1 = number%10;
     number = number/10;
     int mod2 = number%10;
     number = number/10;
     int mod3 = number%10;
     number = number/10;
     int sum = mod1 + mod2 + mod3;
     if (sum % 2 == 0){
 return true;
     }
     if (sum % 2 != 0){
 return false;    
   } 
   
}   