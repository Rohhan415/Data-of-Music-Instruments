#include "Database.h"
#include "KeyboardInstruments.h"
#include "BowInstruments.h"

bool Database::databaseMenu() {
    while (true) {
        int userFirstChoice;
        int userSecondChoice;
        string name;
        int numberOfItems;
        double price;
        int numberOfStrings;
        float fretboardLength;
        int numberOfKeys;
        string separator = "-----------------------------------------";
        cout << separator << endl;
        cout << "Welcome to database of Music Instruments!" << endl;
        cout << separator << endl;

        while (true) {
            cout << "Choose your Action:" << endl;
            cout << "1. Add instrument" << endl << "2. Remove instrument" << endl << "3. Make database file" << endl
                 << "4. Display all instruments" << endl
                 << "9. Close" << endl;
            cin >> userFirstChoice;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << separator << endl;
                cout << "You can only enter numbers.\n";
                cout << separator << endl;
            } else {
                break;
            }
        }

        while (true) {
            if (userFirstChoice == addInstrumentEnum) {
                cout << separator << endl;
                cout << "What type is your  instrument?" << endl << separator << endl;
                while (true) {
                    cout << "Choose your Action:" << endl;
                    cout << "1. Keyboard" << endl << "2. Bow" << endl << "3. Stringed" << endl << "8. Return" << endl;
                    cin >> userSecondChoice;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(INT_MAX, '\n');
                        cout << separator << endl;
                        cout << "You can only enter numbers.\n";
                        cout << separator << endl;
                    } else {
                        break;
                    }
                }
                if (userSecondChoice == keyboardInstrument) {
                    cout << separator << endl;
                    while (true) {
                        cout << "Please insert needed specifications:" << endl << separator << endl;
                        cout << "Number of items:" << endl;
                        cin >> numberOfItems;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << separator << endl;
                            cout << "You can only enter numbers.\n";
                            cout << separator << endl;
                        } else {
                            break;
                        }
                    }
                    while (true) {
                        cout << "Price:" << endl;
                        cin >> price;

                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << separator << endl;
                            cout << "You can only enter numbers.\n";
                            cout << separator << endl;
                        } else {
                            break;
                        }
                    }
                    while (true){
                        cout << "Name of instrument:" << endl;
                        cin >> name;
                        if(name.length() > MAX_LENGTH){
                            cout << separator << endl;
                            cout << "The input is within the acceptable length."<< endl;
                            cout << separator << endl;
                        }
                        else{
                            break;
                        }
                    }

                    while (true) {
                        cout << "Number of Strings:" << endl;
                        cin >> numberOfStrings;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << separator << endl;
                            cout << "You can only enter numbers.\n";
                            cout << separator << endl;
                        } else {
                            break;
                        }
                    }
                    while (true) {
                        cout << "Number of Keys:" << endl;
                        cin >> numberOfKeys;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << separator << endl;
                            cout << "You can only enter numbers.\n";
                            cout << separator << endl;
                        } else {
                            break;
                        }
                    }


                    Instrument *instrument = new KeyboardInstruments(numberOfItems, price, name,
                                                                     numberOfStrings, numberOfKeys);
                    instrumentList.push_back(instrument);

                } else if (userSecondChoice == bowInstrument) {
                    while (true) {
                        cout << "Please insert needed specifications:" << endl << separator << endl;
                        cout << "Number of items:" << endl;
                        cin >> numberOfItems;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << separator << endl;
                            cout << "You can only enter numbers.\n";
                            cout << separator << endl;
                        } else {
                            break;
                        }
                    }
                    while (true) {
                        cout << "Price:" << endl;
                        cin >> price;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << separator << endl;
                            cout << "You can only enter numbers.\n";
                            cout << separator << endl;
                        } else {
                            break;
                        }
                    }

                    while (true){
                        cout << "Name of instrument:" << endl;
                        cin >> name;
                        if(name.length() > MAX_LENGTH){
                            cout << separator;
                            cout << "The input is within the acceptable length."<< endl;
                            cout << separator;
                        }
                        else{
                            break;
                        }
                    }
                    while (true) {
                        cout << "Number of Strings:" << endl;
                        cin >> numberOfStrings;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << separator << endl;
                            cout << "You can only enter numbers.\n";
                            cout << separator << endl;
                        } else {
                            break;
                        }
                    }
                    while (true) {
                        cout << "Fretboard length:" << endl;
                        cin >> fretboardLength;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << separator << endl;
                            cout << "You can only enter numbers.\n";
                            cout << separator << endl;
                        } else {
                            break;
                        }
                    }

                    Instrument *instrument = new BowInstruments(numberOfItems, price, name,
                                                                numberOfStrings, fretboardLength);
                    instrumentList.push_back(instrument);
                } else if (userSecondChoice == stringedInstrument) {
                    while (true) {
                        cout << "Please insert needed specifications:" << endl << separator << endl;
                        cout << "Number of items:" << endl;
                        cin >> numberOfItems;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << separator << endl;
                            cout << "You can only enter numbers.\n";
                            cout << separator << endl;
                        } else {
                            break;
                        }
                    }
                    while (true) {
                        cout << "Price:" << endl;
                        cin >> price;

                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << separator << endl;
                            cout << "You can only enter numbers.\n";
                            cout << separator << endl;
                        } else {
                            break;
                        }
                    }

                    while (true){
                        cout << "Name of instrument:" << endl;
                        cin >> name;
                        if(name.length() > MAX_LENGTH){
                            cout << "The input is within the acceptable length."<< endl;
                        }
                        else{
                            break;
                        }
                    }
                    while (true) {
                        cout << "Number of Strings:" << endl;
                        cin >> numberOfStrings;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << separator << endl;
                            cout << "You can only enter numbers.\n";
                            cout << separator << endl;
                        } else {
                            break;
                        }
                    }
                    Instrument *instrument = new StringedInstruments(numberOfItems, price, name,
                                                                     numberOfStrings);
                    instrumentList.push_back(instrument);
                } else if (userSecondChoice == returnButton) {
                    break;
                }
            }
            if (userFirstChoice == removeInstrumentEnum) {
                removeInstrument();
                break;
            } else if (userFirstChoice == makeDatabaseFile) {
                createReport();
                break;
            } else if (userFirstChoice == displayAllInstruments) {
                cout << separator << endl;
                cout << "List of instruments:" << endl;
                cout << separator << endl;
                displayInstruments();
                break;
            } else if (userFirstChoice == close) {
                cout << separator << endl << "Thank you for coming!" << endl << separator;

                return false;
            }

        }
    }


}

void Database::createReport() {
    string separator = "-----------------------------------------";
    ofstream reportFile;
    reportFile.open("instrumentsReport.txt");
    reportFile << left << setw(20) << "Instrument name:" << setw(20) << "Number of items:" << setw(20) << "Price:"
               << endl;
    for (auto &instrument: instrumentList) {
        reportFile << left << setw(20) << instrument->getName() << setw(20) << instrument->getNumberOfItems()
                   << setw(20) << instrument->getPrice() << endl;
    }
    reportFile.close();
    cout << separator << endl;
    cout << "Report has been created successfully!" << endl;
}

bool Database::removeInstrument() {
    string separator = "-----------------------------------------";
    int instrumentIndex;
    cout << "Please enter the index of the instrument you want to remove: " << endl;
    cin >> instrumentIndex;
    if (instrumentIndex < 0 || instrumentIndex >= instrumentList.size()) {
        cout << separator;
        cout << "Invalid instrument index: " << endl;
        cout << separator;
        return false;
    } else {
        auto destinedInstrument = instrumentList.begin();
        advance(destinedInstrument, instrumentIndex);
        delete *destinedInstrument;
        instrumentList.erase(destinedInstrument);
        return true;
    }

}

void Database::displayInstruments() {
    for (auto &destinedInstrument: instrumentList) {
        destinedInstrument->displayInstrument();
    }
}