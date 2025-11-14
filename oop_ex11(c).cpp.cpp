#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    cout << "(";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i != vec.size() - 1)
            cout << ", ";
    }
    cout << ")" << endl;

    return 0;
}

