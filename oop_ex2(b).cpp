#include<iostream>
using namespace std;

class account {
    int account_no;
    float balance;
public:
    void getdata() {
        cout << "Enter account number: ";
        cin >> account_no;
        cout << "Enter balance: ";
        cin >> balance;
    }
    void add_interest() {
        if (balance <= 5000) {
            balance += balance * 0.10;
        }
    }
    void showdata() {
        cout << "Account Number: " << account_no << endl;
        cout << "Balance: " << balance << endl;
    }
    bool eligible() {
        return balance <= 5000 * 1.10;  // Checks original balance condition after interest
    }
};

int main() {
    account acc[10];
    cout << "Enter details for 10 accounts:\n";
    for (int i = 0; i < 10; i++) {
        acc[i].getdata();
        acc[i].add_interest();
    }
    cout << "\nAccounts with balance <= 5000 (after adding 10% interest):\n";
    for (int i = 0; i < 10; i++) {
        if (acc[i].eligible()) {
            acc[i].showdata();
            cout << endl;
        }
    }
    return 0;
}

