#ifndef NETWORKOFCINEMAS_CINEMA_H
#define NETWORKOFCINEMAS_CINEMA_H

#include "iostream"
#include "NetworkOfCinemas.h"
#include "CinemaHall.h"
#include "Session.h"

using namespace std;

class Cinema: protected NetworkOfCinemas {

protected:
    string name;
//    CinemaHall cinemaHalls[];
//    Session sessions[];
    CinemaHall ** cinemaHalls = nullptr;
    NetworkOfCinemas * networkOfCinemas;

public:
    Cinema() = default;
    Cinema(string, NetworkOfCinemas*);
    virtual ~Cinema();
    virtual void setName(string) override ;
    virtual string getName() override ;
    void addCinemaHall(CinemaHall*);
    CinemaHall ** getCinemaHalls();
    void removeCinemaHall(CinemaHall*);
    void setNetworkOfCinemas(NetworkOfCinemas*);
    NetworkOfCinemas * getNetworkOfCinemas();
};


#endif //NETWORKOFCINEMAS_CINEMA_H
