#include <iostream>
using namespace std;
 float taxCalculator(char type, float price );
main ()
{
    float price;
    char item;
    int amount;
    cout << "Enter Item Price:";
    cin >> price;
    cout << "Enter Vehicle Type:";
    cin >> item;
    amount = taxCalculator (item, price); 
    cout << " The Final Price of Vehicle of Type " << item << " is " << amount;   
}   

float taxCalculator(char type, float price )
{
    float taxAmount, finalPrice, item;
    if (type == 'M')
    {
        taxAmount = (price * 6)/100 ;
        finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (type == 'E')
    {
        taxAmount = (price * 8)/100 ;
        finalPrice = price + taxAmount;
        return finalPrice;

    }
    if (type == 'S')
    {
        taxAmount = (price * 10)/100 ;
        finalPrice = price + taxAmount;
        return finalPrice;
    }
     if (type == 'V')
    {
        taxAmount = (price * 12)/100 ;
        finalPrice = price + taxAmount;
        return finalPrice;
    }
 if (type == 'T')
    {
        taxAmount = (price * 15)/100 ;
        finalPrice = price + taxAmount;
        return finalPrice;  
    }
  }