#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

class Employee {
protected:
    std::string name;   // Ime zaposlenog
    double salary;      // Plata zaposlenog

public:
    Employee(const std::string& name, double salary);  // Konstruktor
    virtual ~Employee();  // Destruktor

    virtual void displayInfo() const;  // Prikaz informacija
    virtual double getSalary() const;  // Dohvatanje plate
};

#endif // EMPLOYEE_H

