#include "carVacation.h"

CarVacation::CarVacation() : Travel(), km(0) {}

CarVacation::CarVacation(Transport* T, const string& place, double km) : Travel(T, place), km(km) {}

CarVacation::CarVacation(const CarVacation& C) : Travel(C), km(C.km) {}

CarVacation::~CarVacation() {}

double CarVacation::calculateCost() const {
    return T->calculateCost() * km;
}

void CarVacation::printTravel() const {
    Travel::printTravel();
    cout << ", Distance: " << km << " km, Total price: " << calculateCost() << endl;
}

void CarVacation::readFrom(istream& is) {
    Travel::readFrom(is);
    is >> km;
}

int CarVacation::getMembers() const
{
    return 0;
}