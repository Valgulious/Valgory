#ifndef NETWORKOFCINEMAS_SESSIONSERIAL_H
#define NETWORKOFCINEMAS_SESSIONSERIAL_H

#include "iostream"

using namespace std;

class SessionSerial {

protected:
    string dateOfBeginning;
    string dateOfEnd;
    int serialNumber;

public:
    SessionSerial(string, string, int);
    ~SessionSerial();
    void setDateOfBeginning(string);
    string getDateOfBeginning();
    void setDateOfEnd(string);
    string getDateOfEnd();
    void setSerialNumber(int);
    int getSerialNumber();
};


#endif //NETWORKOFCINEMAS_SESSIONSERIAL_H
