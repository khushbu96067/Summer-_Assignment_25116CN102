#include <iostream>
using namespace std;

class Item {
public:
    int id, quantity;
    string name;

    void input() {
        cout << "Enter Item ID: ";
        cin >> id;
        cout << "Enter Item Name: ";
        cin >> name;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nQuantity: " << quantity << endl;
    }
};
int main() {
    Item i;
    i.input();
    i.display();

    return 0;
}