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

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

const uint16_t trigPin = 25;
const uint16_t echoPin = 26;

int get_distance();
void emptyLayer();

const unsigned int distances[] = {40, 30, 20, 10};
const int positions[][2] = {{1, 8}, {7, 15}, {12, 25}, {19, 32}};

void setup()
{
  Serial.begin(115200);
  // Start I2C Communication SDA = 5 and SCL = 4 on Wemos Lolin32 ESP32 with built-in SSD1306 OLED
  Wire.begin(5, 4);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

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
  for (uint8_t i = 0; i < 4; i++)
  {
    vTaskDelay(600 / portTICK_PERIOD_MS);
    display.print(".");
    display.display();
  }
  /*
    display.clearDisplay();
    // display.drawBitmap(26, 47, bitmap_car, 73, 17, 1);
    display.drawBitmap(0, 0, bitmap_empty, 128, 64, 1);
    */
  }

  // steps are sensors steps how near object is
  uint8_t step1 = 40;
  uint8_t step2 = 30;
  uint8_t step3 = 20;
  uint8_t step4 = 10;
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
  void loop()
  {
    // display.clearDisplay();
    // drawBitmap(positions[i][0], positions[i][1], bitmapData, positions[i][2], positions[i][3]);

    // display.display();
    do
    {
      int dist1 = get_distance();
      display.clearDisplay();
      emptyLayer();
      // display.drawBitmap(1, 8, dist1 > step1 ? bitmap_sensor_1a_off, dist1 = 40 : bitmap_sensor_1a_on, 29, 23, 1);

      // jos anturi on 40 tai alle tarkistetaan sensoria
      // tässä pyöritään niin kauan kunnes toisin todistetaan
      // jos anturi on 20-30, tulostetaan toinen kuva näkyviin
      // jos anturi on yl
      if (dist1 <= 40)
      {
        display.drawBitmap(1, 8, bitmap_sensor_1a_on, 29, 23, 1);
      }

      if (dist1 <= 30)
      {
        display.drawBitmap(7, 15, bitmap_sensor_1b_on, 27, 22, 1);
      }
      if (dist1 <= 20)
      {
        display.drawBitmap(12, 25, bitmap_sensor_1c_on, 24, 19, 1);
      }

      if (dist1 <= 10)
      {
        display.drawBitmap(19, 32, bitmap_sensor_1d_on, 20, 17, 1);
      }

      /*
      if (dist1 <= 30)
      {
        display.drawBitmap(7, 15, bitmap_sensor_1b_on, 27, 22, 1);
        display.display();
      }
      else
      {
        display.drawBitmap(7, 15, bitmap_sensor_1b_off, 27, 22, 1);
      }

      if (dist1 <= 20)
      {
        display.drawBitmap(12, 25, bitmap_sensor_1c_on, 24, 19, 1);
        display.display();
      }
      else
      {
        display.drawBitmap(12, 25, bitmap_sensor_1c_off, 24, 19, 1);
      }
      if (dist1 < 10)
      {
        display.drawBitmap(19, 32, bitmap_sensor_1d_on, 20, 17, 1);
        display.display();
      }
      else
      {
        display.drawBitmap(19, 32, bitmap_sensor_1d_off, 20, 17, 1);
      }
      Serial.printf("Distance: %d cm\n", dist1);
      // display.printf("Distance: %d cm" ,x);
      */
      display.display();
      vTaskDelay(300 / portTICK_PERIOD_MS);

    } while (40 != 40);
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
