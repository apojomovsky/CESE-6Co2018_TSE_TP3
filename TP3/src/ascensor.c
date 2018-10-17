#include "ascensor.h"
#include "motor.h"
#include "sensor_de_piso.h"

#define NUM_PISOS 3

void configurar_ascensor(ascensor_t *ascensor, sensor_de_piso_t *sensor, motor_t *motor) {
    ascensor->numPisos = NUM_PISOS;
    ascensor->sensorDePiso = sensor;
    ascensor->motor = motor;
    configurar_sensor_de_piso(ascensor->sensor);
    configurar_motor(ascensor->motor);
}

int8_t subir(ascensor_t *ascensor) {
    if(ascensor->sensorDePiso < ascensor->numPisos) {
        ascensor->pisoDeseado = ascensor->sensorDePiso.piso_actual() + 1;
        ascensor->motor.subir();
        while(ascensor->sensorDePiso != ascensor->pisoDeseado) {
            ascensor->motor.subir();
        }
        ascensor->motor.detener();
        return ascensor->sensorDePiso.piso_actual();
    }
    return -1;
}

int8_t bajar(ascensor_t *ascensor) {
    if(ascensor->sensorDePiso > 1) {
        ascensor->pisoDeseado = ascensor->sensorDePiso.piso_actual() - 1;
        ascensor->motor.subir();
        while(ascensor->sensorDePiso != ascensor->pisoDeseado) {
            ascensor->motor.bajar();
        }
        ascensor->motor.detener();
        return ascensor->sensorDePiso.piso_actual();
    }
    return -1;
}
