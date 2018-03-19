#ifndef NETWORKOFCINEMAS_SEAT_H
#define NETWORKOFCINEMAS_SEAT_H

#include "iostream"
#include "CinemaHall.h"

using namespace std;

class Seat {

public:

    string status;
    int coast;
    CinemaHall cinemaHall;
    int line, number;

    Seat(string, int, int, int, CinemaHall);
    void setStatus(string);
    string getStatus();
    void setCoast(int);
    int getCoast();
    void setCinemaHall(CinemaHall);
    CinemaHall getCinemaHall();
    void setLine(int);
    int getLine();
    void setNumber(int);
    int getNumber();
};
#endif //NETWORKOFCINEMAS_SEAT_H
