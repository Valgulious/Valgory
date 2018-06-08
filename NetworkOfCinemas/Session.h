#ifndef NETWORKOFCINEMAS_SESSION_H
#define NETWORKOFCINEMAS_SESSION_H

#include "iostream"
#include "CinemaHall.h"
#include "Film.h"
#include "SessionSerial.h"

using namespace std;

class Session {

protected:
    Film * film;
    SessionSerial sessionSerial;
    CinemaHall * cinemaHall;
    Date date;

public:
    Session(SessionSerial, Date, CinemaHall*, Film*);
    ~Session();
    void setSessionSerial(SessionSerial);
    SessionSerial getSessionSerial();
    void setFilm(Film*);
    Film * getFilm();
    void setCinemaHall(CinemaHall*);
    CinemaHall * getCinemaHall();
    void setDate(Date);
    Date getDate();
};


#endif //NETWORKOFCINEMAS_SESSION_H
