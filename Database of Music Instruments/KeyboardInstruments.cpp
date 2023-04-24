#include "KeyboardInstruments.h"

KeyboardInstruments::KeyboardInstruments(int numberOfItems, double price, string &name, int numberOfStrings,
                                         int numberOfKeys) : StringedInstruments(numberOfItems, price, name,
                                                                                 numberOfStrings),
                                                             NumberOfKeys(numberOfKeys) {}

void KeyboardInstruments::displayInstrument() {
    cout << "Number of items:" << NumberOfItems << endl;
    cout << "Price:" << Price << endl;
    cout << "Name of instrument:" << Name << endl;
    cout << "Number of strings:" << NumberOfStrings << endl;
    cout << "Number of keys:" << NumberOfKeys << endl;
    cout << "-----------------------------------------" << endl;
}

