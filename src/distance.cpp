#include "Wire.h"
//#include "freertos/FreeRTOS.h"
#include <Arduino.h>

const uint16_t trigPin = 25;
const uint16_t echoPin = 26;

// defines variables
long duration = 0;
int distance = 0;
float soundSpeed = 0.034; // cm/s

//pass sensor values from function call
void get_distance(int* val0, int* val1, int* val2, int* val3)
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58; // divider is from sensor datasheet

  // keep range under 100cm. increase if want more distance
  if (distance > 100)
  {
    distance = 100;
    *val0 = distance;
  }
  else {
    // Serial.printf("Duration: %d us\n", duration);
    // delayMicroseconds(100);             //Wait untill echoPin is received trig signal 100 us =
    // Serial.printf("Distance: %d\n", distance);
    *val0 = distance;
  }
}
