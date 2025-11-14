#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push elements onto stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Print top element
    cout << "Top element is: " << s.top() << endl;

    // Pop an element
    s.pop();

    // Print new top element
    cout << "Top element after pop: " << s.top() << endl;

    // Print size of stack
    cout << "Stack size is: " << s.size() << endl;

    // Check if stack is empty
    if (s.empty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is not empty\n";
    }

    return 0;
}

