cmake_minimum_required(VERSION 3.20)
project(untitled4)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled4 main.cpp Instrument.h Instrument.cpp StringedInstruments.cpp StringedInstruments.h BowInstruments.cpp BowInstruments.h KeyboardInstruments.cpp KeyboardInstruments.h Database.cpp Database.h Defines.h)
