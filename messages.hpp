/* Copyright 2021 Mike Kinney */

#ifndef MESSAGES_HPP_
#define MESSAGES_HPP_

#include <assert.h>

#include <cstdio>
#include <iostream>
#include <string>

#define MAX_CANNED_MESSAGES_PARTS 10
#define MAX_CANNED_MESSAGES 100

/*
 * initialize the messages array
 */
void init_messages(std::string messages[]);

/*
 * report how many messages are in the messages array
 */
int messages_count(const std::string messages[]);

/*
 * split a string into a messages array
 */
void split_messages(const std::string &message_string, std::string messages[]);

/*
 * return default messages string
 */
std::string default_message_string();

#endif  // MESSAGES_HPP_
