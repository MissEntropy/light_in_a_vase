#include <FastLED.h>
#include "leds.h"
#include "thermometer.h"

// HW definitions: leds
const int led_pin = 7;
const int num_leds = 7;

// HW definitions: Thermometer
const int temprature_sensor_pin = A1; /* LM35 O/P pin */
const int cooldown_period_miliseconds = 10000;
const int temp_monitor_cycle_period_miliseconds = 5000;
const float too_hot = 35.0;


// Actual code starts here
void verbose_delay(int delay_period_miliseconds){
  Serial.print("Starting a delay of ");
  Serial.print(delay_period_miliseconds/1000);
  Serial.print(" seconds\n");
  delay(delay_period_miliseconds);
}

void setup() {
  Serial.begin(9600);
  initialize_leds(led_pin, num_leds);
  initialize_thermometer(temprature_sensor_pin);
}

void loop() {
  float temprature = read_temprature_celsius();
  if (temprature > too_hot){
    Serial.print("This is too hot!\n");
    leds_off();
    verbose_delay(cooldown_period_miliseconds);
  } else {
    Serial.print("Things are cool, keep going.\n");
    leds_on();
    verbose_delay(temp_monitor_cycle_period_miliseconds);
  }
}
