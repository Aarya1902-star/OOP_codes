#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
};

// function to sort records by age
void sortRecords(Person p[], int n) {
    Person temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(p[i].age > p[j].age) {   // sort by AGE
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

// function to search by age
int searchRecord(Person p[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(p[i].age == key)
            return i;
    }
    return -1;
}
int main() {
    int n;
    cout << "Enter number of records: ";
    cin >> n;

    Person p[50];

    // input
    for(int i = 0; i < n; i++) {
        cout << "\nEnter name: ";
        cin >> p[i].name;
        cout << "Enter age: ";
        cin >> p[i].age;
    }

    // sort by age
    sortRecords(p, n);
    cout << "\nSorted Records (by age):\n";
    for(int i = 0; i < n; i++) {
        cout << p[i].name << "  " << p[i].age << endl;
    }

    // search for age
    int key;
    cout << "\nEnter age to search: ";
    cin >> key;

    int pos = searchRecord(p, n, key);

    if(pos != -1) {
        cout << "Record Found:\n";
        cout << p[pos].name << "  " << p[pos].age << endl;
    } else {
        cout << "Record NOT FOUND.\n";
    }

    return 0;
}

