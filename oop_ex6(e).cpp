#include <iostream>
using namespace std;

// ---------------- BASE CLASS ----------------
class Person {
protected:
    string name;
    int age;

public:
    void getPersonData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void showPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// ------------- DERIVED FROM PERSON ----------------
class Student : public Person {
protected:
    int roll;
public:
    void getStudentData() {
        cout << "Enter Roll Number: ";
        cin >> roll;
    }

    void showStudentData() {
        cout << "Roll Number: " << roll << endl;
    }
};

// ---------------- SPORTS CLASS ----------------
class Sports {
protected:
    int sportsMarks;
public:
    void getSportsMarks() {
        cout << "Enter Sports Marks (out of 50): ";
        cin >> sportsMarks;
    }

    void showSportsMarks() {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

// ---------------- ACADEMIC CLASS ----------------
class Academic {
protected:
    int academicMarks;
public:
    void getAcademicMarks() {
        cout << "Enter Academic Marks (out of 100): ";
        cin >> academicMarks;
    }

    void showAcademicMarks() {
        cout << "Academic Marks: " << academicMarks << endl;
    }
};

// ---------------- RESULT CLASS (HYBRID INHERITANCE) ----------------
class Result : public Student, public Sports, public Academic {
public:
    void displayResult() {
        int total = sportsMarks + academicMarks;

        cout << "\n---- RESULT ----\n";
        showPersonData();
        showStudentData();
        showSportsMarks();
        showAcademicMarks();
        cout << "Total Marks: " << total << endl;
    }
};


// --------------------- MAIN FUNCTION ---------------------
int main() {
    Result r;

    r.getPersonData();
    r.getStudentData();
    r.getSportsMarks();
    r.getAcademicMarks();

    r.displayResult();

    return 0;
}

