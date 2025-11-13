#include<iostream>
using namespace std;

class student {
    string name;
    int roll;
public:
    class marks {
        int m1, m2;
        float avg;
    public:
        void getmarks() {
            cout << "Enter marks m1 and m2: ";
            cin >> m1 >> m2;
            avg = (m1 + m2) / 2.0;
        }
        void showmarks() {
            cout << "Marks 1: " << m1 << ", Marks 2: " << m2 << endl;
            cout << "Average: " << avg << endl;
        }
        float getavg() { return avg; }
    };
    marks m;  // object of nested class marks

    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> roll;
        m.getmarks();
    }
    void display() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        m.showmarks();
    }
};

int main() {
    student s1;
    s1.getdata();
    s1.display();
    return 0;
}

