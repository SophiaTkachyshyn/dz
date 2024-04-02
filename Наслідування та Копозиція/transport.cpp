#include "transport.h"

Transport::Transport() : brand("") {}

Transport::Transport(string brand) : brand(brand) {}

Transport::Transport(const Transport& T) : brand(T.brand) {}

Transport::~Transport() {}


void Transport::readFrom(istream& is)
{
    is >> brand;
}

void Transport::printTrans() const
{
    cout << "Brand: " << brand << endl;
}

istream& operator>>(istream& is, Transport& T) {
    T.readFrom(is);
    return is;
}
