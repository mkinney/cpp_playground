/* Copyright 2021 Mike Kinney */

#ifndef UTIL_HPP_
#define UTIL_HPP_

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

#endif  // UTIL_HPP_
