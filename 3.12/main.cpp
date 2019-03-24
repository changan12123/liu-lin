#include <iostream>
#include "Account.h"
using namespace std;
int main()
{
Account account1(50);
Account account2(25);
cout << "account1 balance: $" << account1.getBanlance()<< endl;
cout << "account2 balance: $" << account2.getBanlance()<< endl;
cout << ¡°/nEnter withdrawal amount for account2:";
cin >> withdrawalAmount;
cout << "/nattempting to subtract " <<withdrawalAmount <<"from account2 balance/n/n";
account2.debit(withdrawalAmount);
cout << "account1 balance: $" << account1.getBanlance()<< endl;
cout << "account2 balance: $" << account2.getBanlance()<< endl;
}
