
#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float salary;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee ID: " << id;
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();
    return 0;
}