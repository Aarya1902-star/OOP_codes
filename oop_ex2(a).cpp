#include<iostream>
using namespace std;

class city {
    string name;
    int population;
public:
    void getdata() {
        cout << "Enter city name: ";
        cin >> name;
        cout << "Enter population: ";
        cin >> population;
    }
    void showdata() {
        cout << "City Name: " << name << endl;
        cout << "Population: " << population << endl;
    }
    int getpopulation() {
        return population;
    }
    string getname() {
        return name;
    }
};

int main() {
    city c[5];
    int maxpop = 0, index = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter details for city " << i+1 << ":\n";
        c[i].getdata();
    }

    cout << "\nAll City Details:\n";
    for (int i = 0; i < 5; i++) {
        c[i].showdata();
        cout << endl;
        if (c[i].getpopulation() > maxpop) {
            maxpop = c[i].getpopulation();
            index = i;
        }
    }
    cout << "\nCity with highest population:\n";
    c[index].showdata();

    return 0;
}

