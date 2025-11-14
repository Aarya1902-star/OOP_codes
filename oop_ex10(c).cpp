#include <iostream>
using namespace std;

template <class T>
class Calculator {
public:
    T add(T a, T b) { return a + b; }
    T sub(T a, T b) { return a - b; }
    T mul(T a, T b) { return a * b; }

    T divi(T a, T b) {
        return b != 0 ? a / b : 0;
    }

    // modulus works only for int ? template specialization
    T mod(T a, T b) { return 0; }

    T square(T a) { return a * a; }
    T cube(T a) { return a * a * a; }
    T maxi(T a, T b) { return a > b ? a : b; }
    T mini(T a, T b) { return a < b ? a : b; }
    T avg(T a, T b) { return (a + b) / 2; }
};

// Specialization for int modulus
template <>
int Calculator<int>::mod(int a, int b) {
    return b != 0 ? a % b : 0;
}

int main() {
    Calculator<int> ci;      // for integer
    Calculator<float> cf;    // for float

    int a = 10, b = 4;

    cout << "Integer Add: " << ci.add(a, b) << endl;
    cout << "Integer Sub: " << ci.sub(a, b) << endl;
    cout << "Integer Mul: " << ci.mul(a, b) << endl;
    cout << "Integer Div: " << ci.divi(a, b) << endl;
    cout << "Integer Mod: " << ci.mod(a, b) << endl;
    cout << "Integer Square: " << ci.square(a) << endl;
    cout << "Integer Cube: " << ci.cube(a) << endl;
    cout << "Max: " << ci.maxi(a, b) << endl;
    cout << "Min: " << ci.mini(a, b) << endl;
    cout << "Average: " << ci.avg(a, b) << endl;

    return 0;
}

