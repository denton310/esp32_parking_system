#include <Arduino.h>
#include <Wire.h>

#define BUFF_SIZE 30000

#define echoPin1 15
#define echoPin2 26
#define echoPin3 14
#define echoPin4 16
#define trigPin1 13
#define trigPin2 12
#define trigPin3 2
#define trigPin4 0

int distance = 0;

void setup()
{
  pinMode(echoPin1, INPUT);
  pinMode(echoPin2, INPUT);
  pinMode(echoPin3, INPUT);
  pinMode(echoPin4, INPUT);
  pinMode(trigPin1, OUTPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(trigPin4, OUTPUT);
}

void loop()
{
    // digitalWrite(echoPin, LOW);
    digitalWrite(trigPin1, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin1, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin1, LOW);

    long duration = pulseIn(echoPin1, HIGH, BUFF_SIZE);

    distance = duration / 58;

    Serial.printf("distance cm: %d", distance);
}