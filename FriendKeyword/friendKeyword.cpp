#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai
{
private:
     string teaName;
     int servings;

public:
     Chai(string name, int serve) : teaName(name), servings(serve) {}

     friend bool compareServings(const Chai &chai1, const Chai &chai2);
     void display() const
     {
          cout << "teaName : " << teaName << endl;
     }
};

bool compareServings(const Chai &chai1, const Chai &chai2)
{
     return chai1.servings > chai2.servings;
}

int main()
{
     Chai masalaChai("masala chai", 4);
     Chai gingrerTea("ginger chai", 4);

     masalaChai.display();
     gingrerTea.display();

     if (compareServings(masalaChai, gingrerTea))
     {
          cout << "masala chai is having more servings" << endl;
     }
     else
     {
          cout << "masala chai is having less servings" << endl;
     }
}