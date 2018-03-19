#ifndef NETWORKOFCINEMAS_SESSION_H
#define NETWORKOFCINEMAS_SESSION_H

#include "iostream"
#include "CinemaHall.h"
#include "Film.h"
#include "SessionSerial.h"

using namespace std;

class Session {

public:

    Film film;
    SessionSerial sessionSerial;
    CinemaHall cinemaHall;
    Date date;

    Session(SessionSerial, Date, CinemaHall, Film);
    void setSessionSerial(SessionSerial);
    SessionSerial getSessionSerial();
    void setFilm(Film);
    Film getFilm();
    void setCinemaHall(CinemaHall);
    CinemaHall getCinemaHall();
    void setDate(Date);
    Date getDate();
};


#endif //NETWORKOFCINEMAS_SESSION_H
