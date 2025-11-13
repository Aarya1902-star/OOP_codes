#include<iostream>
using namespace std;

class student {
    int rollno;
    float percentage;
public:
    void accept() {
        this->input();
    }
    void display() {
        this->output();
    }
private:
    void input() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    void output() {
        cout << "\nStudent Details\n";
        cout << "Roll Number: " << rollno << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

int main() {
    student s;
    s.accept();
    s.display();
    return 0;
}

