/*Q8. Write a C++ program that defines a class `Employee` with static data 
members to track the total number of employees and a unique employee ID for
each employee. Implement static functions to display the total number of 
employees.Create multiple `Employee` objects to test the functionality.*/
#include<iostream>
using namespace std;
class Employee {
private:
    static int totalEmployees;
    int employeeID;   

public:

    Employee() {
        totalEmployees++;
        employeeID = totalEmployees;
    }
    static void displayTotalEmployees() {
        cout << "Total Employees: " << totalEmployees << endl;
    }
    void displayEmployeeID() const {
        cout << "Employee ID: " << employeeID << endl;
    }
};
int Employee::totalEmployees = 0;
int main() {
  
    Employee emp1, emp2, emp3;
    Employee::displayTotalEmployees(); // Should print 3
    emp1.displayEmployeeID(); // Should print 1
    emp2.displayEmployeeID(); // Should print 2
    emp3.displayEmployeeID(); // Should print 3

    return 0;
}
