#include <iostream>
using namespace std;

class result1 {
public:
    int marks1, marks2;

    void read() {
        cout << "Enter marks for result1 (2 subjects): ";
        cin >> marks1 >> marks2;
    }

    friend float avg(); 
};

class result2 {
public:
    int marks1, marks2;

    void read() {
        cout << "Enter marks for result2 (2 subjects): ";
        cin >> marks1 >> marks2;
    }

    friend float avg();
};
	float avg(){
		return (marks1 + marks2) / 2.0;
    }
void computeAvg(result1 r1, result2 r2) {
    cout << "Average of result1: " << r1.avg() << endl;
    cout << "Average of result2: " << r2.avg() << endl;
}

int main() {
    result1 r1;
    result2 r2;

    r1.read();
    r2.read();

    computeAvg(r1, r2);

    return 0;
}

