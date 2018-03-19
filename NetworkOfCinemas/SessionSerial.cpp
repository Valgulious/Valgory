#include "SessionSerial.h"

SessionSerial::SessionSerial(Date dob, Date doe, int sn) {
    dateOfBegining = dob;
    dateOfEnd = doe;
    serialNumber = sn;
}

void SessionSerial::setDateOfBeguning(Date newDateOfBegining) {
    dateOfBegining = newDateOfBegining;
}

Date SessionSerial::getDateOfBeguning() {
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