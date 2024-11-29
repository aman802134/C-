#include <iostream>
#include <string>

using namespace std;

class Tea
{
public:
     virtual void prepareIngredients() = 0;
     virtual void brew() = 0;
     virtual void serve() = 0;

     void makeTea()
     {
          prepareIngredients();
          brew();
          serve();
     }
};

class GreenTea : public Tea
{
public:
     void prepareIngredients() override
     {
          cout << "Green leaves and water is ready" << endl;
     };
     void brew() override
     {
          cout << "Green tea brewed" << endl;
     };
     void serve() override
     {
          cout << "Green tea served" << endl;
     };
};
class MasalaTea : public Tea
{
public:
     void prepareIngredients() override
     {
          cout << "Green leaves and water along with masala is ready" << endl;
     };
     void brew() override
     {
          cout << "masala tea brewed" << endl;
     };
     void serve() override
     {
          cout << "masala tea served" << endl;
     };
};

int main()
{
     GreenTea greenTea;
     MasalaTea masalaTea;

     greenTea.makeTea();
     masalaTea.makeTea();
     return 0;
}