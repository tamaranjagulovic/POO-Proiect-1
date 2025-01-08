#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <vector>

class Manager : public Employee {
private:
    std::vector<Employee*> teamMembers;  // Tim pod menadžerom

public:
    Manager(const std::string& name, double salary);  // Konstruktor
    ~Manager();  // Destruktor

    void addTeamMember(Employee* emp);  // Dodavanje člana tima
    void displayInfo() const override;  // Prikaz menadžera i njegovog tima
};

#endif // MANAGER_H

