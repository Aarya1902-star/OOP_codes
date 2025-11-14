#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file1, file2;
    char ch;

    // Open first.txt for reading (ios::in)
    file1.open("first.txt", ios::in);
    // Open second.txt for writing (ios::out)
    file2.open("second.txt", ios::out);


    while (file1.get(ch)) {
        file2.put(ch);
    }

    cout << "File copied successfully.\n";

    file1.close();
    file2.close();

    return 0;
}

