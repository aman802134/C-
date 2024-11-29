#include <iostream>
using namespace std;

int totalChaiServed(int chai[], int size)
{
     int total = 0;
     for (int i = 0; i < size; i++)
     {
          total += chai[i];
     }
     return total;
}

int main()
{
     int chaiServed[7] = {50, 65, 80, 35, 45, 89, 20};
     int total = totalChaiServed(chaiServed, 7);

     cout << "total chai served per day  " << total << endl;
}