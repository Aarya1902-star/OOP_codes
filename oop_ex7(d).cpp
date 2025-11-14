#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    void show() {
        cout << "Value = " << value << endl;
    }

    Number operator++() {
        value++;       // increment first
        return *this;  // return updated object
    }

    Number operator++(int) {
        Number temp = *this; // store old value
        value++;             // increment after
        return temp;         // return old value
    }
};

int main() {
    Number n(10);

    cout << "Original: ";
    n.show();

    ++n;   // pre-increment
    cout << "After Pre-increment (++n): ";
    n.show();

    n++;   // post-increment
    cout << "After Post-increment (n++): ";
    n.show();

    return 0;
}

