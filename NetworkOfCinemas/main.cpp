#include <iostream>
#include "JSon.h"
#include "NetworkOfCinemas.h"

int main() {
//    JSon testObject;
//    testObject.pars();
    NetworkOfCinemas networkOfCinemas("Лесок");
//    cout << networkOfCinemas.getName() << endl;
//    cout << sizeof(Cinema) << endl;

    Cinema cinema1("Калинка", &networkOfCinemas);
    Cinema cinema2("Берёзка", &networkOfCinemas);
    Cinema cinema3("Дубок", &networkOfCinemas);

    networkOfCinemas.addCinema(&cinema1);
    networkOfCinemas.addCinema(&cinema2);
    networkOfCinemas.addCinema(&cinema3);

    CinemaHall cinemaHall1("Корешок", 1, &cinema1);
    CinemaHall cinemaHall2("Листок", 1, &cinema2);
    CinemaHall cinemaHall3("Веточка", 1, &cinema3);

    cinema1.addCinemaHall(&cinemaHall1);
    cinema2.addCinemaHall(&cinemaHall2);
    cinema3.addCinemaHall(&cinemaHall3);

    JSon networkOfCinemas1FSON;
    networkOfCinemas1FSON.pars(networkOfCinemas);

    cout << networkOfCinemas.cinemas[0]->cinemaHalls[0]->getName() << endl;

    return 0;
}