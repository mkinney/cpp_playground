/* Copyright 2021 Mike Kinney */

#ifndef MELODY_HPP_
#define MELODY_HPP_

#include <assert.h>

#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

/*
 * split a string by whitespace
 */
vector<string> tokenizer(const string& input, char delim=' ');


/*
 * split a string into a melody
 */
//void melody_from_string(const std::string &input, std::string melody[]);

#endif  // MELODY_HPP_
