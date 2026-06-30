#include <iostream>
using namespace std;

class Bank {
public:
    string name;
    int accNo;
    float balance;

    void create() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amt;
        cout << "Enter Deposit Amount: ";
        cin >> amt;
        balance += amt;
    }

    void withdraw() {
        float amt;
        cout << "Enter Withdraw Amount: ";
        cin >> amt;

        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance\n";
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nAccount No: " << accNo;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {
    Bank b;
    int ch;

    b.create();

    do {
        cout << "\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n";
        cin >> ch;

        switch(ch) {
            case 1: b.deposit(); break;
            case 2: b.withdraw(); break;
            case 3: b.display(); break;
        }

    } while(ch != 4);

    return 0;
}