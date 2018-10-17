#include <stdint.h>

#include "motor.h"
#include "sensor_de_piso.h"

typedef struct {
    uint8_t numPisos;
    sensor_de_piso_t *sensorDePiso;
    motor_t *motor;
} ascensor_t;

// Retorna el piso actual
void configurar_ascensor(ascensor_t *ascensor, sensor_de_piso_t *sensor, motor_t *motor);

int8_t subir_un_piso(ascensor_t *ascensor);

int8_t bajar_un_piso(ascensor_t *ascensor);

uint8_t piso_actual(ascensor_t *ascensor);
