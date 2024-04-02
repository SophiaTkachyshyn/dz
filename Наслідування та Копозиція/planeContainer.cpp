#include "planeContainer.h"
#include "plane.h"
#include "seaVacation.h"
#include <fstream>

PlaneContainer::PlaneContainer()
    : planeTravels(nullptr), n(0) {}


void PlaneContainer::setPlaneTravels() {
    std::ifstream fin("file.txt");
    fin >> n;

    planeTravels = new const Travel * [n];

    std::string trans, place, brand;
    double price;
    int members;

    int airIndex = 0;

    for (int i = 0; i < n; ++i) {
        fin >> trans >> brand;
        if (trans == "Plane") {
            fin >> place >> price >> members;
            Plane* plane = new Plane(brand, price);
            SeaVacation* airTravel = new SeaVacation(plane, place, members);
            planeTravels[airIndex++] = airTravel;
        }
        else {
            fin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    n = airIndex;
    fin.close();
}


void PlaneContainer::print()
{
    for (size_t i = 0; i < n; i++)
    {
        planeTravels[i]->printTravel();
    }
}

int PlaneContainer::findMinMembers() const
{
    double minCost = planeTravels[0]->calculateCost();
    int minMembers = planeTravels[0]->getMembers();
    for (size_t i = 1; i < n; i++)
    {
        if (planeTravels[i]->calculateCost() < minCost) {
            minCost = planeTravels[i]->calculateCost();
            minMembers = planeTravels[i]->getMembers();
        }
    }
    return minMembers;
}