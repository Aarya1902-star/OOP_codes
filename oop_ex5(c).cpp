#include<iostream>
using namespace std;

class college {
    int rollno;
    string name;
    string course;
public:
    college(int r = 0, string n = "Unknown", string c = "computer engineering") {
        rollno = r;
        name = n;
        course = c;
    }
    void accept() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter course ";
        cin.ignore(); 
        string temp;
        getline(cin, temp);
        if (temp != "") 
            course = temp;
    }
    void display() {
        cout << "\nRoll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    college c1, c2;
    cout << "Enter data for 1st student:\n";
    c1.accept();
    cout << "Enter data for 2nd student:\n";
    c2.accept();

    cout << "\nStudent details:\n";
    c1.display();
    c2.display();

    return 0;
}

