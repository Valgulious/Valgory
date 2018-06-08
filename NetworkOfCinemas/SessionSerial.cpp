#include "SessionSerial.h"

SessionSerial::SessionSerial(Date dateOfBeginning, Date dateOfEnd, int serialNumber) {
    setDateOfBeginning(dateOfBeginning);
    setDateOfEnd(dateOfEnd);
    setSerialNumber(serialNumber);
}

SessionSerial::~SessionSerial() {
    delete dateOfEnd;
    delete dateOfBeginning;
    delete serialNumber;
}

void SessionSerial::setDateOfBeginning(Date newDateOfBeginning) {
    dateOfBegining = newDateOfBegining;
}

Date SessionSerial::getDateOfBeginning() {
    return dateOfBegining;
}

void SessionSerial::setDateOfEnd(Date newDateOfEnd) {
    dateOfEnd = newDateOfEnd;
}

Date SessionSerial::getDateOfEnd() {
    return dateOfEnd;
}

void SessionSerial::setSerialNumber(int newSerialNumber) {
    serialNumber = newSerialNumber;
}

int SessionSerial::getSerialNumber() {
    return serialNumber;
}