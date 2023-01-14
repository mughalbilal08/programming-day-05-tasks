#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

float calculateHeight (float base,float degree);
 main(){
    float degree;
    float base;
    float result;
  cout << "Enter Angle: ";
  cin >> degree;
  cout << "Enter Base: "; 
  cin >> base;
  result = calculateHeight(base, degree);
  cout << "Height is: " << result;
}
float calculateHeight (float base,float degree){      
      degree = degree * 0.017453;
      float height = base * tan(degree);
         return height; 
}
   

