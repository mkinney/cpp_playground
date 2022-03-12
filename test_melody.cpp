/* Copyright 2021 Mike Kinney */
#include "./acutest.h"
#include "./melody.hpp"

void test_tokenizer_empty(void) {
    vector<string> expected;
    vector<string> got = tokenizer("");
    TEST_CHECK(expected == got);
}

void test_tokenizer_a_b_c(void) {
    vector<string> expected = {"A", "B", "C"};
    vector<string> got = tokenizer("A B C");
    TEST_CHECK(expected == got);
}

TEST_LIST = {
    { "test_tokenizer_empty", test_tokenizer_empty},
    { "test_tokenizer_a_b_c", test_tokenizer_a_b_c},
    { NULL, NULL }     /* zeroed record marking the end of the list */
};
