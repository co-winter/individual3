
#include <iostream>
using namespace std;

int main() {
    int choice = 0;

    while (choice != 4) {
        cout << "\n=== Student Grade Tracker ===" << endl;
        cout << "1. Add a grade" << endl;
        cout << "2. View all grades" << endl;
        cout << "3. Calculate average" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            cout << "You selected Add a grade." << endl;
        }
        else if (choice == 2) {
            cout << "You selected View all grades." << endl;
        }
        else if (choice == 3) {
            cout << "You selected Calculate average." << endl;
        }
        else if (choice == 4) {
            cout << "Goodbye!" << endl;
        }
        else {
            cout << "Invalid option. Try again." << endl;
        }
    }

    return 0;
}
