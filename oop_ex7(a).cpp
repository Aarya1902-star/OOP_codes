#include <iostream>
using namespace std;

// Function to calculate area of a square (classroom)
int area(int side) {
    return side * side;
}

// Function to calculate area of a rectangle (laboratory)
int area(int length, int width) {
    return length * width;
}

int main() {
    int side, length, width;

    cout << "Enter side of classroom (square): ";
    cin >> side;

    cout << "Enter length of laboratory (rectangle): ";
    cin >> length;

    cout << "Enter width of laboratory (rectangle): ";
    cin >> width;

    cout << "\nArea of Classroom (Square): " << area(side) << endl;
    cout << "Area of Laboratory (Rectangle): " << area(length, width) << endl;

    return 0;
}

