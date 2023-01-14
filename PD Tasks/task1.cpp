#include <iostream>
using namespace std;
float vol(float lenght, float height, float width ,string unit);

   main (){
      double lenght, width, height, Volume; 
      string unit ;  
      cout << "Enter Lenght:";
      cin>> lenght;
      cout << "Enter width:";
      cin>> width;
      cout << "Enter Height:";
      cin >> height;
      cout << "Enter unit:";
      cin >> unit; 
      Volume= vol(lenght,height,width,unit);   
      cout << " " << Volume << " Cubic "<< " " << unit;
   }

   float vol(float lenght,float height, float width, string unit) {
    float volume;
    volume = (lenght * width * height)/3;
    if (unit == "centimeters")
    {
    volume = volume * (100 * 100 * 100);
    } 
    if (unit == "kilometers"){
    volume = volume / 1000000000;
     }   
   if (unit == "milimeters"){
     volume = volume * (10 * 10 *10);
   }
     return volume ;
    }