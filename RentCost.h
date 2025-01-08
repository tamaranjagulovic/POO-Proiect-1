#ifndef RENTCOST_H
#define RENTCOST_H

#include "Cost.h"

class RentCost : public Cost {
private:
    double amount;  // Iznos troška rentiranja

public:
    RentCost(double amount);  // Konstruktor
    void displayCost() const override;  // Prikaz rent troška
    double getCostAmount() const override;  // Dohvatanje rent troška
};

#endif // RENTCOST_H
