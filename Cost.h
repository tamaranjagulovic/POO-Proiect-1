#ifndef COST_H
#define COST_H

class Cost {
public:
    virtual void displayCost() const = 0;  // Virtuelna funkcija za prikazivanje tro�ka
    virtual double getCostAmount() const = 0;  // Virtuelna funkcija za dohvat iznosa tro�ka
    virtual ~Cost() {}  // Virtuelni destruktor
};

#endif // COST_H