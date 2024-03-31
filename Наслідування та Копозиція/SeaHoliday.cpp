#include "SeaHoliday.h"
#include "Plane.h"

SeaHoliday::SeaHoliday(Transport* _transport, const std::string& _destination, int _familyMembers, float _vacationCostPerMember) : Journey(_transport, _destination), familyMembers(_familyMembers), vacationCostPerMember(_vacationCostPerMember) {}

void SeaHoliday::print() const {
    std::cout << "Destination: " << destination << std::endl;
    std::cout << "Total Cost: " << calculateCost() << std::endl;
}

float SeaHoliday::calculateCost() const {
    return familyMembers * vacationCostPerMember + transport->calculateCost();
}
