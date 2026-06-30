#include <iostream>
using namespace std;

class Library {
public:
    int id;
    string title, author;

    void input() {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
    }

    void display() {
        cout << "\nBook ID: " << id;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author << endl;
    }
};

int main() {
    Library b;
    b.input();
    b.display();
    return 0;
}