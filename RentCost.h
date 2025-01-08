#ifndef RENTCOST_H
#define RENTCOST_H

#include "Cost.h"

class RentCost : public Cost {
private:
    double amount;  // Iznos tro�ka rentiranja

public:
    RentCost(double amount);  // Konstruktor
    void displayCost() const override;  // Prikaz rent tro�ka
    double getCostAmount() const override;  // Dohvatanje rent tro�ka
};

#endif // RENTCOST_H
