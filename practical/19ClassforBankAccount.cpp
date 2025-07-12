#include <iostream>
using namespace std;
class BankAccount {
private:
    float balance;  

public:
    BankAccount() {
        balance = 0.0;
    }
    
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: ?" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: ?" << amount << endl;
        } else {
            cout << "Invalid or insufficient funds!" << endl;
        }
    }

    float getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;  
    account.deposit(7000);      
    account.withdraw(2300);      
   
    cout << "Current Balance: ?" << account.getBalance() << endl;

}

