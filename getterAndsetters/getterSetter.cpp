#include <iostream>
#include <vector>

using namespace std;

class Chai
{
private:
     string teaName;
     int servings;
     vector<string> ingredients;

public:
     Chai()
     {
          teaName = "unknown tea";
          servings = 1;
          ingredients = {"water", "Tea Leaves"};
          cout << "constructor called" << endl;
     }

     Chai(string name, int serving, vector<string> ingr)
     {
          teaName = name;
          servings = serving;
          ingredients = ingr;
     }

     // getter and setter
     string getTeaName()
     {
          return teaName;
     }
     void setTeaName(string name)
     {
          teaName = name;
     }
     int getServings()
     {
          return servings;
     }
     void setServings(int serving)
     {
          servings = serving;
     }
     vector<string> getIngredients()
     {
          return ingredients;
     }
     void setIngredients(vector<string> ingr)
     {
          ingredients = ingr;
     }
};

int main()
{
     Chai chai;
     chai.setTeaName("Green tea");
}