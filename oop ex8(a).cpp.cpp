#include <iostream>
#include <string>
using namespace std;

class MyString {
public:
    string str;

    // Overload the + operator to concatenate two MyString objects
    MyString operator+(const MyString& other) {
        MyString result;
        result.str = str + other.str;
        return result;
    }

    // Function to display the string
    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1, s2, s3;
    s1.str = "abc";
    s2.str = "xyz";
    s3 = s1 + s2;

    s3.display(); // Output: Hello, World!
    return 0;
}

