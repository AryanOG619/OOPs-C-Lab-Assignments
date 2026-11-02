#include <iostream>
#include <stdexcept>
using namespace std;

// Main function: program execution starts here
int main() {

    // Initial bank balance and withdrawal amount
    double balance = 5000.0;
    double amount;

    // Display available bank balance
    cout << "Available balance: Rs. " << balance << endl;
    cout << "Enter withdrawal amount: ";

    // Check whether the entered input is numeric
    if (!(cin >> amount)) {
        cout << "Invalid input: Please enter a numeric amount." << endl;
        return 0;
    }

    // Try block contains the withdrawal operation
    try {

        // Throw exception if withdrawal amount is zero or negative
        if (amount <= 0)
            throw invalid_argument("Withdrawal amount must be positive.");

        // Throw exception if withdrawal exceeds available balance
        if (amount > balance)
            throw runtime_error("Insufficient balance.");

        // Deduct withdrawal amount from available balance
        balance -= amount;

        // Display successful transaction details
        cout << "Withdrawal successful." << endl;
        cout << "Remaining balance: Rs. " << balance << endl;
    }

    // Catch block handles invalid withdrawal amounts
    catch (const invalid_argument& e) {
        cout << "Invalid input: " << e.what() << endl;
    }

    // Catch block handles insufficient balance
    catch (const runtime_error& e) {
        cout << "Transaction failed: " << e.what() << endl;
    }

    return 0;
}