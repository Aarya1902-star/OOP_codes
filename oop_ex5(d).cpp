#include <iostream>
using namespace std;

class Box {
    int length, width, height;
public:
    
    Box() {
        length = width = height = 1;
    }

    Box(int l) {
        length = width = height = l;
    }

    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    int volume() {
        return length * width * height;
    }

    void display() {
        cout << "Dimensions: " << length << " x " << width << " x " << height << endl;
        cout << "Volume: " << volume() << endl;
    }
};

int main() {
    Box b1;           // Calls default constructor
    Box b2(5);        // Calls constructor with 1 parameter
    Box b3(3, 4, 5);  // Calls constructor with 3 parameters

    cout << "Box 1:\n"; b1.display();
    cout << "Box 2:\n"; b2.display();
    cout << "Box 3:\n"; b3.display();

    return 0;
}

