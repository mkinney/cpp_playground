/* Copyright 2021 Mike Kinney */
#include "melody.hpp"

vector<string> tokenizer(const string& input, char delim)  {
    vector<string> tokens;
    stringstream my_stringstream(input);
    string temp;

    while(getline(my_stringstream, temp, delim)) {
        tokens.push_back(temp);
    }
    return tokens;
}
