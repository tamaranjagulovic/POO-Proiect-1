#ifndef SALARYCOST_H
#define SALARYCOST_H

#include "Cost.h"

class SalaryCost : public Cost {
private:
    double amount;  // Iznos plate

public:
    SalaryCost(double amount);  // Konstruktor
    void displayCost() const override;  // Prikaz plate
    double getCostAmount() const override;  // Dohvatanje plate
};

#endif // SALARYCOST_H
