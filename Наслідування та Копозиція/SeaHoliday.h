#pragma once
#include "Journey.h"

class SeaHoliday : public Journey {
private:
    int familyMembers;
    float vacationCostPerMember;
public:
    SeaHoliday(Transport* _transport, const std::string& _destination, int _familyMembers, float _vacationCostPerMember);
    virtual void print() const override;
    virtual float calculateCost() const override;
};