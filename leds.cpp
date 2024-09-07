#include <Arduino.h>
#include <FastLED.h>
#include "hardware_conf.h"

CRGB leds[NUM_LEDS];

void initialize_leds(){
  Serial.print("Initializing leds...\n");
  FastLED.addLeds<WS2812, LEDS_DATA_PIN, GRB>(leds, NUM_LEDS);
  Serial.print("leds are initialized!\n");
}

void leds_on(){
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(225, 225, 225);
  }
  FastLED.show();
  Serial.print("leds are on!\n");
}

void leds_off(){
    for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(0, 0, 0);
  }
  FastLED.show();
  Serial.print("leds are off!\n");
}