#include "unity.h"
#include "ascensor.h"
#include "mock_motor.h"
#include "mock_sensor_de_piso.h"


void setUp(void)
{
  ascensor_t ascensor;
  sensor_de_piso_t sensor;
  motor_t motor;
  configurar_ascensor(&ascensor, &sensor, &motor);
}

void tearDown(void)
{

}

void test_ConfigurarAscensor(void)
{
  TEST_ASSERT_EQUAL(TRUE, configurar_ascensor());
}
