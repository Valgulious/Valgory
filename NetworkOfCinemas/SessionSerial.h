#ifndef NETWORKOFCINEMAS_SESSIONSERIAL_H
#define NETWORKOFCINEMAS_SESSIONSERIAL_H

#include "iostream"

using namespace std;

class SessionSerial {

public:

    Date dateOfBegining;
    Date dateOfEnd;
    int serialNumber;

    SessionSerial(Date, Date, int);
    void setDateOfBeguning(Date);
    Date getDateOfBeguning();
    void setDateOfEnd(Date);
    Date getDateOfEnd();
    void setSerialNumber(int);
    int getSerialNumber();
};


#endif //NETWORKOFCINEMAS_SESSIONSERIAL_H
