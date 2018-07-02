#ifndef NETWORKOFCINEMAS_NETWORKOFCINEMAS_H
#define NETWORKOFCINEMAS_NETWORKOFCINEMAS_H

#include <iostream>
#include <vector>
#include "Cinema.h"

class Cinema;


using namespace std;

class NetworkOfCinemas {

public:
    string name;
//    Cinema ** cinemas;// = nullptr;
    vector<Cinema*> cinemas;

public:
    NetworkOfCinemas(
            string name = "NetworkOfCinemas"/*,
            Cinema ** cinemas = nullptr*/
    );
    ~NetworkOfCinemas() = default;
    void setName(string newName);
    string getName();
    void addCinema(Cinema * newCinema);
    vector<Cinema*> getCinemas();
    void removeCinema(Cinema * cinema);

};


#endif //NETWORKOFCINEMAS_NETWORKOFCINEMAS_H
