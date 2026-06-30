
#include <iostream>
using namespace std;

int roll[100];
string name[100];
float marks[100];
int n = 0;

void addStudent() {
    cout << "Enter Roll: ";
    cin >> roll[n];

    cout << "Enter Name: ";
    cin >> name[n];

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
}

void displayStudent() {
    if (n == 0) {
        cout << "No Records Found!\n";
        return;
    }

    cout << "\nRoll\tName\tMarks\n";

    for (int i = 0; i < n; i++) {
        cout << roll[i] << "\t"
             << name[i] << "\t"
             << marks[i] << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n1.Add Student";
        cout << "\n2.Display Students";
        cout << "\n3.Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                cout << "Program Ended.";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 3);

    return 0;
}