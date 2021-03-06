/* Copyright 2021 Mike Kinney */
#include "messages.hpp"

void init_messages(std::string messages[]) {
    for (int i=0; i < MAX_CANNED_MESSAGES; i++) {
        messages[i] = "";
    }
    assert(messages_count(messages) == 0);
}

int messages_count(const std::string messages[]) {
    int count = 0;
    for (int i=0; i < MAX_CANNED_MESSAGES; i++) {
        if (messages[i] != "") {
            count++;
        }
    }
    return(count);
}

void split_messages(const std::string &message_string, std::string messages[]) {
    int message_count = 0;
    size_t last = 0;
    size_t next = 0;
    init_messages(messages);
    while ((next = message_string.find("|", last)) != std::string::npos) {
        messages[message_count] = message_string.substr(last, next-last);
        message_count++;
        last = next + 1;
    }
    messages[message_count] = message_string.substr(last);
}

std::string default_message_string() {
    std::string plugin_messages[MAX_CANNED_MESSAGES_PARTS];
    plugin_messages[0] = "This is one|This is two|";
    plugin_messages[1] = "This is three|This is four|";
    plugin_messages[2] = "This is five|";

    std::string messages;
    for (int i = 0; i < MAX_CANNED_MESSAGES_PARTS; i++) {
        messages += plugin_messages[i];
    }
    return(messages);
}
