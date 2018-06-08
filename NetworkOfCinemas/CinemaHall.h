#ifndef NETWORKOFCINEMAS_CINEMAHALL_H
#define NETWORKOFCINEMAS_CINEMAHALL_H

#include "iostream"
#include "Cinema.h"
#include "Seat.h"


using namespace std;

class CinemaHall: protected Cinema {

protected:
    string name;
//    Seat seats[];
    Seat ** seats = nullptr;
    bool is3D;
    Cinema * cinema;

public:
    CinemaHall(string, bool, Cinema*);
    virtual ~CinemaHall();
    virtual void setName(string) override ;
    virtual  string getName() override ;
    Seat ** getSeats();
    void addSeats(Seat*);
    void removeSeat(Seat*);
    void set3D(bool);
    bool get3D();
    void setCinema(Cinema*);
    Cinema * getCinema();
};


#endif //NETWORKOFCINEMAS_CINEMAHALL_H
