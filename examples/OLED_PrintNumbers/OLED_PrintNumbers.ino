/*
 * OLED 128x64 demo - print Number
 */

#include <Wire.h>
#include <SoftwareSerial.h>

#include "Suli.h"
#include "OLED_128x64_Arduino.h"
#include "OLED_128x64_Suli.h"

SeeedOLED oled;

void setup()
{

    oled.init();                        // initialize SEEED OLED display

    oled.clearDisplay();                // clear the screen and set start position to top left corner
    oled.setNormalDisplay();            // Set display to Normal mode
    oled.setPageMode();                 // Set addressing mode to Page Mode
    oled.setTextXY(0,0);                // Set the cursor to 0th Page, 0th Column
    oled.putNumber(123);                // Print number
    oled.setTextXY(1,0);                // Set the cursor to 1st Page, 0th Column
    oled.putNumber(0xFFFF);             // Print number
    oled.setTextXY(2,0);                // Set the cursor to 2nd Page, 0th Column
    oled.putNumber(0xFFFFFFFF);         // Print number
    oled.setTextXY(3,0);                // Set the cursor to 3rd Page, 0th Column
    oled.putNumber(-12345);             // Print number
}

void loop()
{

}


