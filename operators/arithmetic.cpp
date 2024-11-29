#include <iostream>

using namespace std;

int main()
{
     int cups;
     double pricePerCups, totalPrice, discountedPrice;

     cout << "Enter the number of tea cups :";
     cin >> cups;
     cout << "Enter the price per cups :";
     cin >> pricePerCups;

     totalPrice = cups * pricePerCups;

     // apply 5% discount if total price is above 100
     if (totalPrice > 100)
     {
          discountedPrice = totalPrice - (totalPrice * 0.05);
          cout << "Discounted price is :" << discountedPrice << endl;
     }
     else
     {
          cout << "Total price is :" << totalPrice << endl;
     }
}