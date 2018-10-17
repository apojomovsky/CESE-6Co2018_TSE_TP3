#include <stdint.h>

#include "ascensor.h"

#define NUM_PISOS 3

void configurar_ascensor(ascensor_t *ascensor, sensor_de_piso_t *sensor, motor_t *motor) {
    ascensor->numPisos = NUM_PISOS;
    configurar_sensor_de_piso(sensor, 1);
    configurar_motor(motor, 2, 3);
    ascensor->sensorDePiso = sensor;
    ascensor->motor = motor;
}

int8_t subir_un_piso(ascensor_t *ascensor) {
    if(piso_actual(ascensor) < ascensor->numPisos) {
        uint8_t pisoDeseado = piso_actual(ascensor) + 1;
        while(piso_actual(ascensor) != pisoDeseado) {
            subir(ascensor->motor);
        }
        detener(ascensor->motor);
        return piso_actual(ascensor);
    }
    return -1;
}

int8_t bajar_un_piso(ascensor_t *ascensor) {
    if(piso_actual(ascensor) > 1) {
        uint8_t pisoDeseado = piso_actual(ascensor) - 1;
        while(piso_actual(ascensor) != pisoDeseado) {
            bajar(ascensor->motor);
        }
        detener(ascensor->motor);
        return piso_actual(ascensor);
    }
    return -1;
}

uint8_t piso_actual(ascensor_t *ascensor) {
    return ascensor->sensorDePiso->pisoActual;
}
