#include <iostream>
#include <cstdint>
using namespace std;

// Base class representing a general vehicle
class Vehicle {
public:
    // Virtual function to display vehicle type
    virtual void showType() const {
        cout << "Vehicle type: General vehicle" << endl;
    }

    // Virtual destructor for safe destruction of derived objects
    virtual ~Vehicle() {}
};

// Derived class representing an electric car
class ElectricCar : public Vehicle {
public:
    // Overriding the base class function
    void showType() const override {
        cout << "Vehicle type: Electric car" << endl;
    }

    // Function to display electric car battery range
    void showBattery() const {
        cout << "Battery range: 420 km" << endl;
    }
};

// Main function: program execution starts here
int main() {

    // Demonstrating static_cast
    // Converting rental rate from double to int
    double dailyRate = 1499.75;
    int wholeRate = static_cast<int>(dailyRate);

    cout << "Daily rental rate (whole rupees): "
         << wholeRate << endl;

    // Creating an ElectricCar object
    ElectricCar car;

    // Base class pointer pointing to derived class object
    Vehicle* vehicle = &car;

    // Demonstrating runtime polymorphism
    vehicle->showType();

    // Demonstrating dynamic_cast
    // Safely converting base class pointer to derived class pointer
    ElectricCar* electric = dynamic_cast<ElectricCar*>(vehicle);

    // Checking whether the type conversion was successful
    if (electric != nullptr)
        electric->showBattery();
    else
        cout << "Electric car details unavailable." << endl;

    // Demonstrating const_cast
    int availableSeats = 5;

    // Creating a constant reference to the variable
    const int& readOnlySeats = availableSeats;

    // Removing constness from the reference
    int& editableSeats = const_cast<int&>(readOnlySeats);

    // Modifying the original variable through the reference
    editableSeats = 7;

    cout << "Updated seat capacity: "
         << availableSeats << endl;

    // Demonstrating reinterpret_cast
    // Converting the address of a variable into an integer representation
    uintptr_t addressValue =
        reinterpret_cast<uintptr_t>(&availableSeats);

    cout << "Seat variable address as integer: "
         << addressValue << endl;

    return 0;
}
