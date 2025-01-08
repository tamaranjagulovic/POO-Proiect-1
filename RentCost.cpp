#include "RentCost.h"
#include <iostream>

// Konstruktor
RentCost::RentCost(double amount) : amount(amount) {}

// Prikaz rent tro�ka
void RentCost::displayCost() const {
    std::cout << "Rent Cost: " << amount << std::endl;
}

// Dohvatanje rent tro�ka
double RentCost::getCostAmount() const {
    return amount;
}
