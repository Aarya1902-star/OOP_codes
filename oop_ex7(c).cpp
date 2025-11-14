#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> value;
    }

    void showData() {
        cout << "Value = " << value << endl;
    }

    void operator - () {
        value = -value;
    }
};

int main() {
    Number n;

    n.getData();

    cout << "\nBefore negation:\n";
    n.showData();

    -n;  
    cout << "\nAfter negation:\n";
    n.showData();

    return 0;
}

