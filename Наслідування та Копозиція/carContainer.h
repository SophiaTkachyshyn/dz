#pragma once
#include "travel.h"

class CarContainer
{
private:
	Travel** carTravels;
	int n;
public:
	CarContainer();

	void setCarTravels();
	void print();
	void findMostExpensiveCar() const;
};


