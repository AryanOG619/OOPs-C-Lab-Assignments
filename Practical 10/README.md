# Practical 10: Templates

## Aim
To implement class templates and function templates in C++ and understand how templates support generic programming and code reusability.

## Concepts Used
- Templates in C++
- Class Templates
- Function Templates
- Template Parameters
- Constructors and Objects
- Generic Programming

## Problem Statement
To develop a simple Inventory Management System using class and function templates. The program stores inventory item details using different data types and compares values using a generic function.

## Description
This program demonstrates two types of templates in C++:

1. **Class Template:** The `InventoryItem` class template stores an item name and quantity. It is used to create objects with both `int` and `double` data types.
2. **Function Template:** The `larger()` function template compares two values of the same data type and returns the greater value.

The program uses cardboard boxes and machine oil as inventory examples.

## Technologies Used
- **Language:** C++
- **IDE:** Dev-C++
- **Header Files:** `<iostream>`, `<string>`

## Sample Output

```text
Item: Cardboard Boxes, Quantity: 120
Item: Machine Oil (litres), Quantity: 45.5
Larger stock value: 120
Higher measured quantity: 45.5
```

## Learning Outcomes
- Understood the concept and purpose of templates in C++.
- Implemented a class template using different data types.
- Implemented a function template for comparing values.
- Learned how templates improve code reusability and flexibility.
- Understood the basics of generic programming.

## Conclusion
Successfully implemented class templates and function templates in C++. The practical demonstrated how templates allow the same class and function logic to work with different data types, reducing code duplication and improving reusability.
