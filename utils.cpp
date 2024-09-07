#include <Arduino.h>

void verbose_delay(int delay_period_miliseconds){
  Serial.print("Starting a delay of ");
  Serial.print(delay_period_miliseconds/1000);
  Serial.print(" seconds\n");
  delay(delay_period_miliseconds);
}