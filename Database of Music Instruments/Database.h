
#ifndef UNTITLED4_DATABASE_H
#define UNTITLED4_DATABASE_H

#include "Instrument.h"
#include "Defines.h"
#include "list"
#include <fstream>
#include <iomanip>
#include <climits>

class Database {
    list<Instrument *> instrumentList;

public:
    bool databaseMenu();

    void createReport();

    bool removeInstrument();

    void displayInstruments();
};


#endif //UNTITLED4_DATABASE_H
