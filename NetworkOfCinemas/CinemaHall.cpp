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