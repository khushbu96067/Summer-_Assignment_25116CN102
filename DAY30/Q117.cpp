#include <iostream>
using namespace std;

int main() {
    int roll[5];
    string name[5];
    float marks[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter Roll, Name, Marks: ";
        cin >> roll[i] >> name[i] >> marks[i];
    }

    cout << "\nStudent Records\n";

    for (int i = 0; i < 5; i++) {
        cout << roll[i] << "\t"
             << name[i] << "\t"
             << marks[i] << endl;
    }

    return 0;
}