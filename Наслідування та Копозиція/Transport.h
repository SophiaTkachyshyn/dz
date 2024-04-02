#pragma once
#include <iostream>
#include <string>

using namespace std;

class Transport {
protected:
    string brand;

public:
    Transport();
    Transport(string brand);
    Transport(const Transport& T);
    virtual ~Transport();

    virtual Transport* clone() const = 0;
    virtual void printTrans() const;
    virtual double calculateCost() const = 0;
    void readFrom(istream& is);
    virtual string getBrand() const = 0;
    virtual string getTrans() const = 0;

};

istream& operator>>(istream& is, Transport& transport);






