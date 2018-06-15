#ifndef NETWORKOFCINEMAS_NETWORKOFCINEMAS_H
#define NETWORKOFCINEMAS_NETWORKOFCINEMAS_H
#include <iostream>
#include <vector>
#include "Cinema.h"


using namespace std;

class NetworkOfCinemas {

private:
    string name;
    Cinema ** cinemas = nullptr;

public:
    NetworkOfCinemas(string name = "NetworkOfCinemas");
    ~NetworkOfCinemas();
    void setName(string);
    string getName();
    void addCinema(Cinema *);
    void removeCinema(Cinema *);
    Cinema ** getCinemas();
};


#endif //NETWORKOFCINEMAS_NETWORKOFCINEMAS_H
