#include "unity.h"
#include "calculator.h"

void setUp(void) {
    // This runs before each test, leave empty for now.
}

void tearDown(void) {
    // This runs after each test, leave empty for now.
}

void test_add(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3));
    TEST_ASSERT_EQUAL(-1, add(-2, 1));
}

void test_subtract(void) {
    TEST_ASSERT_EQUAL(3, subtract(5, 2));
    TEST_ASSERT_EQUAL(-3, subtract(2, 5));
}

void test_multiply(void) {
    TEST_ASSERT_EQUAL(10, multiply(2, 5));
    TEST_ASSERT_EQUAL(-10, multiply(-2, 5));
    TEST_ASSERT_EQUAL(0, multiply(10, 0));
}

void test_subtract_zero(void) {
    TEST_ASSERT_EQUAL(5, subtract(5, 0)); // New test
}


void test_divide(void) {
    TEST_ASSERT_EQUAL(2, divide(10, 5));
    TEST_ASSERT_EQUAL(-2, divide(-10, 5));
    TEST_ASSERT_EQUAL(0, divide(5, 0)); // Handling divide by zero
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_subtract);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);
    return UNITY_END();
}
