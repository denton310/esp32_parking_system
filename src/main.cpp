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

#define echoPin 26
#define trigPin1 14
#define trigPin2 12
#define trigPin3 13
#define trigPin4 15


Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

int get_distance(int, int);

void setup()
{
  Serial.begin(115200);
  // Start I2C Communication SDA = 5 and SCL = 4 on Wemos Lolin32 ESP32 with built-in SSD1306 OLED
  Wire.begin(5, 4);
  
    pinMode(echoPin, INPUT);
    pinMode(trigPin1, OUTPUT);
    pinMode(trigPin2, OUTPUT);
    pinMode(trigPin3, OUTPUT);
    pinMode(trigPin4, OUTPUT);
  
  // random stuff
  /*
  for (size_t i = 0; i > sizeof(trigPin); i++)
  {
    pinMode(i, OUTPUT);
    Serial.printf("for looppi: %d",i,"\n");
  }
  for (size_t o = 0; o > sizeof(echoPin); o++)
  {
    pinMode(o, INPUT);
  }
*/
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

/*
const int positions[][4] = {{1, 8, 29, 23}, {7, 15}, {12, 25}};
const uint8_t bitmapData[66] = {}
void drawBitmap(int x, int y, const uint8_t *bitmap, int w, int h)
{
  display.drawBitmap(x, y, bitmap, w, h, 1);
}
const struct {
  int x;
  int y;
  int w;
  int h;
  const uint8_t* bitmapData;
}
bitmaps[] = {
  {1, 8, 29, 23, bitmap_sensor_1a_off},
  {7, 15, 27, 22, bitmap_sensor_1b_off},
  {12, 25, 24, 19, bitmap_sensor_1c_off},
  {19, 32, 20, 17, bitmap_sensor_1d_off},
  {30, 1, 32, 13, bitmap_sensor_2a_off},
  {34, 11, 28, 12, bitmap_sensor_2b_off},
  {37, 20, 25, 11, bitmap_sensor_2c_off},
  {40, 28, 22, 11, bitmap_sensor_2d_off},
  {65, 1, 32, 13, bitmap_sensor_3a_off},
  {65, 11, 29, 12, bitmap_sensor_3b_off},
  {65, 20, 25, 11, bitmap_sensor_3c_off},
  {65, 28, 21, 11, bitmap_sensor_3d_off},
  {97, 9, 28, 23, bitmap_sensor_4a_off},
  {93, 17, 27, 21, bitmap_sensor_4b_off},
  {90, 25, 25, 19, bitmap_sensor_4c_off},
  {86, 33, 21, 16, bitmap_sensor_4d_off}
};
*/
// steps are sensors steps how near object is
uint8_t step1 = 50;
uint8_t step2 = 30;
uint8_t step3 = 20;
uint8_t step4 = 10;

// void get_distance(int* val0, int* val1, int* val2, int* val3);
void emptyLayer();

void loop()
{
  display.clearDisplay();
  emptyLayer();

  // get distances from all sensors
  int dist1 = get_distance(trigPin1, echoPin);
  int dist2 = get_distance(trigPin2, echoPin);
  int dist3 = get_distance(trigPin3, echoPin);
  int dist4 = get_distance(trigPin4, echoPin);

  Serial.printf("Etaisyys anturi 1: %d cm\n", dist1);
  Serial.printf("Etaisyys anturi 2: %d cm\n", dist2);
  Serial.printf("Etaisyys anturi 3: %d cm\n", dist3);
  Serial.printf("Etaisyys anturi 4: %d cm\n", dist4);

  if (dist1 <= step1)
  {
    display.drawBitmap(1, 8, bitmap_sensor_1a_on, 29, 23, 1);
  }

  if (dist1 <= step2)
  {
    display.drawBitmap(7, 15, bitmap_sensor_1b_on, 27, 22, 1);
  }
  if (dist1 <= step3)
  {
    display.drawBitmap(12, 25, bitmap_sensor_1c_on, 24, 19, 1);
  }

  if (dist1 <= step4)
  {
    display.drawBitmap(19, 32, bitmap_sensor_1d_on, 20, 17, 1);
  }

  display.display();
  vTaskDelay(200 / portTICK_PERIOD_MS);
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
