#include <iostream>
using namespace std;

class Ticket {
public:
    string name;
    int seats;
    int price = 500;

    void book() {
        cout << "Enter Passenger Name: ";
        cin >> name;
        cout << "Enter Number of Seats: ";
        cin >> seats;
    }

    void display() {
        cout << "\nPassenger: " << name;
        cout << "\nSeats Booked: " << seats;
        cout << "\nTotal Amount: " << seats * price << endl;
    }
};

int main() {
    Ticket t;
    t.book();
    t.display();
    return 0;
}