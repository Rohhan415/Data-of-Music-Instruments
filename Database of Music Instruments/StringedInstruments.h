#ifndef UNTITLED4_STRINGEDINSTRUMENTS_H
#define UNTITLED4_STRINGEDINSTRUMENTS_H
#include "Instrument.h"

class StringedInstruments : public Instrument {
protected:
    int NumberOfStrings;

public:

    StringedInstruments(int numberOfItems, double price, string &name, int numberOfStrings);
    void displayInstrument() override;
};


#endif //UNTITLED4_STRINGEDINSTRUMENTS_H
