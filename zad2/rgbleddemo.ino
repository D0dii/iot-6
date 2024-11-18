#include "RgbLed.h"

#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11

RgbLed rgbLed;

void setup() {
    rgbLed.init(RED_PIN, GREEN_PIN, BLUE_PIN);
}

void loop() {
    rgbLed.setColorByName("RED");
    delay(1000);
    rgbLed.setColorByName("GREEN");
    delay(1000);
    rgbLed.setColorByName("BLUE");
    delay(1000);
    rgbLed.setColorByName("YELLOW");
    delay(1000);
    rgbLed.setColorByName("CYAN");
    delay(1000);
    rgbLed.setColorByName("MAGENTA");
    delay(1000);
    rgbLed.setColorByName("WHITE");
    delay(1000);
    rgbLed.turnOff();
    delay(1000);
}
