#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    int len = strlen(str);
    bool palindrome = true;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}