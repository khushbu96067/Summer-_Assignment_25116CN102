
#include <iostream>
using namespace std;

class Contact {
public:
    string name, phone;

    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Phone Number: ";
        cin >> phone;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nPhone: " << phone << endl;
    }
};

int main() {
    Contact c;
    c.input();
    c.display();
    return 0;
}