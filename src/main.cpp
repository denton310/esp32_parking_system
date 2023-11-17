// Espressif ESP32-WROOM-32 with built-in 0.96" OLED
// 4 pieces Ultrasonic HC-SR04 Sensors
// Parking system
// Akseli Marjanen 2023

#include <Arduino.h>
#include "Wire.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"
#include "freertos/FreeRTOS.h"
#include "files.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_ADDR 0x3c
#define NUMBER_OF_SENSORS 4

#define echoPin1 15
#define echoPin2 26
#define echoPin3 14
#define echoPin4 16
#define trigPin1 13
#define trigPin2 12
#define trigPin3 2
#define trigPin4 0

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

int get_distance(int, int);
void emptyLayer();

// steps are sensors steps how near object is
const uint8_t step1 = 80;
const uint8_t step2 = 50;
const uint8_t step3 = 30;
const uint8_t step4 = 10;

void setup()
{
  Serial.begin(115200);
  // Start I2C Communication SDA = 5 and SCL = 4 on Wemos Lolin32 ESP32 with built-in SSD1306 OLED
  Wire.begin(5, 4);

  pinMode(echoPin1, INPUT);
  pinMode(echoPin2, INPUT);
  pinMode(echoPin3, INPUT);
  pinMode(echoPin4, INPUT);
  pinMode(trigPin1, OUTPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(trigPin4, OUTPUT);

  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR, false, false))
  {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ;
  }

  // oled poweing up
  display.display();
  delay(2000);

  // clear the buffer
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(2);
  display.setCursor(1, 1);
  display.print("Set up");
  display.display();

  // set up
  for (uint8_t i = 0; i < 2; i++)
  {
    vTaskDelay(600 / portTICK_PERIOD_MS);
    display.print(".");
    display.display();
  }
}

void loop()
{
  display.clearDisplay();
  emptyLayer();

  // get distances from all sensors
  double dist1 = get_distance(trigPin1, echoPin1);
  delayMicroseconds(2);
  double dist2 = get_distance(trigPin2, echoPin2);
  delayMicroseconds(2);
  double dist3 = get_distance(trigPin3, echoPin3);
  delayMicroseconds(2);
  double dist4 = get_distance(trigPin4, echoPin4);


  Serial.printf("Etaisyys 1: %d\n", dist1);
  Serial.printf("Etaisyys 2: %d\n", dist2);
  Serial.printf("Etaisyys 3: %d\n", dist3);
  Serial.printf("Etaisyys 4: %d\n", dist4);

  double distances[] = {dist1, dist2, dist3, dist4};

  // check each sensor values and compare it to steps. Bitmap[i+n] is offset because drawBitmap compares it via distances[] values
  for (int i = 0; i < NUMBER_OF_SENSORS; i++)
  {
    if (distances[i] <= step1)
    {
      display.drawBitmap(bitmaps[i].x, bitmaps[i].y, bitmaps[i].bitmap_on, bitmaps[i].width, bitmaps[i].height, 1);
    }
    if (distances[i] <= step2)
    {
      display.drawBitmap(bitmaps[i + 4].x, bitmaps[i + 4].y, bitmaps[i + 4].bitmap_on, bitmaps[i + 4].width, bitmaps[i + 4].height, 1);
    }
    if (distances[i] <= step3)
    {
      display.drawBitmap(bitmaps[i + 8].x, bitmaps[i + 8].y, bitmaps[i + 8].bitmap_on, bitmaps[i + 8].width, bitmaps[i + 8].height, 1);
    }
    if (distances[i] <= step4)
    {
      display.drawBitmap(bitmaps[i + 12].x, bitmaps[i + 12].y, bitmaps[i + 12].bitmap_on, bitmaps[i + 12].width, bitmaps[i + 12].height, 1);
    }
  }
  display.display();
  vTaskDelay(50 / portTICK_PERIOD_MS);
}

void emptyLayer()
{
  display.drawBitmap(26, 47, bitmap_car, 73, 17, 1);

  display.drawBitmap(1, 8, bitmap_sensor_1a_off, 29, 23, 1);
  display.drawBitmap(7, 15, bitmap_sensor_1b_off, 27, 22, 1);
  display.drawBitmap(12, 25, bitmap_sensor_1c_off, 24, 19, 1);
  display.drawBitmap(19, 32, bitmap_sensor_1d_off, 20, 17, 1);

  display.drawBitmap(30, 1, bitmap_sensor_2a_off, 32, 13, 1);
  display.drawBitmap(34, 11, bitmap_sensor_2b_off, 28, 12, 1);
  display.drawBitmap(37, 20, bitmap_sensor_2c_off, 25, 11, 1);
  display.drawBitmap(40, 28, bitmap_sensor_2d_off, 22, 11, 1);

  display.drawBitmap(65, 1, bitmap_sensor_3a_off, 32, 13, 1);
  display.drawBitmap(65, 11, bitmap_sensor_3b_off, 29, 12, 1);
  display.drawBitmap(65, 20, bitmap_sensor_3c_off, 25, 11, 1);
  display.drawBitmap(65, 28, bitmap_sensor_3d_off, 21, 11, 1);

  display.drawBitmap(97, 9, bitmap_sensor_4a_off, 28, 23, 1);
  display.drawBitmap(93, 17, bitmap_sensor_4b_off, 27, 21, 1);
  display.drawBitmap(90, 25, bitmap_sensor_4c_off, 25, 19, 1);
  display.drawBitmap(86, 33, bitmap_sensor_4d_off, 21, 16, 1);
}