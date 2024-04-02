#pragma once
#include "transport.h"

class Travel {
protected:
    Transport* T;
    string place;

public:
    Travel();
    Travel(Transport* T, const string& place);
    Travel(const Travel& T);
    virtual ~Travel();

    virtual double calculateCost() const = 0;
    virtual void printTravel() const = 0;
    void readFrom(istream& is);
    const Transport* getTransport() const;
    virtual int getMembers() const = 0;
};

istream& operator>>(istream& is, Travel& T);






