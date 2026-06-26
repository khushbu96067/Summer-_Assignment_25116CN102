#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "===== QUIZ APPLICATION =====\n";

    cout << "\nQ1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cin >> answer;
    if (answer == 2)
        score++;

    cout << "\nQ2. C++ was developed by?\n";
    cout << "1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n";
    cin >> answer;
    if (answer == 3)
        score++;

    cout << "\nQ3. Which symbol is used for comments in C++?\n";
    cout << "1. //\n2. ##\n3. **\n4. &&\n";
    cin >> answer;
    if (answer == 1)
        score++;

    cout << "\nYour Score = " << score << " out of 3";

    return 0;
}