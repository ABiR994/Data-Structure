#include <iostream>
using namespace std;

int main() {
    string name = "John"; // string variable
    int age = 21; // integer variable 4 bytes
    char grade = 'A'; // character variable 1 byte
    float gpa = 3.8f; // floating-point variable 4 bytes
    double precise_gpa = 3.85; // double-precision floating-point variable 8 bytes
    bool is_student = true; // boolean variable 1 byte

    cout << "Name: " << name << "\nAge: " << age << "\nGrade: " << grade << "\nGPA: " << gpa << "\nPrecise GPA: " << precise_gpa << "\nIs Student: " << is_student << endl;

    return 0;
}