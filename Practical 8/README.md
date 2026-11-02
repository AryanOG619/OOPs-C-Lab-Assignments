# Practical 8 – Exception Handling

## Aim
To implement exception handling in C++ using try, throw and catch mechanisms.

## Problem Statement
Develop a Bank Withdrawal Management System that accepts a withdrawal amount, validates the input, checks the available balance and handles errors using exception handling.

## Concepts Implemented
- Exception Handling
- try, throw and catch
- invalid_argument exception
- runtime_error exception
- what() function
- Input Validation

## Technologies Used
- **Language:** C++
- **IDE:** Dev-C++
- **Libraries:** iostream, stdexcept

## Program Description
The program simulates a basic bank withdrawal system with an initial balance of Rs. 5000.

It checks the entered withdrawal amount and handles the following conditions:

1. Successful withdrawal when the amount is valid.
2. Invalid withdrawal amount when the amount is zero or negative.
3. Insufficient balance when the withdrawal exceeds the available balance.
4. Non-numeric input when the entered value is not a number.

## Exception Handling
| Exception / Mechanism | Purpose |
|---|---|
| try | Contains withdrawal validation and transaction logic |
| throw | Generates exceptions when errors occur |
| catch | Handles the generated exceptions |
| invalid_argument | Handles zero or negative amounts |
| runtime_error | Handles insufficient balance |
| what() | Displays the exception message |

## Sample Output

```text
Available balance: Rs. 5000
Enter withdrawal amount: 1000
Withdrawal successful.
Remaining balance: Rs. 4000
```

## Test Cases
- Valid withdrawal amount
- Zero withdrawal amount
- Negative withdrawal amount
- Withdrawal exceeding available balance
- Non-numeric input
- Withdrawal equal to available balance

## Result
The Bank Withdrawal Management System was successfully implemented using C++. Exception handling was used to manage invalid inputs and transaction errors while displaying appropriate messages.

## Conclusion
This practical demonstrated the use of try, throw and catch mechanisms along with different exception types to handle runtime errors in a real-world banking application.

---
**Practical No.:** 8  
**Subject:** Object Oriented Programming using C++
