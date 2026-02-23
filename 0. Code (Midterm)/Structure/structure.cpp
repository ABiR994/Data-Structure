#include<iostream>
#include<string>
using namespace std;

struct Student {
    int id;
    string name;
    float cgpa;
};

int main(void) {

    Student student1;

    student1.id = 56323;
    student1.name = "Rafi";
    student1.cgpa = 4.00;

    cout<<"Student ID:"<<student1.id<<endl;
    cout<<"Student Name:"<<student1.name<<endl;
    cout<<"Student CGPA:"<<student1.cgpa<<endl;

    Student structurearr[2] = {
    {44839, "Rehan", 4.00},
    {54430, "Galib", 4.00}
    };

    for(int i=0; i<2; i++){
        cout<<"Student ID:"<<structurearr[i].id<<endl;
        cout<<"Student Name:"<<structurearr[i].name<<endl;
        cout<<"Student CGPA:"<<structurearr[i].cgpa<<endl;
        cout<<endl;
    }

    return 0;
}

