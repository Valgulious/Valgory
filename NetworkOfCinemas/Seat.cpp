#include "Seat.h"

Seat::Seat(bool status, int coast, int line, int number, CinemaHall * cinemaHall) {
    setStatus(status);
    setCoast(coast);
    setLine(line);
    setNumber(number);
    setCinemaHall(cinemaHall);
}

Seat::~Seat() {
//    delete status;
//    delete coast;
//    delete line;
//    delete number;
//    delete cinemaHall;
}

void Seat::setStatus(bool newStatus) {
    status = newStatus;
}

bool Seat::getStatus() {
    return status;
}

void Seat::setCoast(int newCoast) {
    coast = newCoast;
}

int Seat::getCoast() {
    return coast;
}

void Seat::setCinemaHall(CinemaHall * newCinemaHall) {
    cinemaHall = newCinemaHall;
}

CinemaHall * Seat::getCinemaHall() {
    return cinemaHall;
}

void Seat::setLine(int newLine) {
    line = newLine;
}

int Seat::getLine() {
    return line;
}

void Seat::setNumber(int newNumber) {
    number = newNumber;
}

int Seat::getNumber() {
    return number;
}