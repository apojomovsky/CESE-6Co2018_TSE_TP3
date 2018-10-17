#include "sensor_de_piso.h"

void configurar_sensor_de_piso(sensor_de_piso_t *sensor, uint32_t pin) {
    sensor->pin = pin;
}

uint8_t piso_actual(sensor_de_piso_t *sensor) {
    return sensor->piso_actual;
}
