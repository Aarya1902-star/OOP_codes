#include<iostream>
using namespace std;

class student {
    string name;
    float percentage;
public:
    student(string n, float p) {  // constructor with parameters
        name = n;
        percentage = p;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

int main() {
    string n;
    float p;
    cout << "Enter name: ";
    cin >> n;
    cout << "Enter percentage: ";
    cin >> p;

    student s(n, p);  // creating object with constructor init
    s.display();

    return 0;
}

