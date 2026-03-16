#include "unity.h"
#include <string.h>

/* Function provided by the assignment code */
extern int validate_username(const char *username);

/* Test function */
void test_validate_username(void)
{
    /* This should match your github username */
    TEST_ASSERT_EQUAL(1, validate_username("kumudahb"));

    /* Test with an incorrect username */
    TEST_ASSERT_EQUAL(0, validate_username("wrongusername"));
}
