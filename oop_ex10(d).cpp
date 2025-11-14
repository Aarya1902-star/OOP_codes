#include <iostream>
using namespace std;

template <class T>
class Stack {
private:
    T arr[10];     // simple fixed-size stack
    int top;

public:
    Stack() {
        top = -1;
    }

    // push element
    void push(T value) {
        if (top == 9) {
            cout << "Stack Overflow!\n";
        } else {
            arr[++top] = value;
            cout << value << " pushed\n";
        }
    }

    // pop element
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!\n";
        } else {
            cout << arr[top--] << " popped\n";
        }
    }

    // display stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<int> s;   // stack of integers

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();
    s.pop();

    s.display();

    return 0;
}

