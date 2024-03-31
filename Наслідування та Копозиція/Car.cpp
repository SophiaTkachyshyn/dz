#include "Car.h"

Car::Car(const std::string& _brand, float _fuelConsumption) : brand(_brand), fuelConsumption(_fuelConsumption) {}

void Car::print() const {
    std::cout << "Car Brand: " << brand << std::endl;
}

float Car::calculateCost() const {
    return 50.0f * fuelConsumption;
}

void Car::readFromStream(std::istream& in) {
    // Реалізація читання з потоку
}

std::string Car::getBrand() const {
    return brand;
}