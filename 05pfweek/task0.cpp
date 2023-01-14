#include <iostream>
using namespace std;
 
 int add (int number1, int number2);
 float division (int number1, int number2);
 main(){
   int num1, num2, result, result1;
  cout << "Enter First Number: "; 
  cin >> num1;
  cout << "Enter Second Number: "; 
  cin >> num2;
   result = add(num1, num2);
   cout << "Sum is: " << result<< endl;
   result1 = division(num1, num2);
   cout << "division is : " << result1<< endl;

} 
 int add (int number1, int number2){
   int sum = number1 + number2;
     return sum;
  }
 float division (int number1, int number2){
    int divide = number1/ number2;
    return divide;
  }   

 