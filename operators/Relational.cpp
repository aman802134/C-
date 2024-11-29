#include <iostream>

using namespace std;

int main()
{
     int cups;
     cout << "Enter the cups that you have taken :";
     cin >> cups;

     if (cups > 20)
     {
          cout << "you have recieved\"Gold badges" << endl;
     }
     else if (cups >= 10 && cups <= 20)
     {
          cout << "you have recieve \"silver badges" << endl;
     }
     else
     {
          cout << "Else no badges for you, sorry next time";
     }

     return 0;
}