#include "unity.h"
#include "simple_h.h"

void setUp(void)
{

}

void tearDown(void)
{

}

void test_ConfigureSimpleH(void)
{
  TEST_ASSERT_EQUAL(1, SimpleH_Configure());
}

