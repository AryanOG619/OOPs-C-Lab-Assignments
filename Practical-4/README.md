Practical 4: Dynamic Memory

Subject
Object Oriented Programming

Practical Title
Dynamic Memory

Problem Statement
Develop a C++ program for a real-world Student Marks Management System that demonstrates the use of references, pointers, dynamic memory allocation using `new`, and memory deallocation using `delete[]`.

Objectives
* To understand and implement references and pointers in C++.
* To use dynamic memory allocation with the `new` operator.
* To release dynamically allocated memory using the `delete[]` operator.
* To implement input validation in a real-world problem.

Concepts Used
* References
* Pointers
* Address operator `&`
* Indirection operator `*`
* Dynamic memory allocation
* `new` operator
* `delete[]` operator
* Input validation

Real-World Implementation
The program implements a Student Marks Management System.
The number of students is entered by the user at runtime. Memory is dynamically allocated for student names and marks. Pointers are used to access marks, while a reference is used to update the marks. After completing the operations, the dynamically allocated memory is released using `delete[]`.

How the Program Works
1. The user enters the number of students.
2. The program validates the number of students.
3. Memory is dynamically allocated using `new`.
4. Student names and marks are entered.
5. Marks are validated between 0 and 100.
6. A pointer is used to access the student's marks.
7. A reference is used to update the marks.
8. The updated marks are displayed.
9. Dynamically allocated memory is released using `delete[]`.

Sample Input

Enter number of students: 2

Enter details of Student 1
Name: Rahul
Marks: 75

Enter details of Student 2
Name: Priya
Marks: 88

Sample Output

STUDENT MARKS MANAGEMENT SYSTEM
Enter number of students: 2

Enter details of Student 1
Name: Rahul
Marks: 75

Enter details of Student 2
Name: Priya
Marks: 88

--- Student Records ---

Student: Rahul
Original Marks: 75
Updated Marks: 80

Student: Priya
Original Marks: 88
Updated Marks: 93

Dynamic memory released successfully.

Validation

The program validates:
* Number of students must be between 1 and 50.
* Marks must be between 0 and 100.

Technologies Used
* Programming Language: C++
* Platform: GitHub
* Compiler/IDE: Any standard C++ compiler or IDE

Learning Outcome
This practical demonstrates how references and pointers work in C++, how memory can be allocated dynamically using `new`, and how dynamically allocated memory can be released using `delete[]`.
