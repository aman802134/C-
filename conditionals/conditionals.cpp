#include <iostream>
#include <string>

using namespace std;

int main()
{
     string teaOrder;
     cout << "please choose your tea category" << endl;
     // cin >> teaOrder;
     getline(cin, teaOrder);

     if (teaOrder == "Green tea")
     {
          cout << "thanks for ordering Green tea !" << endl;
     }
     else
     {
          cout << "sorry for your incoviniency , we don't have this" << endl;
     }
}