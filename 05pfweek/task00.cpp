#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
 
 int add (int number1, int number2);

 main(){
   int num1, num2, result;
   system ("cls");  
  cout << "Enter First Number: "; 
  cin >> num1;
  cout << "Enter Second Number: "; 
  cin >> num2;
   result = max(num1, num2);
   cout << "greater is: " << result<< endl;
 }
   int add(int number1, int number2){
     int sum = number1+number2;
     return sum;
   } 
