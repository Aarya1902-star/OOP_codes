#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    file.open("file.txt", ios::in);  // Open file in input mode
    if (!file) {
        cout << "Unable to open file.\n";
        return 1;
    }

    char ch;
    int wordCount = 0;
    bool inWord = false;

    while (file.get(ch)) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << "Number of words: " << wordCount << endl;

    file.close();
    return 0;
}

