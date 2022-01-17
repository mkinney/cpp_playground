#include "acutest.h"

void test_split_messages(void) {
	TEST_CHECK(1 == 1);
}

TEST_LIST = {
   { "split_messages", test_split_messages},
   { NULL, NULL }     /* zeroed record marking the end of the list */
};
