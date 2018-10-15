#include "simple_h.h"

static uint32_t MotorEna;
static uint32_t MotorDir;

uint8_t SimpleH_Configure_IO(void)
{
  MotorEna = 0;
  MotorDir = 0;
  return 1;
}

