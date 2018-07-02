#include "Cinema.h"

Cinema::Cinema(string name, NetworkOfCinemas * networkOfCinemas) {
    setNetworkOfCinemas(networkOfCinemas);
    setName(name);
}

Cinema::~Cinema() {
//    delete name;
//    delete networkOfCinemas;
//    delete [] cinemaHalls;
}

void Cinema::setName(string newName) {
    name = newName;
}

string Cinema::getName() {
    return name;
}

void Cinema::setNetworkOfCinemas(NetworkOfCinemas * newNetworkOfCinema) {
    networkOfCinemas = newNetworkOfCinema;
}

NetworkOfCinemas * Cinema::getNetworkOfCinemas() {
    return networkOfCinemas;
}

void Cinema::addCinemaHall(CinemaHall *newCinemaHall) {
    if (cinemaHalls.empty()) {
        cinemaHalls.push_back(newCinemaHall);
    } else {
        bool notEqually = true;
        for (int i = 0; i < cinemaHalls.size(); i++) {
            if (cinemaHalls[i]->getName() == newCinemaHall->getName()
                and cinemaHalls[i]->getCinema() == newCinemaHall->getCinema()) {
                notEqually = false;
                break;
            }
        }

        if (notEqually) cinemaHalls.push_back(newCinemaHall);
    }
}

vector<CinemaHall*> Cinema::getCinemaHalls() {
    return cinemaHalls;
}

void Cinema::removeCinemaHall(CinemaHall *removeCinemaHall) {
    int i = 0;

    for (auto iterator = cinemaHalls.begin(); i < cinemaHalls.size(); iterator++) {
        if (cinemaHalls[i]->getName() == removeCinemaHall->getName()
            and cinemaHalls[i]->getCinema() == removeCinemaHall->getCinema()) {
            cinemaHalls.erase(iterator);
        }
        i++;
    }
}

//void Cinema::addCinemaHall(CinemaHall* newCinemaHall)
//{
//    if (!this->cinemaHalls) {
//        auto ** myCinemaHalls = new CinemaHall*[1];
//        myCinemaHalls[0] = newCinemaHall;
//        this->cinemaHalls = myCinemaHalls;
//    } else {
//        auto ** myCinemaHalls = new CinemaHall*[sizeof(this->cinemaHalls) + 1];
//        for (int i = 0; i < sizeof(this->cinemaHalls); i++) {
//            myCinemaHalls[i] = this->cinemaHalls[i];
//        }
//        myCinemaHalls[sizeof(this->cinemaHalls) + 1] = newCinemaHall;
//        delete [] this->cinemaHalls;
//        this->cinemaHalls = myCinemaHalls;
//    }
//}
//
//CinemaHall** Cinema::getCinemaHalls()
//{
//    return this->cinemaHalls;
//}
//
//void Cinema::removeCinemaHall(CinemaHall * cinemaHall)
//{
//    if (!this->cinemaHalls) {
//        CinemaHall ** myCinemaHals = new CinemaHall*[sizeof(this->cinemaHalls) - 1];
//        int j(0);
//        for (int i = 0; i < sizeof(this->cinemaHalls); i++) {
//            if (this->cinemaHalls[i] != cinemaHall) {
//                myCinemaHals[j] = this->cinemaHalls[i];
//                j++;
//            }
//        }
//        delete [] this->cinemaHalls;
//        this->cinemaHalls = myCinemaHals;
//    }
//}