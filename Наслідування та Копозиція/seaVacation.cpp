#include "seaVacation.h"

SeaVacation::SeaVacation() : Travel(), members(0) {}

SeaVacation::SeaVacation(Transport* T, const string& place, int members) : Travel(T, place), members(members) {}

SeaVacation::SeaVacation(const SeaVacation& S) : Travel(S), members(S.members) {}

SeaVacation::~SeaVacation() {}

double SeaVacation::calculateCost() const {
    return T->calculateCost() * members;
}

void SeaVacation::printTravel() const {
    Travel::printTravel();
    cout << ", Number of Family Members: " << members << ", Total price: " << calculateCost() << endl;
}

void SeaVacation::readFrom(istream& is) {
    Travel::readFrom(is);
    is >> members;
}

int SeaVacation::getMembers() const
{
    return members;
}