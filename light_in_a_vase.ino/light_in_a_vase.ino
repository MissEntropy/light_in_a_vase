#include <FastLED.h>

#define LED_PIN     7
#define NUM_LEDS    7

CRGB leds[NUM_LEDS];
const int lm35_pin = A1; /* LM35 O/P pin */
const float too_hot = 35.0 ;
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  Serial.begin(9600);

}

void loop() {
      int temp_adc_val;
      float temp_val;
      temp_adc_val = analogRead(lm35_pin);  /* Read Temperature */
      temp_val = (temp_adc_val * 4.88);      /* Convert adc value to equivalent voltage */
      temp_val = (temp_val/10);  /* LM35 gives output of 10mv/°C */
      Serial.print("Temperature = ");
      Serial.print(temp_val);
      Serial.print(" Degree Celsius\n");
      for (int pinIndex = 0; pinIndex < NUM_LEDS; pinIndex++) {
        if (temp_val > too_hot){
          leds[pinIndex] = CRGB(0, 0, 0);
        }
        else {
          leds[pinIndex] = CRGB(225, 225, 225);
        }
        FastLED.show();
        delay(500);
      }
    if (temp_val > too_hot){
      Serial.print("too hot!, stop for 30 seconds to cooldown");
      delay(1000 * 30);
    }
}
