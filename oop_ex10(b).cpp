#include <iostream>
using namespace std;


template <class T>
T square(T x) {
    return x * x;
}

template <>
string square<string>(string s) {
    return s + s;     // square of a string = repeated twice
}

int main() {
    int n;
    string str;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "Enter a string: ";
    cin >> str;

    cout << "\nSquare of integer: " << square(n) << endl;
    cout << "Square of string: " << square(str) << endl;

    return 0;
}

