#include "Wire.h"
#include <Arduino.h>

#define BUFF_SIZE 10000
#define MAX_DIST 120
#define MIN_DIST 2

int get_distance(int trigPin, int echoPin)
{
  // variable declaration
  double distance = 0.0;
  double temp = 0.0;
  const double default_meas = 4.0;

  double i = 0.0;
  double meas = default_meas;

  // get distance from sensor
  for (int i = 0; i < default_meas; i++)
  {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    long duration = pulseIn(echoPin, HIGH, BUFF_SIZE);

    temp = duration / 58;

    // Serial.printf("meas: %s\n", String(meas));

    // Keep range between MAX and MIN
    if (temp > MAX_DIST || temp < MIN_DIST)
    {
      // Ignore data if meas is some random numbers
      meas = meas - 1.0;
    }
    else
      // Add temp to distance total count
      distance = distance + temp;
    // Serial.printf("distance value:\t %s meas: %s\n", String(distance), String(meas));
  }
  // if meas under 1, return default values to avoid disinformation
  if (meas < 1)
  {
    Serial.println("distance measure failed!");
    return MAX_DIST + 1.0;
  }
  // calc avg to return
  double avg_distance = distance / meas;
  // Serial.printf("avg distance: %s cm\n", String(average_distance));
  return avg_distance;
}
