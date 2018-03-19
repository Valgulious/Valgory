#include "NetworkOfCinemas.h"

NetworkOfCinemas::NetworkOfCinemas(string s) {
    name = s;
}

void NetworkOfCinemas::setName(string newName) {
    name = newName;
}

string NetworkOfCinemas::getName() {
    return name;
}


