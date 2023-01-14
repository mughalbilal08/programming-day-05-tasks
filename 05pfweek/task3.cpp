#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

bool isSymetrical(int number);
 main(){
   int number, result;
  cout << "Enter Three Digit Number: ";
  cin >> number;
  result = isSymetrical(number);
    if (result == true){
     cout << "Its a symmetrical number ";
        } 
    if (result == false){
     cout << "Its a not symmetrical number ";
        } 
 
}
  bool isSymetrical(int number){
    
        int  mod1 = number % 10;
         number = number/10;
        int mod2 = number % 10;
        number = number/10;
        int mod3 = number % 10;
        number = number/10;
    if (mod1 == mod3){
    return true;
      }
	 if (mod1 != mod3){
    return false;
      }
}
    

