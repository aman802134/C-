#include <iostream>
#include <string>

using namespace std;

int main()
{
     int cups;
     int pricePerCups = 20;
     double totalPrice, discountedPrice;

     cout << "Enter the cups you have taken" << endl;
     cin >> cups;

     totalPrice = cups * pricePerCups;
     cout << "your total price of tea you have taken is:" << totalPrice << endl;

     if (totalPrice > pricePerCups * 10)
     {
          cout << "you are not for the discouted price" << endl;
     }
     else if (totalPrice > pricePerCups * 10 && totalPrice <= pricePerCups * 20)
     {
          cout << "you are eligible for the discounted price" << endl;
          discountedPrice = totalPrice * 0.1;
     }
     else
     {
          cout << "you are eligible for the discount";
     }
}