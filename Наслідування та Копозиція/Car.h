#pragma once
#include "transport.h"

class Car : public Transport {
private:
    double fuel;


public:
    Car();
    Car(const string& brand, double fuel);
    Car(const Car& C);
    virtual ~Car();

    virtual Transport* clone() const override;
    virtual void printTrans() const override;
    virtual double calculateCost() const override;
    void readFrom(istream& is);
    virtual string getBrand() const override;
    virtual string getTrans() const override;
};
