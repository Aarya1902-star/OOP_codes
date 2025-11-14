#include <iostream>
using namespace std;

template <typename T>
class SimpleVector {
    T arr[100];  // fixed size for simplicity
    int size;

public:
    SimpleVector(int s) : size(s) {}

    void set(int i, T val) {
        if (i >= 0 && i < size)
            arr[i] = val;
        else
            cout << "Index out of range\n";
    }

    T get(int i) {
        if (i >= 0 && i < size)
            return arr[i];
        cout << "Index out of range\n";
        return T();
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    SimpleVector<int> v(5);

    for (int i = 0; i < 5; i++)
        v.set(i, i * 10);

    v.display();

    v.set(2, 99);  // modify index 2
    cout << "After modification:\n";
    v.display();

    return 0;
}

