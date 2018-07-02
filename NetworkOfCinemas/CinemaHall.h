#ifndef NETWORKOFCINEMAS_CINEMAHALL_H
#define NETWORKOFCINEMAS_CINEMAHALL_H

#include "iostream"
#include "Cinema.h"
#include "Seat.h"
#include "Session.h"


using namespace std;

class Session;
class Cinema;

class CinemaHall {

private:
    string name;
//    Seat ** seats = nullptr;
//    Session ** sessions = nullptr;
    vector<Session> sessions;
    bool is3D;
    Cinema * cinema;

public:
    CinemaHall(string, bool, Cinema*);
    virtual ~CinemaHall();
    void setName(string)  ;
    string getName()  ;
    Seat ** getSeats();
    void addSeats(Seat*);
    void removeSeat(Seat*);
    void set3D(bool);
    bool get3D();
    void setCinema(Cinema*);
    Cinema * getCinema();
    void addSession(Session*);
    Session ** getSessions();
    void removeSession(Session*);
};


#endif //NETWORKOFCINEMAS_CINEMAHALL_H
