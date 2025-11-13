#include<iostream>
using namespace std;

class book {
    string book_title;
    string author_name;
    float price;
public:
    void getdata() {
        cout << "Enter book title: ";
        cin >> book_title;
        cout << "Enter author name: ";
        cin >> author_name;
        cout << "Enter price: ";
        cin >> price;
    }
    void showdata() {
        cout << "\nBook Information:\n";
        cout << "Title: " << book_title << endl;
        cout << "Author: " << author_name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    book *b;
    b = new book;
    b->getdata();
    b->showdata();
    delete b; // Free the allocated memory
    return 0;
}

