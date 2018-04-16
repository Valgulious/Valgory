#include "Cinema.h"

Cinema::Cinema(string s, NetworkOfCinemas nc) {
    networkOfCinemas = nc;
    name = s;
}

void Cinema::setName(string newName) {
    name = newName;
}

string Cinema::getName() {
    return name;
}

void Cinema::setNetworkOfCinemas(NetworkOfCinemas newNetworkOfCinema) {
    networkOfCinemas = newNetworkOfCinema;
}

NetworkOfCinemas Cinema::getNetworkOfCinemas() {
    return networkOfCinemas;
}

void Cinema::addCinemaHall(CinemaHall* cinemaHall)
{
    if (!this->cinemaHalls) {
        CinemaHall ** myCinemaHalls = new CinemaHall*[1];
        myCinemaHalls[0] = cinemaHall;
        this->cinemaHalls = myCinemaHalls;
    } else {
        CinemaHall ** myCinemaHalls = new CinemaHall*[sizeof(this->cinemaHalls) + 1];
        for (int i = 0; i < sizeof(this->cinemaHalls); i++) {
            myCinemaHalls[i] = this->cinemaHalls[i];
        }
        myCinemaHalls[sizeof(this->cinemaHalls) + 1] = cinemaHall;
        delete [] this->cinemaHalls;
        this->cinemaHalls = myCinemaHalls;
    }
}

CinemaHall** Cinema::getCinemaHalls()
{
    return this->cinemaHalls;
}

void Cinema::addSession(Session * session)
{
    if (!this->sessions) {
        Session ** mySessions = new Session*[1];
        mySessions[0] = session;
        this->sessions = mySessions;
    } else {
        Session ** mySessions = new Session*[sizeof(this->sessions) + 1];
        for (int i = 0; i < sizeof(this->sessions); i++) {
            mySessions[i] = this->sessions[i];
        }
        mySessions[sizeof(this->sessions) + 1] = session;
        delete [] this->sessions;
        this->sessions = mySessions;
    }
}

Session** Cinema::getSessions()
{
    return this->sessions;
}