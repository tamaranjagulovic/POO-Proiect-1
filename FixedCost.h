#ifndef FIXEDCOST_H
#define FIXEDCOST_H

#include "Cost.h"

class FixedCost : public Cost {
private:
    double amount;  // Iznos fiksnog troška

public:
    FixedCost(double amount);  // Konstruktor
    void displayCost() const override;  // Prikaz fiksnog troška
    double getCostAmount() const override;  // Dohvatanje fiksnog troška
};

#endif // FIXEDCOST_H
