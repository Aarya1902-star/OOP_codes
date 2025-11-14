#include<iostream>
using namespace std;

class Sum {
    int n;
    int result;
public:
    Sum() {
        n = 10; // default value
        result = (n * (n + 1)) / 2;
    }
    void display() {
        cout << "Sum from 1 to " << n << " is " << result << endl;
    }
};

int main() {
    Sum s;
    s.display();
    return 0;
}


