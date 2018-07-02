#ifndef NETWORKOFCINEMAS_CINEMA_H
#define NETWORKOFCINEMAS_CINEMA_H

#include "iostream"
#include "NetworkOfCinemas.h"
#include "CinemaHall.h"
#include "Session.h"

using namespace std;

class NetworkOfCinemas;
class CinemaHall;

class Cinema {

public:
    string name;
//    CinemaHall cinemaHalls[];
//    Session sessions[];
    CinemaHall ** cinemaHalls = nullptr;
    NetworkOfCinemas * networkOfCinemas;

public:
    Cinema(string, NetworkOfCinemas*);
    ~Cinema();
    void setName(string);
    string getName();
    void addCinemaHall(CinemaHall*);
    CinemaHall ** getCinemaHalls();
    void removeCinemaHall(CinemaHall*);
    void setNetworkOfCinemas(NetworkOfCinemas*);
    NetworkOfCinemas * getNetworkOfCinemas();
};


#endif //NETWORKOFCINEMAS_CINEMA_H
