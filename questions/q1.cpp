#include <iostream>
#include <string>

using namespace std;

class Pronic
{
public:
     int check(int n);
};

int Pronic::check(int n)
{
     int i, flag = 0;
     for (i = 1; i <= n; i++)
     {
          if (i * (i + 1) == n)
          {
               flag = 1;
               break;
          }
     }
     if (flag == 1)
     {
          return 1;
     }
     else
     {
          return 0;
     }
};

int main()
{
     int x;
     cout << "enter a number";
     cin >> x;
     Pronic p;
     int y = p.check(x);
     (y == 1) ? cout << "pronic number" : cout << "not a pronic";
}
