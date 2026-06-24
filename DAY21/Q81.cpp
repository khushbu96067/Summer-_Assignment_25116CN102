#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of string = " << length << endl;

    return 0;
}