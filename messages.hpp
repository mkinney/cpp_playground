#include <cstdio>
#include <iostream>
#include <string>

#define MAX_CANNED_MESSAGES_PARTS 10
#define MAX_CANNED_MESSAGES 100

void init_messages(std::string messages[]);
int messages_count(std::string messages[]);
void split_messages(std::string message_string, std::string messages[]);
std::string get_message_string();
