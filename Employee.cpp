#include "Employee.h"

// Konstruktor
Employee::Employee(const std::string& name, double salary)
    : name(name), salary(salary) {}

// Destruktor
Employee::~Employee() {}

// Prikaz informacija o zaposlenom
void Employee::displayInfo() const {
    std::cout << "Name: " << name << ", Salary: " << salary << std::endl;
}

// Dohvatanje plate zaposlenog
double Employee::getSalary() const {
    return salary;
}
