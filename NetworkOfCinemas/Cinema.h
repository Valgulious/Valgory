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

private:
    string name;
//    CinemaHall ** cinemaHalls = nullptr;
    NetworkOfCinemas * networkOfCinemas;
    vector<CinemaHall*> cinemaHalls;

public:
    Cinema(string name, NetworkOfCinemas * networkOfCinemas);
    ~Cinema();
    void setName(string name);
    string getName();
//    void addCinemaHall(CinemaHall * newCinemaHall);
//    CinemaHall ** getCinemaHalls();
//    void removeCinemaHall(CinemaHall * removeCinemaHall);
    void addCinemaHall (CinemaHall * newCinemaHall);
    vector<CinemaHall*> getCinemaHalls();
    void removeCinemaHall(CinemaHall * removeCinemaHall);
    void setNetworkOfCinemas(NetworkOfCinemas * newNetworkOfCinemas);
    NetworkOfCinemas * getNetworkOfCinemas();
};


#endif //NETWORKOFCINEMAS_CINEMA_H
