#include "RentCost.h"
#include <iostream>

// Konstruktor
RentCost::RentCost(double amount) : amount(amount) {}

// Prikaz rent troška
void RentCost::displayCost() const {
    std::cout << "Rent Cost: " << amount << std::endl;
}

// Dohvatanje rent troška
double RentCost::getCostAmount() const {
    return amount;
}
