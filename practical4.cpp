#include <iostream>
#include <string>
using namespace std;

class Bank
{
private:
    int account_number;
    string account_name;
    double balance;

public:
    Bank() : account_number(0), account_name(""), balance(0.0) {}

    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> account_number;
        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, account_name);
        cout << "Enter Initial Balance: ";
        cin >> balance;
        cout << " Account created successfully!"<<endl;
    }

    void deposit()
    {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited successfully. New Balance: RS" << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw()
    {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn successfully. New Balance: RS" << balance << endl;
        }
        else
        {
            cout << "Insufficient funds or invalid amount."<<endl;
        }
    }

    void displayBalance() const
    {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number   : " << account_number << endl;
        cout << "Account Holder   : " << account_name << endl;
        cout << "Current Balance  : RS" << balance << endl;
    }
};

int main()
{
    Bank bank;
    int choice;

    cout << "--- Banking System Menu ---"<<endl;
    cout << "1. Create New Account"<<endl;
    cout << "2. Deposit"<<endl;
    cout << "3. Withdrawl"<<endl;
    cout << "4. Display Balance"<<endl;
    cout << "5. Exit"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        bank.createAccount();
        break;
    case 2:
        bank.deposit();
        break;
    case 3:
        bank.withdraw();
        break;
    case 4:
        bank.displayBalance();
        break;
    case 5:
        cout << " Exiting the banking system.\n";
        break;
    default:
        cout << " Invalid choice. Try again.\n";
    }

    return 0;
}
