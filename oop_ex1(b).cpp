#include<iostream>
using namespace std;

class book {
    string book_name;
    float price;
    int no_of_pages;
public:
    void getdata() {
        cout << "Enter book name: ";
        cin >> book_name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter number of pages: ";
        cin >> no_of_pages;
    }
    void showdata() {
        cout << "\nBook Details\n";
        cout << "Book Name: " << book_name << endl;
        cout << "Price: " << price << endl;
        cout << "Number of Pages: " << no_of_pages << endl;
    }
    float getprice() {
        return price;
    }
};

int main() {
    book b1, b2;
    cout << "Enter details for book 1:\n";
    b1.getdata();
    cout << "Enter details for book 2:\n";
    b2.getdata();

    if (b1.getprice() > b2.getprice()) {
        cout << "\nBook with greater price:\n";
        b1.showdata();
    } else if (b2.getprice() > b1.getprice()) {
        cout << "\nBook with greater price:\n";
        b2.showdata();
    } else {
        cout << "\nBoth books have the same price.\n";
        b1.showdata();
        b2.showdata();
    }
    return 0;
}

