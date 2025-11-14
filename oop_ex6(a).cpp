#include <iostream>
using namespace std;

class person {
public:
    string name;
    int age;

    void getPersonDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : public person {
public:
    int rollno;

    void getStudentDetails() {
        getPersonDetails();  // get base class data
        cout << "Enter roll number: ";
        cin >> rollno;
    }

    void showStudentDetails() {
        showPersonDetails();  // show base class data
        cout << "Roll Number: " << rollno << endl;
    }
};

int main() {
    student s;
    s.getStudentDetails();
    cout << "\nStudent Details:\n";
    s.showStudentDetails();
    return 0;
}

