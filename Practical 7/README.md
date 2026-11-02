# Practical 7: POLYMORPHISM

## Aim
To write a C++ program demonstrating compile-time and runtime polymorphism using function overloading, function overriding, virtual functions, and base class pointers.

## Concepts Used
- Polymorphism
- Compile-time Polymorphism
- Runtime Polymorphism
- Function Overloading
- Function Overriding
- Virtual Functions
- Pure Virtual Functions
- Abstract Class
- Base Class Pointer

## Problem Statement
Develop a C++ program for a real-world Payment and Receipt Management System using polymorphism. The program demonstrates function overloading for receipt generation and function overriding for processing different payment methods such as Card Payment and UPI Payment.

## Description
The program consists of the following classes:

1. **Receipt:** Demonstrates compile-time polymorphism using two overloaded `print()` functions to display receipt details with or without an amount.

2. **Payment:** An abstract base class containing a pure virtual function `process()` and a virtual destructor.

3. **CardPayment:** Derived class that overrides the `process()` function to display card payment details.

4. **UpiPayment:** Derived class that overrides the `process()` function to display UPI payment details.

A base class pointer is used to demonstrate runtime polymorphism by calling the appropriate overridden function depending on the derived class object.

## Technologies Used
- **Language:** C++
- **IDE:** Dev-C++
- **Libraries:** iostream, string

## Sample Output
```text
Receipt item: Coffee
Receipt item: Laptop, Amount: Rs. 55000
Card payment processed: Rs. 1200
UPI payment processed: Rs. 850
```

## Learning Outcomes
- Understand compile-time and runtime polymorphism.
- Implement function overloading and function overriding.
- Understand virtual functions and pure virtual functions.
- Use abstract classes and base class pointers.
- Apply polymorphism to a real-world payment management system.

## Conclusion
Successfully implemented a Payment and Receipt Management System using C++. Demonstrated compile-time polymorphism through function overloading and runtime polymorphism through function overriding, virtual functions, and base class pointers.

