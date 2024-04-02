#include "plane.h"

Plane::Plane() : ticketPrice(0) {}

Plane::Plane(const string& brand, double ticketPrice) : Transport(brand), ticketPrice(ticketPrice) {}

Plane::Plane(const Plane& A) : Transport(A.brand), ticketPrice(A.ticketPrice) {}

Plane::~Plane() {}

Transport* Plane::clone() const {
    return new Plane(*this);
}

void Plane::printTrans() const {
    cout << "Airline: " << brand << ", Ticket Price: " << ticketPrice << " USD";
}

double Plane::calculateCost() const {
    return ticketPrice;
}

void Plane::readFrom(istream& is) {
    is >> brand >> ticketPrice;
}

string Plane::getBrand() const {
    return brand;
}

string Plane::getTrans() const
{
    return "P";
}