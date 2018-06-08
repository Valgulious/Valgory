#ifndef NETWORKOFCINEMAS_SESSIONSERIAL_H
#define NETWORKOFCINEMAS_SESSIONSERIAL_H

#include "iostream"

using namespace std;

class SessionSerial {

protected:
    Date dateOfBeginning;
    Date dateOfEnd;
    int serialNumber;

public:
    SessionSerial(Date, Date, int);
    ~SessionSerial();
    void setDateOfBeginning(Date);
    Date getDateOfBeginning();
    void setDateOfEnd(Date);
    Date getDateOfEnd();
    void setSerialNumber(int);
    int getSerialNumber();
};


#endif //NETWORKOFCINEMAS_SESSIONSERIAL_H
