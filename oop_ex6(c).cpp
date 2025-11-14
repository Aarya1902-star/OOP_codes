#include <iostream>
using namespace std;

class vehicle {
protected:
    string brand;
    string model;
public:
    void accept_vehicle() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
    }
    void display_vehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

class car : public vehicle {
protected:
    string type;
public:
    void accept_car() {
        accept_vehicle();
        cout << "Enter type: ";
        cin >> type;
    }
    void display_car() {
        display_vehicle();
        cout << "Type: " << type << endl;
    }
};

class electric_car : public car {
    int battery_capacity;
public:
    void accept_electric_car() {
        accept_car();
        cout << "Enter battery capacity (kWh): ";
        cin >> battery_capacity;
    }
    void display_electric_car() {
        display_car();
        cout << "Battery Capacity: " << battery_capacity << " kWh" << endl;
    }
};

int main() {
    electric_car ec;
    cout << "Enter details of electric car:\n";
    ec.accept_electric_car();
    cout << "\nElectric Car Details:\n";
    ec.display_electric_car();
    return 0;
}

