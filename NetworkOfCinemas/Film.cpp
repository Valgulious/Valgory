#include "Film.h"

Film::Film(string s, int d, Session ss) {
    name = s;
    duration = d;
}

void Film::setName(string newName) {
    name = newName;
}

string Film::getName() {
    return name;
}

void Film::setDuration(int newDuration) {
    duration = newDuration;
}

int Film::getDuration()
{
    return duration;
}

void Film::addSession(Session * session)
{
    if (!this->sessions) {
        Session ** mySessions = new Session*[1];
        mySessions[0] = session;
        this->sessions = mySessions;
    } else {
        Session ** mySessions = new Session*[sizeof(this->sessions) + 1];
        for (int i = 0; i < sizeof(this->sessions); i++) {
            mySessions[i] = this->sessions[i];
        }
        mySessions[sizeof(this->sessions) + 1] = session;
        delete [] this->sessions;
        this->sessions = mySessions;
    }
}

Session** Film::getSession()
{
    return this->sessions;
}

void Film::removeSession(Session * session)
{
    if (!this->sessions) {
        Session ** mySessions = new Session*[sizeof(this->sessions) - 1];
        int j(0);
        for (int i = 0; i < sizeof(this->sessions); i++) {
            if (this->sessions[i] != session) {
                mySessions[j] = this->sessions[i];
                j++;
            }
        }
        delete [] this->sessions;
        this->sessions = mySessions;
    }
}