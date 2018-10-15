#include "unity.h"
#include "simple_h.h"

void setUp(void)
{

}

void tearDown(void)
{

}

void test_ConfigureSimpleH_IO(void)
{
  TEST_ASSERT_EQUAL(1, SimpleH_Configure_IO());
}

void test_ConfigureSimpleH_Mode(void)
{
  TEST_ASSERT_EQUAL(1, SimpleH_Configure_Mode());
}

void test_ConfigureSimpleH_PWM_Freq(void)
{
  uint8_t desiredDuty = 70;
  TEST_ASSERT_EQUAL(716, SimpleH_SetDuty(desiredDuty));
}
