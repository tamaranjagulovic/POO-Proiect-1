#include "SalaryCost.h"
#include <iostream>

// Konstruktor
SalaryCost::SalaryCost(double amount) : amount(amount) {}

// Prikaz plate
void SalaryCost::displayCost() const {
    std::cout << "Salary Cost: " << amount << std::endl;
}

// Dohvatanje plate
double SalaryCost::getCostAmount() const {
    return amount;
}
