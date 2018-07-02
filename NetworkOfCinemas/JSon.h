#ifndef NETWORKOFCINEMAS_JSON_H
#define NETWORKOFCINEMAS_JSON_H

#include <iostream>
#include <fstream>
#include "json.hpp"
#include "NetworkOfCinemas.h"

using json = nlohmann::json;
using namespace std;

class NetworkOfCinemas;

class JSon {
public:
    void pars(NetworkOfCinemas networkOfCinemas);
};


#endif //NETWORKOFCINEMAS_JSON_H
