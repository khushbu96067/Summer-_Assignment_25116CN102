
#include <iostream>
using namespace std;

class Salary {
public:
    string name;
    float basic, hra, da, gross;

    void input() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void calculate() {
        hra = basic * 0.20;
        da = basic * 0.10;
        gross = basic + hra + da;
    }

    void display() {
        cout << "\nEmployee: " << name;
        cout << "\nGross Salary: " << gross << endl;
    }
};

int main() {
    Salary s;
    s.input();
    s.calculate();
    s.display();
    return 0;
}