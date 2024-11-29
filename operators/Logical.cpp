#include <iostream>

using namespace std;

int main()
{
     bool isStudent;
     int cups;

     cout << "Are you a student (if yes enter 1 or no then 0)?";
     cin >> isStudent;

     cout << "how many cups you have taken ?";
     cin >> cups;

     if (isStudent || cups > 15)
     {
          cout << "you are eligible for subscription";
     }
     else
     {
          cout << "you are not eligible for subscription";
     }
}