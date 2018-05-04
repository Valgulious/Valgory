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

void Cinema::removeCinemaHall(CinemaHall * cinemaHall)
{
    if (!this->cinemaHalls) {
        CinemaHall ** myCinemaHals = new CinemaHall*[sizeof(this->cinemaHalls) - 1];
        int j(0);
        for (int i = 0; i < sizeof(this->cinemaHalls); i++) {
            if (this->cinemaHalls[i] != cinemaHall) {
                myCinemaHals[j] = this->cinemaHalls[i];
                j++;
            }
        }
        delete [] this->cinemaHalls;
        this->cinemaHalls = myCinemaHals;
    }
}

Session** Cinema::getSessions()
{
    return this->sessions;
}

void Cinema::removeSession(Session * session)
{
    if (!this->sessions) {
        Session ** mySessions = new Session*[sizeof(this->sessions) - 1];
        int j(0);
        for (int i = 0; i < sizeof(this->sessions); i++) {
            if (this->sessions[i] != session) {
                mySessions[j] = this->sessions[i];
                j++;
            }
        }
        delete [] this->sessions;
        this->sessions = mySessions;
    }
}