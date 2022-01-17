#include "acutest.h"
#include "messages.hpp"

void test_get_message_string(void) {
	std::string message_string = get_message_string();
	TEST_CHECK(message_string == "This is one|This is two|This is three|This is four|This is five|");
}

void test_split_messages_empty(void) {
	std::string messages[MAX_CANNED_MESSAGES];
	split_messages("", messages);
	TEST_CHECK(messages_count(messages) == 0);
}

void test_split_messages_default(void) {
	std::string messages[MAX_CANNED_MESSAGES];
	std::string message_string = get_message_string();
	split_messages(message_string, messages);
	TEST_CHECK(messages_count(messages) == 5);
}

void test_init_messages(void) {
	std::string messages[MAX_CANNED_MESSAGES];
	TEST_CHECK(messages_count(messages) == 0);
	std::string message_string = get_message_string();
	split_messages(message_string, messages);
	TEST_CHECK(messages_count(messages) == 5);
	init_messages(messages);
	TEST_CHECK(messages_count(messages) == 0);
}

TEST_LIST = {
   { "get_message_string", test_get_message_string},
   { "split_messages_empty", test_split_messages_empty},
   { "split_messages_default", test_split_messages_default},
   { "init_messages", test_init_messages},
   { NULL, NULL }     /* zeroed record marking the end of the list */
};
