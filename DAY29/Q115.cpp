#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int choice;

    cout << "Enter String: ";
    cin >> str;

    do {
        cout << "\n1.Length\n2.Reverse\n3.Uppercase\n4.Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Length = " << strlen(str);
                break;

            case 2:
                strrev(str);
                cout << "Reverse = " << str;
                strrev(str);
                break;
                 case 3:
                for (int i = 0; str[i]; i++)
                    str[i] = toupper(str[i]);
                cout << str;
                break;

            case 4:
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}