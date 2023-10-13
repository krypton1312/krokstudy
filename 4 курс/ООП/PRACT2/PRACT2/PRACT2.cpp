#include <iostream>
#include <string>
using namespace std;


struct STUD {
    string NAME;
    string GROUP;
    double SES[5];
};

void inputStudents(STUD students[], int N) {
    for (int i = 0; i < N; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        cin >> students[i].NAME;
        cout << "Enter student " << i + 1 << " group: ";
        cin >> students[i].GROUP;
        cout << "Enter student " << i + 1 << " grades (5 grades separated by spaces): ";
        for (int j = 0; j < 5; j++) {
            cin >> students[i].SES[j];
        }
    }
}

void printStudentsWithHighAverage(STUD students[], int N) {
    bool found = false;
    for (int i = 0; i < N; i++) {
        double sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += students[i].SES[j];
        }
        double average = sum / 5;
        if (average > 4.0) {
            cout << "Student: " << students[i].NAME << ", Group: " << students[i].GROUP << ", Average: " << average << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No students with an average greater than 4.0 found." << endl;
    }
}

int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;

    STUD* students = new STUD[N];

    inputStudents(students, N);
    printStudentsWithHighAverage(students, N);

    delete[] students; 

    return 0;
}
