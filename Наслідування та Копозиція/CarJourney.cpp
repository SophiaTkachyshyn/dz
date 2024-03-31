#include "CarJourney.h"
#include "Car.h"

CarJourney::CarJourney(Transport* _transport, const std::string& _destination, float _distance) : Journey(_transport, _destination), distance(_distance) {}

void CarJourney::print() const {
    std::cout << "Destination: " << destination << std::endl;
    std::cout << "Car Brand: " << static_cast<Car*>(transport)->getBrand() << std::endl;
    std::cout << "Total Cost: " << calculateCost() << std::endl;
}

float CarJourney::calculateCost() const {
    return distance * transport->calculateCost();
}
