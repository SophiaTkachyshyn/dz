#pragma once
#include "Transport.h"
#include <iostream>
#include <string>

class Journey {
protected:
    Transport* transport;
    std::string destination;
public:
    Journey(Transport* _transport, const std::string& _destination);
    virtual void print() const = 0;
    virtual float calculateCost() const = 0;
    virtual ~Journey() {}
};