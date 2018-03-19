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