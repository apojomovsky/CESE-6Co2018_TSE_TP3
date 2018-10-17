typedef struct {
    uint32_t pin;
    uint8_t pisoActual;
} sensor_de_piso_t;

void configurar_sensor_de_piso(sensor_de_piso_t *sensor, uint32_t pin);

uint8_t piso_actual(sensor_de_piso_t *sensor);
