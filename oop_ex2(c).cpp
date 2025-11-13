#include<iostream>
using namespace std;

class staff {
    string name;
    string post;
public:
    void getdata() {
        cout << "Enter staff name: ";
        cin >> name;
        cout << "Enter post: ";
        cin >> post;
    }
    string getpost() {
        return post;
    }
    string getname() {
        return name;
    }
};

int main() {
    staff s[5];
    cout << "Enter details for 5 staff members:\n";
    for (int i = 0; i < 5; i++) {
        s[i].getdata();
    }
    cout << "\nStaff members with HOD post:\n";
    for (int i = 0; i < 5; i++) {
        if (s[i].getpost() == "HOD") {
            cout << s[i].getname() << endl;
        }
    }
    return 0;
}

