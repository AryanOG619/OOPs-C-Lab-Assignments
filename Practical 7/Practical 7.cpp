#include <iostream>
#include <string>
using namespace std;

// Class to demonstrate compile-time polymorphism
class Receipt {
public:
    // Function to print receipt item without amount
    void print(string item) {
        cout << "Receipt item: " << item << endl;
    }

    // Overloaded function to print receipt item with amount
    void print(string item, double amount) {
        cout << "Receipt item: " << item
             << ", Amount: Rs. " << amount << endl;
    }
};

// Abstract base class for different payment methods
class Payment {
public:
    // Pure virtual function to process payment
    virtual void process(double amount) = 0;

    // Virtual destructor for safe destruction of derived objects
    virtual ~Payment() {}
};

// Derived class to implement card payment
class CardPayment : public Payment {
public:
    // Overriding process() for card payment
    void process(double amount) override {
        cout << "Card payment processed: Rs. "
             << amount << endl;
    }
};

// Derived class to implement UPI payment
class UpiPayment : public Payment {
public:
    // Overriding process() for UPI payment
    void process(double amount) override {
        cout << "UPI payment processed: Rs. "
             << amount << endl;
    }
};

// Main function: program execution starts here
int main() {

    // Creating an object of Receipt class
    Receipt r;

    // Demonstrating compile-time polymorphism
    // Calling overloaded print() functions
    r.print("Coffee");
    r.print("Laptop", 55000);

    // Creating objects of different payment classes
    CardPayment card;
    UpiPayment upi;

    // Base class pointer pointing to CardPayment object
    Payment* p = &card;

    // Demonstrating runtime polymorphism
    // Calls the overridden CardPayment function
    p->process(1200);

    // Base class pointer now points to UpiPayment object
    p = &upi;

    // Calls the overridden UpiPayment function
    p->process(850);

    return 0;
}