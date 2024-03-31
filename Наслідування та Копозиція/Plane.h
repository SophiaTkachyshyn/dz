#pragma once
#include "Transport.h"

class Plane : public Transport {
private:
    std::string airline;
    float ticketCost;
public:
    Plane(const std::string& _airline, float _ticketCost);
    virtual void print() const override;
    virtual float calculateCost() const override;
    virtual void readFromStream(std::istream& in) override;
};