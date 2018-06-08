#ifndef NETWORKOFCINEMAS_SEAT_H
#define NETWORKOFCINEMAS_SEAT_H

#include "iostream"
#include "CinemaHall.h"

using namespace std;

class Seat {

protected:
    bool status;
    int coast;
    CinemaHall * cinemaHall;
    int line, number;

public:
    Seat(bool, int, int, int, CinemaHall*);
    ~Seat();
    void setStatus(bool);
    bool getStatus();
    void setCoast(int);
    int getCoast();
    void setCinemaHall(CinemaHall *);
    CinemaHall * getCinemaHall();
    void setLine(int);
    int getLine();
    void setNumber(int);
    int getNumber();
};
#endif //NETWORKOFCINEMAS_SEAT_H
