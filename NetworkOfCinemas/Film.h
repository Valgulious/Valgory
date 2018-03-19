#ifndef NETWORKOFCINEMAS_FILM_H
#define NETWORKOFCINEMAS_FILM_H

#include "iostream"
#include "Session.h"

using namespace std;

class Film {

public:

    string name;
    int duration;
    Session session[];

    Film(string, int, Session);
    void setName(string);
    string getName();
    void setDuration(int);
    int getDuration();
    void addSession(Session);
    Session getSession();
    void removeSession(Session);
};


#endif //NETWORKOFCINEMAS_FILM_H
