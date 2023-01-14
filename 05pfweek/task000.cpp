#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
 

 main(){
 float num1, num2, result;
   system ("cls");  
  cout << "Enter First Number: "; 
  cin >> num1;
  cout << "Enter Second Number: "; 
  cin >> num2;
   result = max(num1, num2);
   cout << "Greater is: " << result<< endl;
   result = pow(num1, num2);
   cout << "product is: " << result<< endl;
   result = cbrt(num1);
   cout << "Cube root is: " << result<< endl;
   result = ceil(num1);
   cout << "Ceil is is: " << result<< endl;
   result = floor(num1);
   cout << "floor is: " << result<< endl;
 }
