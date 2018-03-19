cmake_minimum_required(VERSION 3.8)
project(NetworkOfCinemas)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp

        NetworkOfCinemas.cpp
        NetworkOfCinemas.h

        Cinema.cpp
        Cinema.h

        CinemaHall.cpp
        CinemaHall.h

        Seat.cpp
        Seat.h

        Session.cpp
        Session.h

        Film.cpp
        Film.h

        SessionSerial.cpp
        SessionSerial.h)
add_executable(NetworkOfCinemas ${SOURCE_FILES})