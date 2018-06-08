#include "Film.h"

Film::Film(string name, int duration, Session * session) {
    setName(name);
    setDuration(duration);
    addSession(session);
}

Film::~Film() {
    delete name;
    delete duration;
    delete sessions;
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

void Film::addSession(Session * newSession)
{
    if (!this->sessions) {
        Session ** mySessions = new Session*[1];
        mySessions[0] = newSession;
        this->sessions = mySessions;
    } else {
        Session ** mySessions = new Session*[sizeof(this->sessions) + 1];
        for (int i = 0; i < sizeof(this->sessions); i++) {
            mySessions[i] = this->sessions[i];
        }
        mySessions[sizeof(this->sessions) + 1] = newSession;
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