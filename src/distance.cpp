#include "Wire.h"
#include <Arduino.h>

#define BUFF_SIZE 30000
#define MAX_DIST 100
#define MIN_DIST 2

int get_distance(int trigPin, int echoPin)
{
  digitalWrite(echoPin, LOW);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, BUFF_SIZE);
  //Serial.printf("duration us: %d\n", duration);

  int distance = duration / 58;
  // keep range under 100cm. increase if want more distance
  if (distance > MIN_DIST && distance < MAX_DIST)
  {
    return distance;
  }
  else
    return distance = 100;
}