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