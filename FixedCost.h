#ifndef FIXEDCOST_H
#define FIXEDCOST_H

#include "Cost.h"

class FixedCost : public Cost {
private:
    double amount;  // Iznos fiksnog tro�ka

public:
    FixedCost(double amount);  // Konstruktor
    void displayCost() const override;  // Prikaz fiksnog tro�ka
    double getCostAmount() const override;  // Dohvatanje fiksnog tro�ka
};

#endif // FIXEDCOST_H
