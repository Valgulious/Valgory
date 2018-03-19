#include "Session.h"


Session::Session(SessionSerial ss, Date d, CinemaHall ch, Film f) {
    sessionSerial = ss;
    date = d;
    cinemaHall = ch;
    film = f;
}

void Session::setSessionSerial(SessionSerial newSessionSerial) {
    sessionSerial = newSessionSerial;
}

SessionSerial Session::getSessionSerial() {
    return sessionSerial;
}

void Session::setFilm(Film newFilm) {
    film = newFilm;
}

Film Session::getFilm() {
    return film;
}

void Session::setCinemaHall(CinemaHall newCinemaHall) {
    cinemaHall = newCinemaHall;
}

CinemaHall Session::getCinemaHall() {
    return cinemaHall;
}

void Session::setDate(Date newDate) {
    date = newDate;
}

Date Session::getDate() {
    return date;
}