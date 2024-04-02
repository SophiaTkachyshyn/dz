#pragma once
#include "travel.h"

class SeaVacation : public Travel {
private:
    int members;

public:
    SeaVacation();
    SeaVacation(Transport* T, const string& place, int members);
    SeaVacation(const SeaVacation& S);
    virtual ~SeaVacation();

    virtual double calculateCost() const override;
    virtual void printTravel() const override;
    void readFrom(istream& is);
    int getMembers() const;

};