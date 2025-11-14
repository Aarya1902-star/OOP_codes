#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file1("file1.txt"); // Open file in read mode
    if (!file1) {
        cout << "Unable to open file.\n";
        return 1;
    }

    char ch;
    int digitCount = 0, spaceCount = 0;

    while (file1.get(ch)) {
        if (ch >= '0' && ch <= '9') {
            digitCount++;
        } else if (ch == ' ') {
            spaceCount++;
        }
    }

    cout << "Digits: " << digitCount << "\nSpaces: " << spaceCount << endl;

    file1.close();
    return 0;
}

