#ifndef NETWORKOFCINEMAS_FILM_H
#define NETWORKOFCINEMAS_FILM_H

#include "iostream"
#include "Session.h"

using namespace std;

class Session;

class Film {

protected:
    string name;
    int duration;
//    Session session[];
    Session ** sessions = nullptr;

public:
    Film(string, int, Session*);
    ~Film();
    void setName(string);
    string getName();
    void setDuration(int);
    int getDuration();
    void addSession(Session*);
    Session** getSession();
    void removeSession(Session*);
};


#endif //NETWORKOFCINEMAS_FILM_H
