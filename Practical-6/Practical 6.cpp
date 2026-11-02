#include <iostream>
#include <string>
using namespace std;

// Base class representing a person
class Person {
protected:
    string name;

public:
    // Constructor to initialize person's name
    Person(string n) : name(n) {}

    // Function to display person details
    void showPerson() const {
        cout << "Name: " << name << endl;
    }

    // Virtual destructor for safe destruction of derived objects
    virtual ~Person() {}
};

// Single inheritance: Employee inherits from Person
class Employee : public Person {
protected:
    int id;

public:
    // Constructor to initialize employee details
    Employee(string n, int i) : Person(n), id(i) {}

    // Function to display employee details
    void showEmployee() const {
        showPerson();
        cout << "Employee ID: " << id << endl;
    }
};

// Multilevel inheritance: Faculty inherits from Employee
class Faculty : public Employee {
public:
    // Constructor to initialize faculty details
    Faculty(string n, int i) : Employee(n, i) {}

    // Function to display faculty details
    void showFaculty() const {
        showEmployee();
        cout << "Role: Faculty" << endl;
    }
};

// Independent class representing a researcher
class Researcher {
protected:
    string area;

public:
    // Constructor to initialize research area
    Researcher(string a) : area(a) {}

    // Function to display research information
    void showResearch() const {
        cout << "Research area: " << area << endl;
    }
};

// Multiple inheritance: ResearchFaculty inherits from
// both Employee and Researcher
class ResearchFaculty : public Employee, public Researcher {
public:
    // Constructor to initialize both base classes
    ResearchFaculty(string n, int i, string a)
        : Employee(n, i), Researcher(a) {}

    // Function to display employee and research details
    void show() const {
        showEmployee();
        showResearch();
    }
};

// Hierarchical inheritance: AdminStaff also inherits from Person
class AdminStaff : public Person {
public:
    // Constructor to initialize administrative staff
    AdminStaff(string n) : Person(n) {}

    // Function to display administrative staff details
    void show() const {
        showPerson();
        cout << "Role: Administrative Staff" << endl;
    }
};

// Hybrid inheritance: TeachingAssistant inherits from
// Faculty and Researcher
class TeachingAssistant : public Faculty, public Researcher {
public:
    // Constructor to initialize both inherited classes
    TeachingAssistant(string n, int i, string a)
        : Faculty(n, i), Researcher(a) {}

    // Function to display teaching and research details
    void show() const {
        showFaculty();
        showResearch();
        cout << "Role: Teaching Assistant" << endl;
    }
};

// Main function: execution starts here
int main() {

    // Demonstrating Single Inheritance
    cout << "SINGLE INHERITANCE" << endl;
    Employee e("Meera", 101);
    e.showEmployee();

    // Demonstrating Multilevel Inheritance
    cout << "\nMULTILEVEL INHERITANCE" << endl;
    Faculty f("Kabir", 102);
    f.showFaculty();

    // Demonstrating Multiple Inheritance
    cout << "\nMULTIPLE INHERITANCE" << endl;
    ResearchFaculty r("Nisha", 103, "Robotics");
    r.show();

    // Demonstrating Hierarchical Inheritance
    cout << "\nHIERARCHICAL INHERITANCE" << endl;
    AdminStaff a("Rohan");
    a.show();

    // Demonstrating Hybrid Inheritance
    cout << "\nHYBRID INHERITANCE" << endl;
    TeachingAssistant t("Isha", 104, "Computer Vision");
    t.show();

    return 0;
}
