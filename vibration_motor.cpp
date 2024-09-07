#include <Arduino.h>

#include "hardware_conf.h"
#include "utils.h"

void initialize_vibrations(){
  pinMode(vibration_motor_pin, OUTPUT);

}

void good_vibes(){
    // Gradually increase vibration intensity
    for (int intensity = 0; intensity <= 255; intensity++) {
        analogWrite(vibration_motor_pin, intensity);  // Set the PWM value
        delay(10);  // Delay to control the speed of intensity change
    }

    // Gradually decrease vibration intensity
    for (int intensity = 255; intensity >= 0; intensity--) {
        analogWrite(vibration_motor_pin, intensity);  // Set the PWM value
        delay(10);  // Delay to control the speed of intensity change
    }
    
}