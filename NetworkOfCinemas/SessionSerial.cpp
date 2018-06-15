#include "SessionSerial.h"

SessionSerial::SessionSerial(string dateOfBeginning, string dateOfEnd, int serialNumber) {
    setDateOfBeginning(dateOfBeginning);
    setDateOfEnd(dateOfEnd);
    setSerialNumber(serialNumber);
}

SessionSerial::~SessionSerial() {
    delete dateOfEnd;
    delete dateOfBeginning;
    delete serialNumber;
}

void SessionSerial::setDateOfBeginning(string newDateOfBeginning) {
    dateOfBeginning = newDateOfBeginning;
}

string SessionSerial::getDateOfBeginning() {
    return dateOfBeginning;
}

void SessionSerial::setDateOfEnd(string newDateOfEnd) {
    dateOfEnd = newDateOfEnd;
}

string SessionSerial::getDateOfEnd() {
    return dateOfEnd;
}

void SessionSerial::setSerialNumber(int newSerialNumber) {
    serialNumber = newSerialNumber;
}

int SessionSerial::getSerialNumber() {
    return serialNumber;
}