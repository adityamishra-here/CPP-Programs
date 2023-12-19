#include <iostream>
using namespace std;

// Base class: Vehicle
class Vehicle {
public:
    int speed;
};

// Intermediate class: Car
class Car : public Vehicle {
public:
    int km;
};

// Derived class: SportsCar
class SportsCar : public Car {
public:
    int rpm;

    void display() {
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Kilometers: " << km << " km" << endl;
        cout << "RPM: " << rpm << endl;
    }
};

int main() {
    // Create an object of the derived class SportsCar
    SportsCar myCar;

    // Assign values to the member variables
    myCar.speed = 120;
    myCar.km = 5000;
    myCar.rpm = 6000;

    // Display car details
    myCar.display();

    return 0;
}

/*
OUTPUT:
Speed: 120 km/h
Kilometers: 5000 km
RPM: 6000


*/
