#include <Arduino.h>
#include "hardware_conf.h"

void report_temprature(float temp_celsius){
  Serial.print("Temprature measured: ");
  Serial.print(temp_celsius);
  Serial.print(" Celsius\n");
}

float dummy_read_temprature_celsius(){
  float temp = random(30, 40);
  report_temprature(temp);
  return temp;
}

float read_temprature_celsius(){
  int temp_adc_val;
  float temp_val;
  temp_adc_val = analogRead(TEMPRATURE_SENSOR_PIN);  /* Read Temperature */
  temp_val = (temp_adc_val * 4.88);      /* Convert adc value to equivalent voltage */
  temp_val = (temp_val/10);  /* LM35 gives output of 10mv/°C */
  report_temprature(temp_val);
  return temp_val;
}