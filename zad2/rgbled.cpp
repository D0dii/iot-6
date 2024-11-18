#include "RgbLed.h"

void RgbLed::init(byte redPin, byte greenPin, byte bluePin) {
    redPin_ = redPin;
    greenPin_ = greenPin;
    bluePin_ = bluePin;

    pinMode(redPin_, OUTPUT);
    pinMode(greenPin_, OUTPUT);
    pinMode(bluePin_, OUTPUT);

    turnOff();
}

void RgbLed::setColor(byte red, byte green, byte blue) {
    writeColor(red, green, blue);
}

void RgbLed::setColorByName(const char* colorName) {
    if (strcmp(colorName, "RED") == 0) {
        writeColor(255, 0, 0);
    } else if (strcmp(colorName, "GREEN") == 0) {
        writeColor(0, 255, 0);
    } else if (strcmp(colorName, "BLUE") == 0) {
        writeColor(0, 0, 255);
    } else if (strcmp(colorName, "YELLOW") == 0) {
        writeColor(255, 255, 0);
    } else if (strcmp(colorName, "CYAN") == 0) {
        writeColor(0, 255, 255);
    } else if (strcmp(colorName, "MAGENTA") == 0) {
        writeColor(255, 0, 255);
    } else if (strcmp(colorName, "WHITE") == 0) {
        writeColor(255, 255, 255);
    } else if (strcmp(colorName, "BLACK") == 0) {
        turnOff();
    }
}

void RgbLed::turnOff() {
    writeColor(0, 0, 0);
}

void RgbLed::writeColor(byte red, byte green, byte blue) {
    analogWrite(redPin_, red);
    analogWrite(greenPin_, green);
    analogWrite(bluePin_, blue);
}
