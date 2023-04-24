#ifndef UNTITLED4_BOWINSTRUMENTS_H
#define UNTITLED4_BOWINSTRUMENTS_H

#include "StringedInstruments.h"

class BowInstruments : public StringedInstruments {
protected:

    float FretboardLength;

public:
    BowInstruments(int numberOfItems, double price, string &name, int numberOfStrings, float fretboardLength);
    void displayInstrument() override;
};


#endif //UNTITLED4_BOWINSTRUMENTS_H
