#include <iostream>
using namespace std;

// -------------------- Base Class --------------------
class ILogin {
protected:
    string name;
    string password;

public:
    // Virtual Function
    virtual void accept() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Password: ";
        cin >> password;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Password: " << password << endl;
    }
};

// -------------------- Derived Class 1 --------------------
class EmailLogin : public ILogin {
private:
    string emailID;

public:
    void accept() {
        cout << "\n--- Email Login Details ---\n";
        ILogin::accept();
        cout << "Enter Email ID: ";
        cin >> emailID;
    }

    void display() {
        cout << "\n--- Email Login Info ---\n";
        cout << "Name: " << name << endl;
        cout << "Password: " << password << endl;
        cout << "Email ID: " << emailID << endl;
    }
};

// -------------------- Derived Class 2 --------------------
class MembershipLogin : public ILogin {
private:
    int memberID;

public:
    void accept() {
    
        ILogin::accept();
        cout << "Enter Membership ID: ";
        cin >> memberID;
    }

    void display() {

        cout << "Name: " << name << endl;
        cout << "Password: " << password << endl;
        cout << "Membership ID: " << memberID << endl;
    }
};

int main() {
    ILogin* ptr;

    EmailLogin e;
    MembershipLogin m;

    // Email Login
    ptr = &e;
    ptr->accept();
    ptr->display();

    // Membership Login
    ptr = &m;
    ptr->accept();
    ptr->display();

    return 0;
}

