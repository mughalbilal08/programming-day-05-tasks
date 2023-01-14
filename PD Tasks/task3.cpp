#include <iostream>
using namespace std;
main (){
    float hours, days, workers;
    float  hoursPerDay, totalWorkers ;
    float totalDays;
    cout << "Enter hours needed: ";
    cin >> hours;
    cout << "Enter no.of days: ";
    cin >> days;    
    cout << "Enter no.of Workers: ";
    cin >> workers; 
    totalDays = days - (days * 0.1);   
    hoursPerDay = totalDays * 10;
    totalWorkers = workers * hoursPerDay;

    if (hours < totalWorkers ) {
        int hNeeded;
        hNeeded = totalWorkers - hours;
         cout << " Yes! " <<  hNeeded << " hours left";

    } 
    if (hours > totalWorkers){
        int hNeeded;
        hNeeded =   hours - totalWorkers;
        cout << " No enough time! " << hNeeded << " hours needed ";
    }
}