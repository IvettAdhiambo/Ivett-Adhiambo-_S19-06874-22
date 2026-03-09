#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int accNum, string holder, double bal) {
        accountNumber = accNum;
        accountHolder = holder;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit: " << amount << endl;
        cout << "New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds. Withdrawal denied." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
    }
    
    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};
void printSeparator() {
    cout << "---------------------------------" << endl;
    }
    
int main() {
    BankAccount Acc1(101, "John", 5000);
    Acc1.displayAccount();
    cout << endl;

    Acc1.deposit(1000);
    cout << endl;
    Acc1.withdraw(2000);
    cout << endl;
    printSeparator();
    
    BankAccount Acc2(102,"Cate",4000);
    Acc2.displayAccount();
    cout << endl;
    
    Acc2.deposit(1500);
    cout << endl;
    Acc2.withdraw(6000);
    cout<<endl;
    printSeparator();

    return 0;
} 
