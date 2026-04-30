#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void logHours() {
    ofstream file("study.txt", ios::app);

    if (!file) {
        cout << "Error opening file!" << endl;
     
    }

    string day;
    float hours;

    cout << "Enter day (e.g., Monday): ";
    cin >> day;

    cout << "Enter study hours: ";
    cin >> hours;

    file << day << " " << hours << endl;

    file.close();

    cout << "Study hours logged successfully!" << endl;
}

void weeklyReport() {
    ifstream file("study.txt");

    if (!file) {
        cout << "No data found!" << endl;
        return;
    }

    string day;
    float hours, total = 0;
    int count = 0;

    cout << "\n--- Weekly Study Report ---\n";

    while (file >> day >> hours) {
        cout << day << " : " << fixed << setprecision(2) << hours << " hours\n";
        total += hours;
        count++;
    }

    file.close();

    if (count > 0) {
        cout << "\nTotal Study Hours: " << total << endl;
        cout << "Average Study Hours: " << total / count << endl;
    } else {
        cout << "No records to show." << endl;
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n===== Student Productivity Tracker =====\n";
        cout << "1. Log Daily Study Hours\n";
        cout << "2. Generate Weekly Report\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                logHours();
                break;
            case 2:
                weeklyReport();
                break;
            case 3:
                cout << "Exiting program...\n";
                
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }

}
