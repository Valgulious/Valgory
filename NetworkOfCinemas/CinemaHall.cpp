#include "CinemaHall.h"

CinemaHall::CinemaHall(string name, bool is3d, Cinema * newCinema) {
    setName(name);
    set3D(is3d);
    setCinema(newCinema);
    for (int i = 1; i <= 15; i++) {
        for (int j = 1; j <= 10; j++){
            Seat seat(0, 150, i, j, this);
            addSeats(&seat);
        }
    }
}

CinemaHall::~CinemaHall() {
//    delete name;
    delete seats;
    delete cinema;
//    delete is3D;
}

void CinemaHall::setName(string newName) {
    name = newName;
}

string CinemaHall::getName() {
    return name;
}

void CinemaHall::set3D(bool is3d) {
    is3D = is3d;
}

bool CinemaHall::get3D() {
    return is3D;
}

void CinemaHall::setCinema(Cinema * newCinema) {
    cinema = newCinema;
}

Cinema * CinemaHall::getCinema() {
    return cinema;
}

void CinemaHall::addSeats(Seat* newSeat)
{
    if (!this->seats) {
        auto ** mySeats = new Seat*[1];
        mySeats[0] = newSeat;
        this->seats = mySeats;
    } else {
        auto ** mySeats = new Seat*[sizeof(this->seats) + 1];
        for (int i = 0; i < sizeof(this->seats); i++) {
            mySeats[i] = this->seats[i];
        }
        mySeats[sizeof(this->seats) + 1] = newSeat;
        delete [] this->seats;
        this->seats = mySeats;
    }
}

Seat** CinemaHall::getSeats()
{
    return this->seats;
}

void CinemaHall::removeSeat(Seat * seat)
{
    if (!this->seats) {
        auto ** mySeats = new Seat*[sizeof(this->seats) - 1];
        int j(0);
        for (int i = 0; i < sizeof(this->seats); i++) {
            if (this->seats[i] != seat) {
                mySeats[j] = this->seats[i];
                j++;
            }
        }
        delete [] this->seats;
        this->seats = mySeats;
    }
}

void CinemaHall::addSession(Session* newSession)
{
    if (!this->sessions) {
        auto ** mySessions = new Session*[1];
        mySessions[0] = newSession;
        this->sessions = mySessions;
    } else {
        auto ** mySessions = new Session*[sizeof(this->sessions) + 1];
        for (int i = 0; i < sizeof(this->sessions); i++) {
            mySessions[i] = this->sessions[i];
        }
        mySessions[sizeof(this->sessions) + 1] = newSession;
        delete [] this->sessions;
        this->sessions = mySessions;
    }
}

Session** CinemaHall::getSessions()
{
    return this->sessions;
}

void CinemaHall::removeSession(Session * session) {
    if (!this->sessions) {
        auto **mySessions = new Session *[sizeof(this->sessions) - 1];
        int j(0);
        for (int i = 0; i < sizeof(this->sessions); i++) {
            if (this->sessions[i] != session) {
                mySessions[j] = this->sessions[i];
                j++;
            }
        }
        delete[] this->sessions;
        this->sessions = mySessions;
    }
}