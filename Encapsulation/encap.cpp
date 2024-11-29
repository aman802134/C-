#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
     string accountNumber;
     double balance;

public:
     BankAccount(string accNO, double initialBalance)
     {
          accountNumber = accNO;
          balance = initialBalance;
     }

     double getBalance()
     {
          return balance;
     };

     void deposite(double amount)
     {
          if (amount > 0)
          {
               balance += amount;
               cout << "Deposited:" << amount << endl;
          }
          else
          {
               cout << "Invalid amount" << endl;
          }
     };

     void withdraw(double amount)
     {
          if (amount > 0 && amount <= balance)
          {
               balance -= amount;
               cout << "Withdrawl amount :" << amount << endl;
          }
          else
          {
               cout << "invalid withdrawl amount" << endl;
          }
     };
};

int main()
{
     BankAccount myAccount("1223344", 500);
     myAccount.getBalance();
     myAccount.deposite(200);
     myAccount.withdraw(100);

     return 0;
}