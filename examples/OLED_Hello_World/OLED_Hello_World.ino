/*
 * OLED 128x64 demo - hello world
 */
 
 
#include <Wire.h>
#include <SoftwareSerial.h>

#include "Suli.h"
#include "OLED_128x64_Arduino.h"
#include "OLED_128x64_Suli.h"


SeeedOLED oled;

void setup()
{
    oled.init();                            // initialze SEEED OLED display
    oled.clearDisplay();                    // clear the screen and set start position to top left corner
    oled.setNormalDisplay();                // Set display to normal mode (i.e non-inverse mode)
    oled.setPageMode();                     // Set addressing mode to Page Mode
    oled.setTextXY(0,0);                    // Set the cursor to Xth Page, Yth Column
    oled.putString("Hello World!");         // Print the String
}

void loop()
{

}

