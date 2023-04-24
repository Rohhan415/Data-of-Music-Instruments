#include "Instrument.h"

Instrument::Instrument(int numberOfItems, double price, string &name): NumberOfItems(numberOfItems), Price(price), Name(name) {}

const string &Instrument::getName() const {
    return Name;
}

double Instrument::getPrice() const {
    return Price;
}

int Instrument::getNumberOfItems() const {
    return NumberOfItems;
}

Instrument::~Instrument() = default;

