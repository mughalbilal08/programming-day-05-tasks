#include <iostream>
using namespace std;
 
main(){
 int hours, minutes;
  int extraMints=0; 
  cout << "Enter Hours between (0 and 23): ";
  cin >> hours;
  cout << "Enter minutes: ";
  cin >> minutes;

if (minutes > 44){
  extraMints = minutes - 45;
}
  minutes = minutes + 15;
if (minutes > 59){
   hours = hours + 1; 
     minutes = 0;
  }
    minutes = minutes + extraMints;
 if (hours > 23){
  hours = 0;
  }
 
    cout <<hours<< ":" << minutes;
}