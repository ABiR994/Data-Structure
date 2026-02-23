#include<iostream>
#include<string>
using namespace std;

struct Address {
    string city;
    int postcode;
};

struct Student {
    int id;
    string name;
    Address address;  //Nasted structure
};

int main(void) {

    Student std1;

    std1.id = 53422;
    std1.name = "Galib";
    std1.address.city = "Dhaka";
    std1.address.postcode = 1229;


    cout<<"ID: "<<std1.id<<endl;
    cout<<"Name: "<<std1.name<<endl;
    cout<<"City: "<<std1.address.city<<endl;
    cout<<"Post Code: "<<std1.address.postcode<<endl;

    return 0;
}
