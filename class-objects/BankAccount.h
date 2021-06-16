#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

using namespace std;

class BankAccount
{
private:
    string owner;
    int balance;
public:
    BankAccount(string owner);
    BankAccount(string owner, int balance);
    ~BankAccount();

    void deposit(int amount);
    void withdraw(int amount);
    string getOwner() const;
    int getBalance() const;
};








#endif