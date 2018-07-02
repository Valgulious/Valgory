#ifndef NETWORKOFCINEMAS_NETWORKOFCINEMAS_H
#define NETWORKOFCINEMAS_NETWORKOFCINEMAS_H

#include <iostream>
#include <vector>
#include "Cinema.h"

class Cinema;


using namespace std;

class NetworkOfCinemas {

public:
    string name;
    Cinema ** cinemas;// = nullptr;

public:
    NetworkOfCinemas(
            string name = "NetworkOfCinemas",
            Cinema ** cinemas = nullptr
    );
    ~NetworkOfCinemas();
    void setName(string);
    string getName();
    void addCinema(Cinema *);
    void removeCinema(Cinema *);
    Cinema ** getCinemas();
};


#endif //NETWORKOFCINEMAS_NETWORKOFCINEMAS_H
