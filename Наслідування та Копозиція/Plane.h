#pragma once
#include "transport.h"

class Plane : public Transport {
private:
    double ticketPrice;

public:
    Plane();
    Plane(const string& brand, double ticketPrice);
    Plane(const Plane& A);
    virtual ~Plane();

    virtual Transport* clone() const override;
    virtual void printTrans() const override;
    virtual double calculateCost() const override;
    void readFrom(std::istream& is);
    virtual string getBrand() const override;
    virtual string getTrans() const override;
};