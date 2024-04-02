#include "car.h"

Car::Car() : fuel(0) {}

Car::Car(const string& brand, double fuel) : Transport(brand), fuel(fuel) {}

Car::Car(const Car& C) : Transport(C.brand), fuel(C.fuel) {}

Car::~Car() {}

Transport* Car::clone() const {
    return new Car(*this);
}

void Car::printTrans() const {
    cout << "Car Brand: " << brand << ", Fuel : " << fuel << " liters ";
}

double Car::calculateCost() const {
    const double fuelCostPerLiter = 1.5;
    return fuelCostPerLiter * fuel;
}

void Car::readFrom(istream& is) {
    is >> brand >> fuel;
}


string Car::getBrand() const {
    return brand;
}

string Car::getTrans() const
{
    return "C";
}
