#include "NetworkOfCinemas.h"
#include <iostream>;
#include <vector>;

NetworkOfCinemas::NetworkOfCinemas(string name) {
    setName(name);
}

NetworkOfCinemas::~NetworkOfCinemas(){
    delete name;
    delete [] cinemas;
}

string NetworkOfCinemas::getName() {
    return this->name;
}

void NetworkOfCinemas::addCinema(Cinema * newCinema)
{
    if (!this->cinemas) {
        Cinema ** myCinemas = new Cinema*[1];

        myCinemas[0] = newCinema;
        this->cinemas = myCinemas;
    } else {
        Cinema ** myCinemas = new Cinema*[sizeof(this->cinemas) + 1];
        for (int i = 0; i < sizeof(this->cinemas); i++) {
            myCinemas[i] = this->cinemas[i];
        }
        myCinemas[sizeof(this->cinemas) + 1] = newCinema;
        delete [] this->cinemas;
        this->cinemas = myCinemas;
    }
 }

void NetworkOfCinemas::removeCinema(Cinema * cinema)
{
    if (!this->cinemas) {
        Cinema ** myCinemas = new Cinema*[sizeof(this->cinemas) - 1];
        int j(0);
        for (int i = 0; i < sizeof(this->cinemas); i++) {
            if (this->cinemas[i] != cinema) {
                myCinemas[j] = this->cinemas[i];
                j++;
            }
        }
        delete [] this->cinemas;
        this->cinemas = myCinemas;
    }
}

Cinema ** NetworkOfCinemas::getCinemas()
{
    return this->cinemas;
}
