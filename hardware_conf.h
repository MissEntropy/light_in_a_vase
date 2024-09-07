
// Leds HW definitions:
#define LEDS_DATA_PIN 7
#define NUM_LEDS 12

// Thermometer HW definitions:
#define TEMPRATURE_SENSOR_PIN A1 /* LM35 O/P pin */
const int cooldown_period_miliseconds = 10 * 1000;
const int temp_monitor_cycle_period_miliseconds = 5 * 1000;
const float too_hot = 35.0;

// vibration motor HW definitions:
const int vibration_motor_pin = 9;
// const int wake_up_period_miliseconds = 3 * 1000;
