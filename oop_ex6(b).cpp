#include <iostream>
using namespace std;

class academic {
protected:
    int marks;
public:
    void getAcademicMarks() {
        cout << "Enter academic marks: ";
        cin >> marks;
    }
};

class sports {
protected:
    int sports_marks;
public:
    void getSportsMarks() {
        cout << "Enter sports marks: ";
        cin >> sports_marks;
    }
};

class result : public academic, public sports {
    int total;
public:
    void calculateTotal() {
        total = marks + sports_marks;
    }
    void display() {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Marks: " << sports_marks << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    result r;
    r.getAcademicMarks();
    r.getSportsMarks();
    r.calculateTotal();
    cout << "\nResult Details:\n";
    r.display();
    return 0;
}

