#include "CinemaHall.h"

CinemaHall::CinemaHall(string s, bool is3d, Cinema c) {
    name = s;
    is3D = is3d;
    cinema = c;
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

void CinemaHall::setCinema(Cinema newCinema) {
    cinema = newCinema;
}

Cinema CinemaHall::getCinema() {
    return cinema;
}

void CinemaHall::addSeats(Seat* newSeat)
{
    if (!this->seats) {
        Seat ** mySeats = new Seat*[1];
        mySeats[0] = newSeat;
        this->seats = mySeats;
    } else {
        Seat ** mySeats = new Seat*[sizeof(this->seats) + 1];
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
        Seat ** mySeats = new Seat*[sizeof(this->seats) - 1];
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