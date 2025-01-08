#include <iostream>
#include <vector>
#include "Employee.h"
#include "Manager.h"
#include "SalaryCost.h"
#include "FixedCost.h"
#include "RentCost.h"

int main() {
    std::vector<Employee*> employees;

    // Unos podataka za zaposlene
    std::string name;
    double salary;
    int numEmployees;

    std::cout << "Enter number of employees: ";
    std::cin >> numEmployees;

    double totalSalaries = 0;  // Ukupne plate za sve zaposlene

    for (int i = 0; i < numEmployees; i++) {
        std::cout << "Enter name of employee " << i + 1 << ": ";
        std::cin >> name;
        std::cout << "Enter salary of employee " << i + 1 << ": ";
        std::cin >> salary;

        Employee* emp = new Employee(name, salary);
        employees.push_back(emp);

        totalSalaries += salary;  // Dodajemo platu zaposlenog na ukupne plate
    }

    // Unos podataka za menadžera
    std::cout << "Enter manager name: ";
    std::cin >> name;
    std::cout << "Enter manager salary: ";
    std::cin >> salary;

    Manager* manager = new Manager(name, salary);

    totalSalaries += salary;  // Dodajemo platu menadžera na ukupne plate

    // Dodavanje zaposlenih menadžeru
    int teamSize;
    std::cout << "Enter number of team members for manager: ";
    std::cin >> teamSize;

    for (int i = 0; i < teamSize; i++) {
        std::cout << "Enter name of team member " << i + 1 << ": ";
        std::cin >> name;
        std::cout << "Enter salary of team member " << i + 1 << ": ";
        std::cin >> salary;

        Employee* teamMember = new Employee(name, salary);
        manager->addTeamMember(teamMember);

        totalSalaries += salary;  // Dodajemo platu tima na ukupne plate
    }

    // Prikaz svih zaposlenih
    std::cout << "\nEmployees in the company:\n";
    for (const auto& emp : employees) {
        emp->displayInfo();
    }

    // Prikaz menadžera i tima
    std::cout << "\nManager and their team:\n";
    manager->displayInfo();

    // Unos troškova
    double amount;

    std::cout << "\nEnter salary cost: ";
    std::cin >> amount;
    SalaryCost salaryCost(amount);

    std::cout << "\nEnter fixed cost: ";
    std::cin >> amount;
    FixedCost fixedCost(amount);

    std::cout << "\nEnter rent cost: ";
    std::cin >> amount;
    RentCost rentCost(amount);

    // Prikaz svih troškova
    std::cout << "\nCosts:\n";
    salaryCost.displayCost();
    fixedCost.displayCost();
    rentCost.displayCost();

    // Prikaz ukupnih troškova za plate
    std::cout << "\nTotal salary cost for all employees and manager: " << totalSalaries << std::endl;

    return 0;
}
