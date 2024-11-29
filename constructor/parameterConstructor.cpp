#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Chai
{
public:
     string teaName;
     int servings;
     vector<string> ingredients;

     Chai(string name, int serving, vector<string> ingr)
     {
          teaName = name;
          servings = serving;
          ingredients = ingr;
          cout << "constructor called" << endl;
     }
     void displayChaiDetails()
     {
          cout << "Tea Name : " << teaName << endl;
          cout << "Tea Serving : " << servings << endl;
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
     Chai lemonTea("Lemon tea", 2, {"water", "lemon", "tea"});
     lemonTea.displayChaiDetails();
     return 0;
}