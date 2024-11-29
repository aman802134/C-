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

     Chai()
     {
          teaName = "unknown tea";
          servings = 1;
          ingredients = {"water", "Tea Leaves"};
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
     Chai defaultChai;
     defaultChai.displayChaiDetails();
     return 0;
}