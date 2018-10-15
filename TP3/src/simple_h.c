#include "simple_h.h"

#define MODE_HALF_BRIDGE 0x01

static uint32_t MotorEna;
static uint32_t MotorDir;
static uint32_t MotorMode;


uint8_t SimpleH_Configure_IO(void)
{
  MotorEna = 0;
  MotorDir = 0;
  return 1;
}

uint8_t SimpleH_Configure_Mode(void)
{
  MotorMode = MODE_HALF_BRIDGE;
  return 1;
}

