#include <iostream>
using namespace std;

class Employee {
public:
    int empid;
    string name;

    void getEmployeeData() {
        cout << "Enter employee id: ";
        cin >> empid;
        cout << "Enter name: ";
        cin >> name;
    }

    void displayEmployeeData() {
        cout << "Employee ID: " << empid << endl;
        cout << "Name: " << name << endl;
    }
};

class Manager : public Employee {
public:
    string department;

    void getManagerData() {
        getEmployeeData();
        cout << "Enter department: ";
        cin >> department;
    }

    void displayManagerData() {
        displayEmployeeData();
        cout << "Department: " << department << endl;
    }
};

class Developer : public Employee {
public:
    string programming_language;

    void getDeveloperData() {
        getEmployeeData();
        cout << "Enter programming language: ";
        cin >> programming_language;
    }

    void displayDeveloperData() {
        displayEmployeeData();
        cout << "Programming Language: " << programming_language << endl;
    }
};

int main() {
    Manager m;
    Developer d;

    cout << "Enter Manager Details:\n";
    m.getManagerData();

    cout << "\nEnter Developer Details:\n";
    d.getDeveloperData();

    cout << "\nManager Details:\n";
    m.displayManagerData();

    cout << "\nDeveloper Details:\n";
    d.displayDeveloperData();

    return 0;
}

