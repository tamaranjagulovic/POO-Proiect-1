#include "FixedCost.h"
#include <iostream>

// Konstruktor
FixedCost::FixedCost(double amount) : amount(amount) {}

// Prikaz fiksnog troška
void FixedCost::displayCost() const {
    std::cout << "Fixed Cost: " << amount << std::endl;
}

// Dohvatanje fiksnog troška
double FixedCost::getCostAmount() const {
    return amount;
}
