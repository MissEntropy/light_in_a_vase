#include <Arduino.h>

int initialized_temprature_sensor_pin;

void initialize_thermometer(int temprature_sensor_pin){
  initialized_temprature_sensor_pin = temprature_sensor_pin;
  Serial.print("Thermometer initialized!\n");
}

float read_temprature_celsius(){
  // return 5;
  float temp = random(30, 40);
  Serial.print("Temprature measured: ");
  Serial.print(temp);
  Serial.print(" Celsius\n");
  return temp;
      //   int temp_adc_val;
      // float temp_val;
      // temp_adc_val = analogRead(lm35_pin);  /* Read Temperature */
      // temp_val = (temp_adc_val * 4.88);      /* Convert adc value to equivalent voltage */
      // temp_val = (temp_val/10);  /* LM35 gives output of 10mv/°C */
      // Serial.print("Temperature = ");
      // Serial.print(temp_val);
      // Serial.print(" Degree Celsius\n");
}