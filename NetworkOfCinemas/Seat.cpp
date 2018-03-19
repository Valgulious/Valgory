#include "Seat.h"

Seat::Seat(string s, int c, int l, int n, CinemaHall ch) {
    status = s;
    coast = c;
    line = l;
    number = n;
    cinemaHall = ch;
}

void Seat::setStatus(string newStatus) {
    status = newStatus;
}

string Seat::getStatus() {
    return status;
}

void Seat::setCoast(int newCoast) {
    coast = newCoast;
}

int Seat::getCoast() {
    return coast;
}

void Seat::setCinemaHall(CinemaHall newCinemaHall) {
    cinemaHall = newCinemaHall;
}

CinemaHall Seat::getCinemaHall() {
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