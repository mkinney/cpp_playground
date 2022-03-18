/* Copyright 2021 Mike Kinney */
#include "./acutest.h"
#include "./melody.hpp"

void test_tones(void) {
    Melody m = Melody();
    TEST_CHECK(m.tones() == "");
}

void test_nokia(void) {
    Melody nokia = Melody();
    // source: https://github.com/robsoncouto/arduino-songs/blob/master/nokia/nokia.ino
    string expected = "E5,8 D5,8 FS4,4 GS4,4 CS5,8 B4,8 D4,4 E4,4 B4,8 A4,8 CS4,4 E4,4 A4,2";
    nokia.set(expected);
    string got = nokia.tones();
    TEST_CHECK(got == expected);
    TEST_MSG("Expected:%s:", expected.c_str());
    TEST_MSG("     Got:%s:", got.c_str());
}

void test_pacman(void) {
    Melody pacman = Melody();
    // source: https://github.com/robsoncouto/arduino-songs/blob/master/pacman/pacman.ino
    string expected = "B4,16 B5,16 FS5,16 DS5,16 B5,32 FS5,16 DS5,8 C5,16 C6,16 G6,16 E6,16 C6,32 G6,16 E6,8 B4,16 B5,16 FS5,16 DS5,16 B5,32 FS5,16 DS5,8 DS5,32 E5,32 F5,32 F5,32 FS5,32 G5,32 G5,32 GS5,32 A5,16 B5,8";
    pacman.set(expected);
    string got = pacman.tones();
    TEST_CHECK(got == expected);
    TEST_MSG("Expected:%s:", expected.c_str());
    TEST_MSG("     Got:%s:", got.c_str());
}

void test_starwars(void) {
    Melody starwars = Melody();
    // source: https://github.com/robsoncouto/arduino-songs/blob/master/starwars/starwars.ino
    string expected = "AS4,8 AS4,8 AS4,8 F5,2 C6,2 AS5,8 A5,8 G5,8 F6,2 C6,4 AS5,8 A5,8 G5,8 F6,2 C6,4 AS5,8 A5,8 AS5,8 G5,2 C5,8 C5,8 C5,8 F5,2 C6,2 AS5,8 A5,8 G5,8 F6,2 C6,4 AS5,8 A5,8 G5,8 F6,2 C6,4 AS5,8 A5,8 AS5,8 G5,2 C5,-8 C5,16 D5,-4 D5,8 AS5,8 A5,8 G5,8 F5,8 F5,8 G5,8 A5,8 G5,4 D5,8 E5,4 C5,-8 C5,16 D5,-4 D5,8 AS5,8 A5,8 G5,8 F5,8 C6,-8 G5,16 G5,2 REST,8 C5,8 D5,-4 D5,8 AS5,8 A5,8 G5,8 F5,8 F5,8 G5,8 A5,8 G5,4 D5,8 E5,4 C6,-8 C6,16 F6,4 DS6,8 CS6,4 C6,8 AS5,4 GS5,8 G5,4 F5,8 C6,1";
    starwars.set(expected);
    string got = starwars.tones();
    TEST_CHECK(got == expected);
    TEST_MSG("Expected:%s:", expected.c_str());
    TEST_MSG("     Got:%s:", got.c_str());
}


TEST_LIST = {
    { "test_tones", test_tones},
    { "test_nokia", test_nokia},
    { "test_pacman", test_pacman},
    { "test_starwars", test_starwars},
    { NULL, NULL }     /* zeroed record marking the end of the list */
};
