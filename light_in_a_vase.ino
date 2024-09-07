#include <Arduino.h>
#include <FastLED.h>

#include "hardware_conf.h"
#include "leds.h"
#include "thermometer.h"
#include "vibration_motor.h"
#include "utils.h"


void setup() {
  Serial.begin(9600);
  Serial.print("setup started!\n");
  initialize_leds();
  good_vibes(); 
  Serial.print("setup ended, starting loop!\n");
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
