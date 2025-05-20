#include <iostream>
using namespace std;

class BankAccount {
private:
    // Encapsulated data (only accessible within the class)
    double balance;

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Initial balance invalid. Set to 0." << endl;
        }
    }

    // Public method to deposit money (abstracting deposit details)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Public method to withdraw money (abstracting withdrawal details)
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            cout << "Invalid or insufficient balance for withdrawal." << endl;
        }
    }

    // Public method to display balance (encapsulating internal data)
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000); // Initialize account with $1000

    account.deposit(200);      // Depositing $200
    account.withdraw(150);     // Withdrawing $150
    cout << "Current balance: $" << account.getBalance() << endl;

    return 0;
}



/*
Output :- 
Deposited: $200
Withdrew: $150
Current balance: $1050
*/