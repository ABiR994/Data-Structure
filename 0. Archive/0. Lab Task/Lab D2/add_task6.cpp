#include <iostream>
using namespace std;

struct employee {
    int id;
    float salary;
    int experience;
};

void input(employee &e) {
    cout << "Enter employee ID: ";
    cin >> e.id;
    cout << "Enter monthly salary: ";
    cin >> e.salary;
    cout << "Enter years of experience: ";
    cin >> e.experience;
}

void printEmployeeId(employee e) {
    cout << "Employee ID: " << e.id << endl;
}

int main() {
    employee employees[10];

    for(int i = 0; i < 10; i++) {
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        input(employees[i]);
        cout << endl;
    }

    cout << endl;

    cout << "IDs of employees with Salary > 60000 :" << endl;
    for(int i = 0; i < 10; i++) {
        if(employees[i].salary > 60000) {
            printEmployeeId(employees[i]);
        }
    }

    cout << endl;

    cout << "IDs of employees with experience >= 5 years :" << endl;
    for(int i = 0; i < 10; i++) {
        if(employees[i].experience >= 5) {
            printEmployeeId(employees[i]);
        }
    }

    return 0;
}