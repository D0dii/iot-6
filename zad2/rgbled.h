#ifndef RGBLED_H_
#define RGBLED_H_

#include "Arduino.h"

class RgbLed {
public:
    // Metoda inicjalizująca piny
    void init(byte redPin, byte greenPin, byte bluePin);

    // Metoda ustawiająca kolor na podstawie wartości RGB
    void setColor(byte red, byte green, byte blue);

    // Metoda ustawiająca kolor na podstawie nazwy
    void setColorByName(const char* colorName);

    // Metoda wyłączająca diodę
    void turnOff();

private:
    byte redPin_;
    byte greenPin_;
    byte bluePin_;

    // Prywatna metoda pomocnicza do ustawiania wartości PWM
    void writeColor(byte red, byte green, byte blue);
};

#endif
