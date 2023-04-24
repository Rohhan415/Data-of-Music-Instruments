#include "StringedInstruments.h"

StringedInstruments::StringedInstruments(int numberOfItems, double price, string &name, int numberOfStrings)
        : Instrument(numberOfItems, price, name), NumberOfStrings(numberOfStrings) {}

void StringedInstruments::displayInstrument() {
    cout << "Number of items:" << NumberOfItems << endl;
    cout << "Price:" << Price << endl;
    cout << "Name of instrument:" << Name << endl;
    cout << "Number of strings:" << NumberOfStrings << endl;
    cout << "-----------------------------------------" << endl;


}
