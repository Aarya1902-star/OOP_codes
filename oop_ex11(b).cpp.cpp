#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int scalar = 3;

    // Multiply each element by scalar
    for (int& val : vec) {
        val = val * scalar;  // no const used here
    }

    // Display the result
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

