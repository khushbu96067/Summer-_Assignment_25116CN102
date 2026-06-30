#include <iostream>
using namespace std;

int main() {
    string name;
    float m1, m2, m3, total, percentage;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks of 3 Subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    percentage = total / 3;

    cout << "\nName: " << name;
    cout << "\nTotal: " << total;
    cout << "\nPercentage: " << percentage << "%";

    if (percentage >= 40)
        cout << "\nResult: Pass";
    else
        cout << "\nResult: Fail";
return 0;
} 
