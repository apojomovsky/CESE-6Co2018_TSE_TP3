#include <stdint.h>

typedef struct {
    uint32_t pinSubir;
    uint8_t pinBajar;
} motor_t;

void configurar_motor(motor_t *motor, uint32_t pinSubir, uint32_t pinBajar);

void subir(motor_t *motor);

void bajar(motor_t *motor);

void detener(motor_t *motor);
