#include "Manager.h"
#include <iostream>

// Konstruktor
Manager::Manager(const std::string& name, double salary)
    : Employee(name, salary) {}

// Destruktor
Manager::~Manager() {
    // Oslobađanje resursa ako je potrebno
}

// Dodavanje člana tima
void Manager::addTeamMember(Employee* emp) {
    teamMembers.push_back(emp);
}

// Prikaz menadžera i tima
void Manager::displayInfo() const {
    Employee::displayInfo();  // Prikaz menadžera
    std::cout << "Manager's Team: " << std::endl;
    for (const auto& member : teamMembers) {
        member->displayInfo();  // Prikaz svakog člana tima
    }
}
