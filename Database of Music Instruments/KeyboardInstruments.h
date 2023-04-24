#ifndef UNTITLED4_KEYBOARDINSTRUMENTS_H
#define UNTITLED4_KEYBOARDINSTRUMENTS_H

#include "StringedInstruments.h"

class KeyboardInstruments : public StringedInstruments {
protected:
    int NumberOfKeys;

public:
    KeyboardInstruments(int numberOfItems, double price, string &name, int numberOfStrings, int numberOfKeys);
    void displayInstrument() override;
};


#endif //UNTITLED4_KEYBOARDINSTRUMENTS_H
