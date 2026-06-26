#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (strlen(str1) != strlen(str2)) {
        cout << "Not Anagrams";
        return 0;
    }

    int freq[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
        freq[str1[i]]++;

    for (int i = 0; str2[i] != '\0'; i++)
        freq[str2[i]]--;

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << "Not Anagrams";
            return 0;
        }
    }

    cout << "Anagram Strings";
    return 0;
}