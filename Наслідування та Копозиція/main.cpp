#include "car.h"
#include "plane.h"
#include "seaVacation.h"
#include "carVacation.h"
#include "carContainer.h"
#include "planeContainer.h"
#include <iostream>
#include <fstream>

using namespace std;


void operations()
{
    Travel** travels;
    int n;
    fstream fin("file.txt");
    fin >> n;

    travels = new Travel * [n];

    string trans, place, brand;
    double km, fuel, price;
    int members;

    for (int i = 0; i < n; ++i) {
        fin >> trans >> brand;
        if (trans == "Car") {
            fin >> place >> fuel >> km;
            travels[i] = new CarVacation(new Car(brand, fuel), place, km);
        }
        else if (trans == "Plane") {
            fin >> place >> price >> members;
            travels[i] = new SeaVacation(new Plane(brand, price), place, members);
        }
    }

    fin.close();

    double totalCost = 0.0;
    double maxCar = 0;
    double maxPlane = 0;

    for (int i = 0; i < n; ++i) {
        travels[i]->printTravel();
        totalCost += travels[i]->calculateCost();
        if (travels[i]->getTransport()->getTrans() == "C")
        {
            if (travels[i]->calculateCost() > maxCar) {
                maxCar = travels[i]->calculateCost();
            }
        }
        else if (travels[i]->getTransport()->getTrans() == "P")
        {
            if (travels[i]->calculateCost() > maxPlane) {
                maxPlane = travels[i]->calculateCost();
            }
        }
    }

    cout << "\nTotal Cost of all travellings: " << totalCost << endl;
    cout << "Max Car: " << maxCar << endl;
    cout << "Max Plane: " << maxPlane << endl;
}

int main()
{
    operations();

    cout << "\n\n\nContainers:\n\n";

    CarContainer carContainer;
    carContainer.setCarTravels();
    carContainer.print();
    carContainer.findMostExpensiveCar();

    cout << "\n\n";

    PlaneContainer planeContainer;
    planeContainer.setPlaneTravels();
    planeContainer.print();
    cout << "Members in cheapest: " << planeContainer.findMinMembers() << endl;


}



