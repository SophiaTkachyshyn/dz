#pragma once
#include "travel.h"

class CarVacation : public Travel {
private:
    double km;

public:
    CarVacation();
    CarVacation(Transport* T, const string& place, double km);
    CarVacation(const CarVacation& C);
    virtual ~CarVacation();

    virtual double calculateCost() const override;
    virtual void printTravel() const override;
    void readFrom(istream& is);
    int getMembers() const;
};