#pragma once
#include "Journey.h"

class CarJourney : public Journey {
private:
    float distance;
public:
    CarJourney(Transport* _transport, const std::string& _destination, float _distance);
    virtual void print() const override;
    virtual float calculateCost() const override;
};