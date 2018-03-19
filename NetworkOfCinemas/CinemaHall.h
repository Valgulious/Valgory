#ifndef NETWORKOFCINEMAS_CINEMAHALL_H
#define NETWORKOFCINEMAS_CINEMAHALL_H

#include "iostream"
#include "Cinema.h"
#include "Seat.h"


using namespace std;

class CinemaHall {

public:

    string name;
    Seat seats[];
    bool is3D;
    Cinema cinema;

    CinemaHall(string, bool, Cinema);
    void setName(string);
    string getName();
    Seat getSeats();
    void addSeats(Seat);
    void removeSeat(Seat);
    void set3D(bool);
    bool get3D();
    void setCinema(Cinema);
    Cinema getCinema();
};


#endif //NETWORKOFCINEMAS_CINEMAHALL_H
