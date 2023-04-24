#ifndef UNTITLED4_INSTRUMENT_H
#define UNTITLED4_INSTRUMENT_H

#include "iostream"
#include "string"
#include "list"

using namespace std;

class Instrument {
protected:
    int NumberOfItems;
    double Price;
    string Name;
public:

    int getNumberOfItems() const;

    double getPrice() const;

    const string &getName() const;

    Instrument(int numberOfItems, double price, string &name);

    virtual void displayInstrument() = 0;

    virtual ~Instrument() = 0;


};


#endif //UNTITLED4_INSTRUMENT_H
