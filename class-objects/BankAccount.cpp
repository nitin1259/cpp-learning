#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount(string owner)
{
    this->owner = owner;
    this->balance = 0;
}
BankAccount::BankAccount(string owner, int balance)
{
    if (balance < 1){
        cout << "Balance should be greter than 0" << endl;
        return;
    }
    this->owner = owner;
    this->balance= balance;
}

BankAccount::~BankAccount()
{
    cout << "destroying the Bank Account object" << endl;
}

void BankAccount::deposit(int amount){
    if(amount<0){
        cout << "Deposite should not be negative" << endl;
        return;
    }
    this->balance +=amount;
}
void BankAccount::withdraw(int amount){
    if(amount<0){
        cout << "Deposite should not be negative" << endl;
        return;
    }

    if(amount > this->balance){
        cout << "Withdraw amout should not be greater than balance" << this->balance << endl;
        return;
    }

    this->balance -= amount;

}
string BankAccount::getOwner()const {
    return this->owner;
}
int BankAccount::getBalance() const{
    return this->balance;
}