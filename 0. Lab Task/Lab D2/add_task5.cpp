#include <iostream>
using namespace std;

struct student {
    int id;
    int credits;
    float cgpa;
};

void input(student &s) {
    cout << "Enter student ID: ";
    cin >> s.id;
    cout << "Enter credits: ";
    cin >> s.credits;
    cout << "Enter CGPA: ";
    cin >> s.cgpa;
}

void printStudentInfo(student s) {
    cout << "ID: " << s.id << ", Credits: " << s.credits << ", CGPA: " << s.cgpa << endl;
}

int main() {
    student students[10];

    for(int i = 0; i < 10; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        input(students[i]);
        cout << endl;
    }

    cout << endl;

    cout << "Students with CGPA >= 3.80 and more than 30 credits:" << endl;
    for(int i = 0; i < 10; i++) {
        if((students[i].cgpa >= 3.80) && (students[i].credits >= 30)) {
            printStudentInfo(students[i]);
        }
    }

    cout << endl;

    cout << "Students with CGPA < 2.50:" << endl;
    for(int i = 0; i < 10; i++) {
        if(students[i].cgpa < 2.50) {
            printStudentInfo(students[i]);
        }
    }

    return 0;
}