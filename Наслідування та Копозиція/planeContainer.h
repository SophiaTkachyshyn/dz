#pragma once
#include "travel.h"

class PlaneContainer {
private:
	const Travel** planeTravels;
	int n;

public:
	PlaneContainer();

	void setPlaneTravels();
	void print();
	int findMinMembers() const;
};