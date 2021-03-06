/* Copyright 2021 Mike Kinney */
#include <cstdio>
#include <iostream>
#include <string>

#include "messages.hpp"

/*
 * main program
 */
int main() {
    std::string message_string = default_message_string();
    std::cout << "message_string:" << message_string << std::endl;
    std::string messages[MAX_CANNED_MESSAGES];
    split_messages(message_string, messages);
    std::cout << "messages:" << std::endl;
    for (int i = 0; i < MAX_CANNED_MESSAGES; i++) {
        if (messages[i] != "") {
            std::cout << " " << messages[i] << std::endl;
        }
    }
}
