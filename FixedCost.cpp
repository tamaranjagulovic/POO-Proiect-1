#include "FixedCost.h"
#include <iostream>

// Konstruktor
FixedCost::FixedCost(double amount) : amount(amount) {}

// Prikaz fiksnog tro�ka
void FixedCost::displayCost() const {
    std::cout << "Fixed Cost: " << amount << std::endl;
}

// Dohvatanje fiksnog tro�ka
double FixedCost::getCostAmount() const {
    return amount;
}
