/*
 * OLED 128x64 demo - Brightness Control
 *
 * setBrightness(bn);           // set brightness
 */
#include <Wire.h>
#include <SoftwareSerial.h>

#include "Suli.h"
#include "OLED_128x64_Arduino.h"
#include "OLED_128x64_Suli.h"

SeeedOLED oled;

void setup()
{
    oled.init();                                // initialize SEEED OLED display
    oled.setInverseDisplay();                   // Set inverse display
    oled.clearDisplay();                        // clear the screen and set start position to top left corner
    
    oled.setTextXY(2, 2);
    oled.putString("128x64 OLED");
    
    oled.setTextXY(2, 3);
    oled.putString("Brightness");
    oled.setTextXY(2, 4);
    oled.putString("Control");
}

void loop()
{
    static unsigned char Brightness = 0;
    oled.setBrightness(Brightness++);           // Change the brightness 0 - 255
    oled.setPageMode();                         // Set display addressing to page mode.
    oled.setTextXY(12, 7);                      // Set the Cursor position to 7th Page , 13th Column
    oled.putNumber(Brightness);
    delay(50);                                  // Delay 50ms between different brightness number
    
    if(Brightness >= 255)
    {
        Brightness = 0;                         // Reset Brighness to 0.
        oled.setTextXY(13,7);                   // Display the brighness value starting from 7th Row, 13th Column
        oled.putString("   ");                  // Clear 13,14 and 15th Columns. As the numbers are always left aligned - 2 digit and 3 digit will overwrite.

    }
}

