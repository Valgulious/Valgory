#ifndef NETWORKOFCINEMAS_NETWORKOFCINEMAS_H
#define NETWORKOFCINEMAS_NETWORKOFCINEMAS_H
#include <iostream>
#include <vector>
#include "Cinema.h"


using namespace std;

class NetworkOfCinemas {

protected:
    string name;
    Cinema ** cinemas = nullptr;
    //Cinema cinemas [];

public:
    NetworkOfCinemas() = default;
    NetworkOfCinemas(string name = "NetworkOfCinemas");
    virtual ~NetworkOfCinemas();
    virtual void setName(string);
    virtual string getName();
    void addCinema(Cinema *);
    void removeCinema(Cinema *);
    Cinema ** getCinemas();
};


#endif //NETWORKOFCINEMAS_NETWORKOFCINEMAS_H
