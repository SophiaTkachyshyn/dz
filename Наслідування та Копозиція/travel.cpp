#include "travel.h"

Travel::Travel() : T(nullptr), place("") {}

Travel::Travel(Transport* T, const string& place) : T(T), place(place) {}

Travel::Travel(const Travel& T) : T(T.T), place(T.place) {}

Travel::~Travel() {
    delete T;
}

void Travel::printTravel() const {
    cout << "Place to go: " << place << ", ";
    T->printTrans();
}

void Travel::readFrom(istream& is) {
    is >> *T >> place;
}

const Transport* Travel::getTransport() const {
    return T;
}



istream& operator>>(istream& is, Travel& T) {
    T.readFrom(is);
    return is;
}



