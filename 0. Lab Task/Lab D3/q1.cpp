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
    Classroom cls1;

    cls1.classroom_no = 101;
    cls1.capacity = 30;
    cls1.course = "Data Structures";
    cls1.floor.floor_no = 1;

    displayClassroomInfo(cls1);

    return 0;
}