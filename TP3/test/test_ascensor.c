#include <stdint.h>

#include "unity.h"
#include "ascensor.h"

ascensor_t ascensor;
sensor_de_piso_t sensor;
motor_t motor;

void setUp(void)
{
  configurar_ascensor(&ascensor, &sensor, &motor);
}

void tearDown(void)
{
  return;
}

void test_subir_estando_en_planta_baja(void)
{
  piso_actual(&ascensor);
  TEST_ASSERT_EQUAL(1, 1);
}
