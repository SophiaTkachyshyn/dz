#pragma once
#include "Transport.h"

class Car : public Transport {
private:
    std::string brand;
    float fuelConsumption;
public:
    Car(const std::string& _brand, float _fuelConsumption);
    virtual void print() const override;
    virtual float calculateCost() const override;
    virtual void readFromStream(std::istream& in) override;
    std::string getBrand() const;
};
