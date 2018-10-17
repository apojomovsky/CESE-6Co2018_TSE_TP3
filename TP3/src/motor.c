void configurar_motor(motor_t *motor, uint32_t pinSubir, uint32_t pinBajar) {
    motor->pinSubir = pinSubir;
    motor->pinBajar = pinBajar;
}

void subir(motor_t *motor) {
    motor->registroSubir = 1;
}

void bajar(motor_t *motor) {
    motor->registroBajar = 1;
}

void detener(motor_t *motor) {
    motor->registroSubir = 0;
    motor->registroBajar = 0;
}
