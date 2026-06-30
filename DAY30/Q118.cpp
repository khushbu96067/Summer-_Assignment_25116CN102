#include <iostream>
using namespace std;

int main() {
    string book[5];

    cout << "Enter 5 Book Names:\n";

    for (int i = 0; i < 5; i++)
        cin >> book[i];

    cout << "\nLibrary Books\n";

    for (int i = 0; i < 5; i++)
        cout << book[i] << endl;

    return 0;
}