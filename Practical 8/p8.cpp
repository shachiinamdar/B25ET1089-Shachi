#include <iostream>
#include <string>
using namespace std;

// Base class to store employee basic information
class Employee
{
protected:
    int id;
    string name;
    string designation;
    string joiningDate;

public:
    // Function to accept employee details
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Designation: ";
        getline(cin, designation);

        cout << "Enter Joining Date: ";
        getline(cin, joiningDate);
    }
};

// Base class to store department information
class Department
{
protected:
    string departmentName;
    string departmentHead;

public:
    // Function to accept department details
    void getDepartment()
    {
        cout << "Enter Department Name: ";
        getline(cin, departmentName);

        cout << "Enter Department Head: ";
        getline(cin, departmentHead);
    }
};

// Derived class using multiple inheritance
class Profile : public Employee, public Department
{
public:
    // Function to display employee profile
    void display()
    {
        cout << "\n--- Employee Profile ---" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Joining Date: " << joiningDate << endl;
        cout << "Department: " << departmentName << endl;
        cout << "Department Head: " << departmentHead << endl;
    }
};

int main()
{
    // Create object of derived class
    Profile p;

    // Accept employee and department details
    p.getEmployee();
    p.getDepartment();

    // Display complete profile
    p.display();

    return 0;
}
