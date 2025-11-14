#include <iostream>
using namespace std;


template <class T>
T sumArray(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intArr[5] = {1, 2, 3, 4, 5};
    float floatArr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    cout << "Sum of Integer Array: " << sumArray(intArr, 5) << endl;
    cout << "Sum of Float Array: " << sumArray(floatArr, 5) << endl;

    return 0;
}

