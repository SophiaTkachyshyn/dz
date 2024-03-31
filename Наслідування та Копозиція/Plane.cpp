#include "Plane.h"

Plane::Plane(const std::string& _airline, float _ticketCost) : airline(_airline), ticketCost(_ticketCost) {}

void Plane::print() const {
    std::cout << "Airline: " << airline << std::endl;
}

float Plane::calculateCost() const {
    return ticketCost;
}

void Plane::readFromStream(std::istream& in) {
    // Реалізація читання з потоку
}