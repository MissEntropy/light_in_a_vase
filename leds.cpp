#include <Arduino.h>
#include <FastLED.h>

CRGB* leds_pointer;
int initialized_num_leds;

void initialize_leds(int led_data_pin, int num_leds){
  // *leds_pointer = new CRGB[num_leds];
  // initialized_num_leds = num_leds;
  // FastLED.addLeds<WS2812, led_data_pin, GRB>(*leds_pointer, num_leds);
  Serial.print("leds are initialized!\n");
}

void leds_on(){
  Serial.print("leds are on!\n");
}

void leds_off(){
  Serial.print("leds are off!\n");
}

      //     leds[pinIndex] = CRGB(0, 0, 0);
      //   }
      // for (int pinIndex = 0; pinIndex < NUM_LEDS; pinIndex++) {
      //   if (temp_val > too_hot){
      //     leds[pinIndex] = CRGB(0, 0, 0);
      //   }
      //   else {
      //     leds[pinIndex] = CRGB(225, 225, 225);
      //   }
      //   FastLED.show();
      //   delay(500);
      // }