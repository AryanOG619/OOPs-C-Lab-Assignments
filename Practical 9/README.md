# Practical 9: STD::MOVE IN UTILITY

## Aim
To write a C++ program demonstrating std::move and move semantics using move constructors and unique_ptr for efficient resource ownership transfer.

## Concepts Used
- Move Semantics
- std::move
- Move Constructor
- Rvalue Reference
- unique_ptr
- make_unique
- noexcept
- Deleted Copy Constructor
- Deleted Copy Assignment Operator
- Resource Ownership Transfer

## Problem Statement
Develop a C++ program for a real-world Media Resource Management System using std::move and move semantics. The program demonstrates the transfer of ownership of dynamically allocated resources from one object to another without unnecessary copying.

## Description
The program consists of the following components:

1. **MediaResource:** A class that stores the media title and resource ID using a string and unique_ptr.

2. **Constructor:** Initializes the media title and dynamically allocates memory for the resource ID using make_unique.

3. **Move Constructor:** Transfers the title and resource ownership from the source object to the destination object using std::move.

4. **Deleted Copy Constructor:** Prevents copying of MediaResource objects.

5. **Deleted Copy Assignment Operator:** Prevents copy assignment between MediaResource objects.

6. **show():** Displays the media title and resource ID. It also checks whether the resource ownership has been transferred.

The main function creates a source object, transfers its resources to a destination object and displays the details before and after the move operation.

## Technologies Used
- **Language:** C++
- **IDE:** Dev-C++
- **Libraries:** iostream, memory, string, utility
- **Compiler Standard:** C++14 or later

## Sample Output
```text
Before move:
Title: Nature Documentary
Resource ID: 204

After move - destination:
Title: Nature Documentary
Resource ID: 204
After move - source:
Title:
Resource ownership: transferred
```

## Learning Outcomes
- Understand std::move and move semantics.
- Implement move constructors using rvalue references.
- Understand unique_ptr and make_unique.
- Transfer ownership of dynamically allocated resources.
- Prevent unnecessary copying using deleted copy operations.
- Understand efficient resource management in C++.

## Conclusion
Successfully implemented a Media Resource Management System using C++. Demonstrated std::move, move constructors, unique_ptr and resource ownership transfer to understand efficient memory and resource management without unnecessary copying.
