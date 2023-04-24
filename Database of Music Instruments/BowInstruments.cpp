#include "BowInstruments.h"


BowInstruments::BowInstruments(int numberOfItems, double price, string &name, int numberOfStrings, float fretboardLength)
        : StringedInstruments(numberOfItems, price, name, numberOfStrings), FretboardLength(fretboardLength) {}

void BowInstruments::displayInstrument() {
    cout << "Number of items:" << NumberOfItems << endl;
    cout << "Price:" << Price << endl;
    cout << "Name of instrument:" << Name << endl;
    cout << "Number of strings:" << NumberOfStrings << endl;
    cout << "Fretboard length:" << FretboardLength << endl;
    cout << "-----------------------------------------" << endl;
}
