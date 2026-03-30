#include <iostream>
using namespace std;

// Parent Class
class Vehicle {
public:
    string brand;
    int speed;

    void start() {
        cout << "Vehicle is starting..." << endl;
    }
};

// Child Class (Single Inheritance)
class Car : public Vehicle {
public:
    int seats;

    void showCar() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
        cout << "Seats: " << seats << endl;
    }
};

// Grandchild Class (Multilevel Inheritance)
class ElectricCar : public Car {
public:
    int battery;

    void showElectric() {
        cout << "Battery: " << battery << " kWh" << endl;
    }
};

int main() {
    ElectricCar e1;

    // Parent properties
    e1.brand = "Tesla";
    e1.speed = 200;

    // Child properties
    e1.seats = 5;

    // Grandchild properties
    e1.battery = 75;

    // Functions
    e1.start();        // Vehicle
    e1.showCar();      // Car
    e1.showElectric(); // ElectricCar
}