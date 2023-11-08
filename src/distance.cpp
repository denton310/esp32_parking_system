#include "Wire.h"
#include <Arduino.h>

#define BUFF_SIZE 30000
#define BUFF_MIN 250
#define BUFF_MAX 6000

int get_distance(int trigPin, int echoPin)
{
  digitalWrite(echoPin, LOW);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, BUFF_SIZE);
  Serial.printf("duration us: %d\n", duration);

  //tee tähän range durationille
  int distance = duration / 58;

    // keep range under 100cm. increase if want more distance
    if (distance > 100)
    {
      distance = 100;
      return distance;
    }
    else if(distance > 3)
    {
      distance = 3;
      return distance;
    }
    else
      return distance;
}
/*
const int trigPin[4] = {25, 8, 16, 4};
const int echoPin[4] = {26, 11, 5, 0};


// defines variables
long duration;
int distances[4] = {0, 0, 0, 0};
float soundSpeed = 0.034; // cm/s

//pass sensor values from function call
void get_distance(int* val0, int* val1, int* val2, int* val3)
{
  int temp1, temp2, temp3, temp4 = 0;
  printf("get_distance loop\n");
    //for(size_t i = 0; i < sizeof(trigPin); i++){printf ("Trig pins: %d\n", trigPin[i]);}
    //for(size_t i = 0; i < sizeof(echoPin); i++){printf ("Echo pins: %d\n", echoPin[i]);}

  //get all distances from sensors one by one
  for(size_t i = 0; i < sizeof(trigPin)/sizeof(trigPin[0]); i++){
    printf ("Trig pins: %d\n", trigPin[i]);
    digitalWrite(trigPin[i], LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin[i], HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin[i], LOW);
    duration = pulseIn(echoPin[i], HIGH);
    //printf("duration: %d", duration);
    //distances[i] = duration / 58; // divider is from sensor datasheet
    //printf("distance muuttuja: %d: %d\n",i , distances[i]);
  }
 */
