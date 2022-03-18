/* Copyright 2021 Mike Kinney */
#include "./acutest.h"
#include "./melody.hpp"

void test_tones(void) {
    Melody m = Melody();
    TEST_CHECK(m.tones() == "");
}

void test_set_nokia_string(void) {
    Melody nokia = Melody();
    // source: https://github.com/robsoncouto/arduino-songs/blob/master/nokia/nokia.ino
    string expected = "E5-8 D5-8 FS4-4 GS4-4 CS5-8 B4-8 D4-4 E4-4 B4-8 A4-8 CS4-4 E4-4 A4-2";
    nokia.set(expected);
    string got = nokia.tones();
    TEST_CHECK(got == expected);
    TEST_MSG("Expected:%s:", expected.c_str());
    TEST_MSG("     Got:%s:", got.c_str());
}


TEST_LIST = {
    { "test_tones", test_tones},
    { "test_set_nokia_string", test_set_nokia_string},
    { NULL, NULL }     /* zeroed record marking the end of the list */
};
