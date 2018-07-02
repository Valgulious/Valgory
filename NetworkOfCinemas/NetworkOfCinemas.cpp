#include "NetworkOfCinemas.h"
#include <iostream>
#include "Cinema.h"

NetworkOfCinemas::NetworkOfCinemas(string name/*, Cinema ** cinema*/) {
    setName(name);
//    this->cinemas = nullptr;
}

void NetworkOfCinemas::setName(string newName) {
    name = newName;
}

string NetworkOfCinemas::getName() {
    return this->name;
}

void NetworkOfCinemas::addCinema(Cinema * newCinema) {

    if (cinemas.empty()) {
        cinemas.push_back(newCinema);
    } else {
        bool notEqually = true;
        for (int i = 0; i < cinemas.size(); i++) {
            if (cinemas[i]->getName() == newCinema->getName()
                and cinemas[i]->getNetworkOfCinemas() == newCinema->getNetworkOfCinemas()) {
                notEqually = false;
                break;
            }
        }

        if (notEqually) cinemas.push_back(newCinema);
    }

}

vector<Cinema*> NetworkOfCinemas::getCinemas() {
    return cinemas;
}

void NetworkOfCinemas::removeCinema(Cinema * removeCinema) {

    int i = 0;

    for (auto iterator = cinemas.begin(); i < cinemas.size(); iterator++) {
        if (cinemas[i]->getName() == removeCinema->getName()
                and cinemas[i]->getNetworkOfCinemas() == removeCinema->getNetworkOfCinemas()) {
            cinemas.erase(iterator);
        }
        i++;
    }

}