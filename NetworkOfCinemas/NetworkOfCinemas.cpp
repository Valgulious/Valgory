#include "NetworkOfCinemas.h"
#include <iostream>;
#include <vector>;

NetworkOfCinemas::NetworkOfCinemas(string s) {
    name = s;
}

void NetworkOfCinemas::setName(string newName) {
    name = newName;
}

string NetworkOfCinemas::getName() {
    return name;
}

void NetworkOfCinemas::addCinema(Cinema * cinema)
{
    if (!this->cinemas) {
        Cinema ** myCinemas = new Cinema*[1];
        myCinemas[0] = cinema;
        this->cinemas = myCinemas;
    } else {
        Cinema ** myCinemas = new Cinema*[sizeof(this->cinemas) + 1];
        for (int i = 0; i < sizeof(this->cinemas); i++) {
            myCinemas[i] = this->cinemas[i];
        }
        myCinemas[sizeof(this->cinemas) + 1] = cinema;
        delete [] this->cinemas;
        this->cinemas = myCinemas;
    }
 }

void NetworkOfCinemas::removeCinema(Cinema)
{

}

Cinema ** NetworkOfCinemas::getCinemas()
{
    return this->cinemas;
}
