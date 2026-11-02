#include <iostream>
#include <string>
using namespace std;

// Class template to store inventory items with different data types
template <class T>
class InventoryItem {
    string name;
    T quantity;

public:
    // Constructor to initialize item name and quantity
    InventoryItem(string n, T q) : name(n), quantity(q) {}

    // Function to display inventory item details
    void display() const {
        cout << "Item: " << name << ", Quantity: " << quantity << endl;
    }
};

// Function template to compare two values of the same data type
template <typename T>
T larger(T a, T b) {
    // Return the greater value using the conditional operator
    return (a > b) ? a : b;
}

// Main function: program execution starts here
int main() {
    // Creating an inventory item with integer quantity
    InventoryItem<int> boxes("Cardboard Boxes", 120);

    // Creating an inventory item with double quantity
    InventoryItem<double> oil("Machine Oil (litres)", 45.5);

    // Displaying the inventory item details
    boxes.display();
    oil.display();

    // Comparing two integer stock values using the function template
    cout << "Larger stock value: " << larger(120, 95) << endl;

    // Comparing two double quantity values using the function template
    cout << "Higher measured quantity: " << larger(45.5, 39.2) << endl;

    return 0;
}