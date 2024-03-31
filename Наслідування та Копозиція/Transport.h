#pragma once
#include <iostream>
#include <string>

class Transport {
public:
    virtual void print() const = 0;
    virtual float calculateCost() const = 0;
    virtual void readFromStream(std::istream& in) = 0;
    virtual ~Transport() {}
};