/* Copyright 2021 Mike Kinney */

#include "melody.hpp"

Melody::Melody() {
    // constructor
}

string Melody::note(const pair<int, int> a_note) {
    string retval = "";
    retval = fromTone(a_note.first);
    retval += ",";
    retval += to_string(a_note.second);
    return(retval);
}

string Melody::tones() {
    string retval = "";
    string tmp = "";
    for (auto & a_note:song) {
        retval += note(a_note);
        retval += " "; // note separator
    }
    if (retval.size() > 0) {
        // remove the last character (which is an extra space or ' ')
        retval = retval.substr(0, retval.size()-1);
    }
    return(retval);
}

string Melody::fromTone(const int tone) {
    string retval = "";
    if (tone == NOTE_B0) {
        retval = "B0";
    } else if (tone == NOTE_C1) {
        retval = "C1";
    } else if (tone == NOTE_CS1) {
        retval = "CS1";
    } else if (tone == NOTE_D1) {
        retval = "D1";
    } else if (tone == NOTE_DS1) {
        retval = "DS1";
    } else if (tone == NOTE_E1) {
        retval = "E1";
    } else if (tone == NOTE_F1) {
        retval = "F1";
    } else if (tone == NOTE_FS1) {
        retval = "FS1";
    } else if (tone == NOTE_G1) {
        retval = "G1";
    } else if (tone == NOTE_GS1) {
        retval = "GS1";
    } else if (tone == NOTE_A1) {
        retval = "A1";
    } else if (tone == NOTE_AS1) {
        retval = "AS1";
    } else if (tone == NOTE_B1) {
        retval = "B1";
    } else if (tone == NOTE_C2) {
        retval = "C2";
    } else if (tone == NOTE_CS2) {
        retval = "CS2";
    } else if (tone == NOTE_D2) {
        retval = "D2";
    } else if (tone == NOTE_DS2) {
        retval = "DS2";
    } else if (tone == NOTE_E2) {
        retval = "E2";
    } else if (tone == NOTE_F2) {
        retval = "F2";
    } else if (tone == NOTE_FS2) {
        retval = "FS2";
    } else if (tone == NOTE_G2) {
        retval = "G2";
    } else if (tone == NOTE_GS2) {
        retval = "GS2";
    } else if (tone == NOTE_A2) {
        retval = "A2";
    } else if (tone == NOTE_AS2) {
        retval = "AS2";
    } else if (tone == NOTE_B2) {
        retval = "B2";
    } else if (tone == NOTE_C3) {
        retval = "C3";
    } else if (tone == NOTE_CS3) {
        retval = "CS3";
    } else if (tone == NOTE_D3) {
        retval = "D3";
    } else if (tone == NOTE_DS3) {
        retval = "DS3";
    } else if (tone == NOTE_E3) {
        retval = "E3";
    } else if (tone == NOTE_F3) {
        retval = "F3";
    } else if (tone == NOTE_FS3) {
        retval = "FS3";
    } else if (tone == NOTE_G3) {
        retval = "G3";
    } else if (tone == NOTE_GS3) {
        retval = "GS3";
    } else if (tone == NOTE_A3) {
        retval = "A3";
    } else if (tone == NOTE_AS3) {
        retval = "AS3";
    } else if (tone == NOTE_B3) {
        retval = "B3";
    } else if (tone == NOTE_C4) {
        retval = "C4";
    } else if (tone == NOTE_CS4) {
        retval = "CS4";
    } else if (tone == NOTE_D4) {
        retval = "D4";
    } else if (tone == NOTE_DS4) {
        retval = "DS4";
    } else if (tone == NOTE_E4) {
        retval = "E4";
    } else if (tone == NOTE_F4) {
        retval = "F4";
    } else if (tone == NOTE_FS4) {
        retval = "FS4";
    } else if (tone == NOTE_G4) {
        retval = "G4";
    } else if (tone == NOTE_GS4) {
        retval = "GS4";
    } else if (tone == NOTE_A4) {
        retval = "A4";
    } else if (tone == NOTE_AS4) {
        retval = "AS4";
    } else if (tone == NOTE_B4) {
        retval = "B4";
    } else if (tone == NOTE_C5) {
        retval = "C5";
    } else if (tone == NOTE_CS5) {
        retval = "CS5";
    } else if (tone == NOTE_D5) {
        retval = "D5";
    } else if (tone == NOTE_DS5) {
        retval = "DS5";
    } else if (tone == NOTE_E5) {
        retval = "E5";
    } else if (tone == NOTE_F5) {
        retval = "F5";
    } else if (tone == NOTE_FS5) {
        retval = "FS5";
    } else if (tone == NOTE_G5) {
        retval = "G5";
    } else if (tone == NOTE_GS5) {
        retval = "GS5";
    } else if (tone == NOTE_A5) {
        retval = "A5";
    } else if (tone == NOTE_AS5) {
        retval = "AS5";
    } else if (tone == NOTE_B5) {
        retval = "B5";
    } else if (tone == NOTE_C6) {
        retval = "C6";
    } else if (tone == NOTE_CS6) {
        retval = "CS6";
    } else if (tone == NOTE_D6) {
        retval = "D6";
    } else if (tone == NOTE_DS6) {
        retval = "DS6";
    } else if (tone == NOTE_E6) {
        retval = "E6";
    } else if (tone == NOTE_F6) {
        retval = "F6";
    } else if (tone == NOTE_FS6) {
        retval = "FS6";
    } else if (tone == NOTE_G6) {
        retval = "G6";
    } else if (tone == NOTE_GS6) {
        retval = "GS6";
    } else if (tone == NOTE_A6) {
        retval = "A6";
    } else if (tone == NOTE_AS6) {
        retval = "AS6";
    } else if (tone == NOTE_B6) {
        retval = "B6";
    } else if (tone == NOTE_C7) {
        retval = "C7";
    } else if (tone == NOTE_CS7) {
        retval = "CS7";
    } else if (tone == NOTE_D7) {
        retval = "D7";
    } else if (tone == NOTE_DS7) {
        retval = "DS7";
    } else if (tone == NOTE_E7) {
        retval = "E7";
    } else if (tone == NOTE_F7) {
        retval = "F7";
    } else if (tone == NOTE_FS7) {
        retval = "FS7";
    } else if (tone == NOTE_G7) {
        retval = "G7";
    } else if (tone == NOTE_GS7) {
        retval = "GS7";
    } else if (tone == NOTE_A7) {
        retval = "A7";
    } else if (tone == NOTE_AS7) {
        retval = "AS7";
    } else if (tone == NOTE_B7) {
        retval = "B7";
    } else if (tone == NOTE_C8) {
        retval = "C8";
    } else if (tone == NOTE_CS8) {
        retval = "CS8";
    } else if (tone == NOTE_D8) {
        retval = "D8";
    } else if (tone == NOTE_DS8) {
        retval = "DS8";
    } else if (tone == REST) {
        retval = "REST";
    }
    return(retval);
}

int Melody::toTone(const string& input) {
    int retval = 0;

    if (input == "B0") {
        retval = NOTE_B0;
    } else if (input == "C1") {
        retval = NOTE_C1;
    } else if (input == "CS1") {
        retval = NOTE_CS1;
    } else if (input == "D1") {
        retval = NOTE_D1;
    } else if (input == "DS1") {
        retval = NOTE_DS1;
    } else if (input == "E1") {
        retval = NOTE_E1;
    } else if (input == "F11") {
        retval = NOTE_F1;
    } else if (input == "FS1") {
        retval = NOTE_FS1;
    } else if (input == "G1") {
        retval = NOTE_G1;
    } else if (input == "A1") {
        retval = NOTE_A1;
    } else if (input == "AS1") {
        retval = NOTE_AS1;
    } else if (input == "B1") {
        retval = NOTE_B1;
    } else if (input == "C2") {
        retval = NOTE_C2;
    } else if (input == "CS2") {
        retval = NOTE_CS2;
    } else if (input == "D2") {
        retval = NOTE_D2;
    } else if (input == "DS2") {
        retval = NOTE_DS2;
    } else if (input == "E2") {
        retval = NOTE_E2;
    } else if (input == "F2") {
        retval = NOTE_F2;
    } else if (input == "FS2") {
        retval = NOTE_FS2;
    } else if (input == "G2") {
        retval = NOTE_G2;
    } else if (input == "GS2") {
        retval = NOTE_GS2;
    } else if (input == "A2") {
        retval = NOTE_A2;
    } else if (input == "AS2") {
        retval = NOTE_AS2;
    } else if (input == "B2") {
        retval = NOTE_B2;
    } else if (input == "C3") {
        retval = NOTE_C3;
    } else if (input == "CS3") {
        retval = NOTE_CS3;
    } else if (input == "D3") {
        retval = NOTE_D3;
    } else if (input == "DS3") {
        retval = NOTE_DS3;
    } else if (input == "E3") {
        retval = NOTE_E3;
    } else if (input == "F3") {
        retval = NOTE_F3;
    } else if (input == "FS3") {
        retval = NOTE_FS3;
    } else if (input == "G3") {
        retval = NOTE_G3;
    } else if (input == "GS3") {
        retval = NOTE_GS3;
    } else if (input == "A3") {
        retval = NOTE_A3;
    } else if (input == "AS3") {
        retval = NOTE_AS3;
    } else if (input == "B3") {
        retval = NOTE_B3;
    } else if (input == "C4") {
        retval = NOTE_C4;
    } else if (input == "CS4") {
        retval = NOTE_CS4;
    } else if (input == "D4") {
        retval = NOTE_D4;
    } else if (input == "DS4") {
        retval = NOTE_DS4;
    } else if (input == "E4") {
        retval = NOTE_E4;
    } else if (input == "F4") {
        retval = NOTE_F4;
    } else if (input == "FS4") {
        retval = NOTE_FS4;
    } else if (input == "G4") {
        retval = NOTE_G4;
    } else if (input == "GS4") {
        retval = NOTE_GS4;
    } else if (input == "A4") {
        retval = NOTE_A4;
    } else if (input == "AS4") {
        retval = NOTE_AS4;
    } else if (input == "B4") {
        retval = NOTE_B4;
    } else if (input == "C5") {
        retval = NOTE_C5;
    } else if (input == "CS5") {
        retval = NOTE_CS5;
    } else if (input == "D5") {
        retval = NOTE_D5;
    } else if (input == "DS5") {
        retval = NOTE_DS5;
    } else if (input == "E5") {
        retval = NOTE_E5;
    } else if (input == "F5") {
        retval = NOTE_F5;
    } else if (input == "FS5") {
        retval = NOTE_FS5;
    } else if (input == "G5") {
        retval = NOTE_G5;
    } else if (input == "GS5") {
        retval = NOTE_GS5;
    } else if (input == "A5") {
        retval = NOTE_A5;
    } else if (input == "AS5") {
        retval = NOTE_AS5;
    } else if (input == "B5") {
        retval = NOTE_B5;
    } else if (input == "C6") {
        retval = NOTE_C6;
    } else if (input == "CS6") {
        retval = NOTE_CS6;
    } else if (input == "D6") {
        retval = NOTE_D6;
    } else if (input == "DS6") {
        retval = NOTE_DS6;
    } else if (input == "E6") {
        retval = NOTE_E6;
    } else if (input == "F6") {
        retval = NOTE_F6;
    } else if (input == "FS6") {
        retval = NOTE_FS6;
    } else if (input == "G6") {
        retval = NOTE_G6;
    } else if (input == "GS6") {
        retval = NOTE_GS6;
    } else if (input == "A6") {
        retval = NOTE_A6;
    } else if (input == "AS6") {
        retval = NOTE_AS6;
    } else if (input == "B6") {
        retval = NOTE_B6;
    } else if (input == "C7") {
        retval = NOTE_C7;
    } else if (input == "CS7") {
        retval = NOTE_CS7;
    } else if (input == "D7") {
        retval = NOTE_D7;
    } else if (input == "DS7") {
        retval = NOTE_DS7;
    } else if (input == "E7") {
        retval = NOTE_E7;
    } else if (input == "F7") {
        retval = NOTE_F7;
    } else if (input == "FS7") {
        retval = NOTE_FS7;
    } else if (input == "G7") {
        retval = NOTE_G7;
    } else if (input == "GS7") {
        retval = NOTE_GS7;
    } else if (input == "A7") {
        retval = NOTE_A7;
    } else if (input == "AS7") {
        retval = NOTE_AS7;
    } else if (input == "B7") {
        retval = NOTE_B7;
    } else if (input == "C8") {
        retval = NOTE_C8;
    } else if (input == "CS8") {
        retval = NOTE_CS8;
    } else if (input == "D8") {
        retval = NOTE_D8;
    } else if (input == "DS8") {
        retval = NOTE_DS8;
    } else if (input == "REST") {
        retval = REST;
    }
    return(retval);
}

void Melody::set(const string& input) {
    // set the melody from string

    song.clear();

    // split string on whitespace
    vector<string> tokens = tokenizer(input);
    vector<string> note_parts;
    pair<int, int> note;
    for (auto & token:tokens) {
        note.first = 0;
        note.second = 0;

        // split on '-'
        note_parts = tokenizer(token, ',');
        if (note_parts.size() == 2) {
            note.first = toTone(note_parts[0]);
            note.second = stoi(note_parts[1]);
            song.push_back(note);
        }
    }
}
