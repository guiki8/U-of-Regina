// Guilherme Moreira Bruno
// ID: 200568423

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double calculateAverage(int marks[], int size) {
    int total = 0;

    for (int i = 0; i < size; i++)
        total += marks[i];

    return (double)total / size;
}

char calculateGrade(double average) {
    if (average >= 80) return 'A';
    if (average >= 70) return 'B';
    if (average >= 60) return 'C';
    if (average >= 50) return 'D';
    return 'F';
}

void inputStudents(string name[], int id[], int marks[][3], int size) {
    for (int i = 0; i < size; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Name: ";
        getline(cin >> ws, name[i]);

        cout << "ID: ";
        cin >> id[i];

        for (int j = 0; j < 3; j++) {
            do {
                cout << "Subject " << j + 1 << " mark: ";
                cin >> marks[i][j];
            } while (marks[i][j] < 0 || marks[i][j] > 100);
        }
    }
}

void displayStudents(string name[], int id[], int marks[][3], int size) {
    cout << "\nID\tName\t\tTotal\tAverage\tGrade\n";

    for (int i = 0; i < size; i++) {
        int total = marks[i][0] + marks[i][1] + marks[i][2];
        double avg = calculateAverage(marks[i], 3);

        cout << id[i] << "\t" << name[i] << "\t"
             << total << "\t"
             << fixed << setprecision(2) << avg << "\t"
             << calculateGrade(avg) << endl;
    }
}

int findTopStudent(double average[], int size) {
    int top = 0;

    for (int i = 1; i < size; i++) {
        if (average[i] > average[top])
            top = i;
    }

    return top;
}

int searchStudent(int studentID[], int size, int searchID) {
    for (int i = 0; i < size; i++) {
        if (studentID[i] == searchID)
            return i;
    }

    return -1;
}

int main() {
    string name[10];
    int id[10], marks[10][3];
    double average[10];

    int size = 0, choice;

    do {
        cout << "\n1. Enter student records\n";
        cout << "2. Display all records\n";
        cout << "3. Find top student\n";
        cout << "4. Search student by ID\n";
        cout << "5. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Number of students (1-10): ";
            cin >> size;

            while (size < 1 || size > 10) {
                cout << "Invalid number. Try again: ";
                cin >> size;
            }

            inputStudents(name, id, marks, size);
            break;

        case 2:
            if (size == 0)
                cout << "No records available.\n";
            else
                displayStudents(name, id, marks, size);
            break;

        case 3:
            if (size == 0) {
                cout << "No records available.\n";
                break;
            }

            for (int i = 0; i < size; i++)
                average[i] = calculateAverage(marks[i], 3);

            {
                int top = findTopStudent(average, size);

                cout << "Top student: " << name[top] << endl;
                cout << "ID: " << id[top] << endl;
                cout << "Average: " << average[top] << endl;
            }
            break;

        case 4:
            if (size == 0) {
                cout << "No records available.\n";
                break;
            }

            {
                int searchID;
                cout << "Enter student ID: ";
                cin >> searchID;

                int index = searchStudent(id, size, searchID);

                if (index == -1) {
                    cout << "Student not found.\n";
                } else {
                    cout << "Name: " << name[index] << endl;
                    cout << "ID: " << id[index] << endl;

                    for (int j = 0; j < 3; j++)
                        cout << "Subject " << j + 1
                             << ": " << marks[index][j] << endl;

                    double avg = calculateAverage(marks[index], 3);

                    cout << "Average: " << avg << endl;
                    cout << "Grade: " << calculateGrade(avg) << endl;
                }
            }
            break;

        case 5:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
