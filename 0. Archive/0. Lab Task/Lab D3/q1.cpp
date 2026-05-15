#include <iostream>
using namespace std;

struct Floor {
    int floor_no;
};

struct Classroom {
    int classroom_no;
    int capacity;
    string course;
    Floor floor;
};

void displayClassroomInfo(Classroom &cls) {
    cout << "Classroom No: " << cls.classroom_no << endl;
    cout << "Capacity: " << cls.capacity << endl;
    cout << "Course: " << cls.course << endl;
    cout << "Floor No: " << cls.floor.floor_no << endl;
}

int main() {
    int n;
    cout << "Enter number of classrooms: ";
    cin >> n;
    cout << endl;

    Classroom classrooms[n];

    for (int i = 0; i < n; i++) {
        cout << "Classroom " << i + 1 << ":" << endl;
        cout << "Classroom No: ";
        cin >> classrooms[i].classroom_no;
        cout << "Capacity: ";
        cin >> classrooms[i].capacity;
        cin.ignore();
        cout << "Course: ";
        getline(cin, classrooms[i].course);
        cout << "Floor No: ";
        cin >> classrooms[i].floor.floor_no;
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "--- Classroom " << i + 1 << " Information ---" << endl;
        displayClassroomInfo(classrooms[i]);
        cout << endl;
    }
    return 0;
}