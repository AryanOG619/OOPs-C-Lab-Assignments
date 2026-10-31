#include <iostream>
#include <string>
using namespace std;

// Class to manage hospital billing information
class HospitalBill {
    // Private data members
    string patientName;
    double consultation, tests, medicines;

    // Static data member shared by all objects
    static int billsIssued;

public:
    // Constructor to initialize patient details and billing amounts
    HospitalBill(string name, double c, double t, double m) {
        // Using this pointer to initialize current object's data members
        this->patientName = name;
        this->consultation = c;
        this->tests = t;
        this->medicines = m;

        // Increment bill count whenever a new bill is created
        billsIssued++;
    }

    // Inline function to calculate the total hospital bill
    inline double total() const {
        return consultation + tests + medicines;
    }

    // Static member function to display billing desk information
    static void showDesk() {
        cout << "Billing Desk: CityCare Hospital" << endl;
        cout << "Bills issued: " << billsIssued << endl;
    }

    // Declaring BillingAuditor as a friend class
    // It can access private members of HospitalBill
    friend class BillingAuditor;
};

// Initializing the static data member outside the class
int HospitalBill::billsIssued = 0;

// Friend class to access and display private billing details
class BillingAuditor {
public:
    // Function to print the complete patient bill
    void printBill(const HospitalBill& b) {
        cout << "Patient: " << b.patientName << endl;
        cout << "Consultation: Rs. " << b.consultation << endl;
        cout << "Tests: Rs. " << b.tests << endl;
        cout << "Medicines: Rs. " << b.medicines << endl;

        // Calling inline function to display the total bill
        cout << "Total: Rs. " << b.total() << endl;
    }
};

// Main function: program execution starts here
int main() {
    // Creating a HospitalBill object with patient details and charges
    HospitalBill bill("Aarav", 500, 750, 350);

    // Creating an object of the friend class
    BillingAuditor auditor;

    // Displaying hospital billing desk information
    HospitalBill::showDesk();

    // Displaying the patient's complete bill using the auditor
    auditor.printBill(bill);

    return 0;
}