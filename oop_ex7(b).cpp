#include <iostream>
using namespace std;

// Function to calculate sum of 5 integers
int sum(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

// Function to calculate sum of 5 floats
float sum(float a, float b, float c, float d, float e) {
    return a + b + c + d + e;
}

int main() {
    int i1, i2, i3, i4, i5;
    float f1, f2, f3, f4, f5;

    cout << "Enter 5 integer values:\n";
    cin >> i1 >> i2 >> i3 >> i4 >> i5;

    cout << "Enter 5 float values:\n";
    cin >> f1 >> f2 >> f3 >> f4 >> f5;

    cout << "\nSum of 5 Integers: " << sum(i1, i2, i3, i4, i5) << endl;
    cout << "Sum of 5 Floats: " << sum(f1, f2, f3, f4, f5) << endl;

    return 0;
}

