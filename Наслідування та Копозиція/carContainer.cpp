#include "carContainer.h"
#include "car.h"
#include "carVacation.h"
#include <fstream>

CarContainer::CarContainer()
    : carTravels(nullptr), n(0)
{
}

void CarContainer::setCarTravels() {
    ifstream fin("file.txt");
    fin >> n;

    carTravels = new Travel * [n];

    string trans, place, brand;
    double km, fuel;

    int carIndex = 0;

    for (int i = 0; i < n; ++i) {
        fin >> trans >> brand;
        if (trans == "Car") {
            fin >> place >> fuel >> km;
            Car* car = new Car(brand, fuel);
            CarVacation* carTravel = new CarVacation(car, place, km);
            carTravels[carIndex++] = carTravel;
        }
        else {
            fin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    n = carIndex;

    fin.close();
}

void CarContainer::print()
{
    for (size_t i = 0; i < n; i++)
    {
        carTravels[i]->printTravel();
    }
}

void CarContainer::findMostExpensiveCar() const {
    double maxCost = 0.0;
    const CarVacation* mostExpensiveCar = nullptr;

    for (int i = 0; i < n; ++i) {
        const CarVacation* currentCar = dynamic_cast<const CarVacation*>(carTravels[i]);
        if (currentCar) {
            double cost = currentCar->calculateCost();
            if (cost > maxCost) {
                maxCost = cost;
                mostExpensiveCar = currentCar;
            }
        }
    }

    if (mostExpensiveCar) {
        std::cout << "The most expensive car travel:" << std::endl;
        mostExpensiveCar->printTravel();
        std::cout << std::endl;
    }
    else {
        std::cout << "No car travels found." << std::endl;
    }
}


