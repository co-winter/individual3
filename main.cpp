
#include <iostream>
#include <vector>
using namespace std;

class GradeTracker {
private:
    vector<double> grades;

public:
    void addGrade() {
        double grade;

        cout << "Enter a grade from 0 to 100: ";
        cin >> grade;

        if (grade >= 0 && grade <= 100) {
            grades.push_back(grade);
            cout << "Grade added!" << endl;
        }
        else {
            cout << "Invalid grade." << endl;
        }
    }

    void viewGrades() {
        if (grades.empty()) {
            cout << "No grades have been entered yet." << endl;
        }
        else {
            cout << "\nYour grades:" << endl;

            for (int i = 0; i < grades.size(); i++) {
                cout << grades[i] << endl;
            }
        }
    }

    void calculateAverage() {
        if (grades.empty()) {
            cout << "No grades have been entered yet." << endl;
        }
        else {
            double total = 0;

            for (int i = 0; i < grades.size(); i++) {
                total = total + grades[i];
            }

            double average = total / grades.size();

            cout << "Your average is: " << average << endl;
        }
    }
};

int main() {
    int choice = 0;
    GradeTracker tracker;

    while (choice != 4) {
        cout << "\n=== Student Grade Tracker ===" << endl;
        cout << "1. Add a grade" << endl;
        cout << "2. View all grades" << endl;
        cout << "3. Calculate average" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            tracker.addGrade();
        }
        else if (choice == 2) {
            tracker.viewGrades();
        }
        else if (choice == 3) {
            tracker.calculateAverage();
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
