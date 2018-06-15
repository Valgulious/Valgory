#include "Session.h"


Session::Session(SessionSerial * sessionSerial, string newDate, CinemaHall * cinemaHall, Film * film) {
    setSessionSerial(sessionSerial);
    setDate(newDate);
    setCinemaHall(cinemaHall);
    setFilm(film);
}

Session::~Session() {
    delete sessionSerial;
    delete date;
    delete cinemaHall;
    delete film;
}

void Session::setSessionSerial(SessionSerial * newSessionSerial) {
    sessionSerial = newSessionSerial;
}

SessionSerial * Session::getSessionSerial() {
    return sessionSerial;
}

void Session::setFilm(Film * newFilm) {
    film = newFilm;
}

Film * Session::getFilm() {
    return film;
}

void Session::setCinemaHall(CinemaHall * newCinemaHall) {
    cinemaHall = newCinemaHall;
}

CinemaHall * Session::getCinemaHall() {
    return cinemaHall;
}

void Session::setDate(string newDate) {
    date = newDate;
}

string Session::getDate() {
    return date;
}