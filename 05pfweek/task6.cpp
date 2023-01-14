#include <iostream>
using namespace std;
 
main(){
     
int number, number1, number2;
  string ten, unit;
cout << "Enter a two digit number :";
cin >> number;
  number1%10;
  number1/10;
  number2%10;
  number2/10; 
if (number1 == 0){
  ten= " ";
  }
if (number1 == 2){
  ten= " twenty ";
  }
if (number1 == 3){
  ten= " thirty ";
  }
if (number1 == 4){
  ten= " fourty ";
  }
if (number1 == 5){
  ten= " fifty ";
  }
if (number1 == 6){
  ten= " sixty ";
  }
if (number1 == 7){
  ten= " seventy ";
  }
if (number1 == 8){
  ten= " eighty ";
  }
if (number1 == 9){
  ten= " ninety ";
  }
if (number2 ==0){
  unit = " ";
  }
if (number2 == 2){
  unit = " two ";
  }
if (number2 == 3){
  unit = " three ";
  }
if (number2 == 4){
  unit = " four ";
  }
if (number2 == 5){
  unit = " five ";
  }
if (number2 == 6){
  unit = " six";
  }
if (number2 == 7){
  unit = "seven ";
  }
if (number2 == 8){
  unit = "eight ";
  }
if (number2 == 9){
  unit = " nine";
  }
   cout << ten << " " <<unit ;
} 