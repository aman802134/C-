#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chai
{
public:
     string teaName;
     int teaServing;
     vector<string> ingredients;

     void displayChaiDetails()
     {
          cout << "Tea Name : " << teaName << endl;
          cout << "Tea Serving : " << teaServing << endl;
          cout << "Tea Ingredients : " << endl;
          for (string ingredient : ingredients)
          {
               cout << ingredient << " ";
          }
          cout << endl;
     }
};

int main()
{
     Chai chaiOne;
     chaiOne.teaName = "Green tea";
     chaiOne.teaServing = 2;
     chaiOne.ingredients = {"Water", "lemon", "tea"};
     chaiOne.displayChaiDetails();

     return 0;
}