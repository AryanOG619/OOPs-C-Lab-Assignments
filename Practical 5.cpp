#include <iostream>
#include <string>
using namespace std;

class HospitalBill {
    string patientName;
    double consultation, tests, medicines;
    static int billsIssued;

public:
    HospitalBill(string name, double c, double t, double m) {
        this->patientName = name;
        this->consultation = c;
        this->tests = t;
        this->medicines = m;
        billsIssued++;
    }

    inline double total() const {
        return consultation + tests + medicines;
    }

    static void showDesk() {
        cout << "Billing Desk: CityCare Hospital" << endl;
        cout << "Bills issued: " << billsIssued << endl;
    }

    friend class BillingAuditor;
};

int HospitalBill::billsIssued = 0;

class BillingAuditor {
public:
    void printBill(const HospitalBill& b) {
        cout << "Patient: " << b.patientName << endl;
        cout << "Consultation: Rs. " << b.consultation << endl;
        cout << "Tests: Rs. " << b.tests << endl;
        cout << "Medicines: Rs. " << b.medicines << endl;
        cout << "Total: Rs. " << b.total() << endl;
    }
};

int main() {
    HospitalBill bill("Aarav", 500, 750, 350);
    BillingAuditor auditor;

    HospitalBill::showDesk();
    auditor.printBill(bill);

    return 0;
}

