/*
 * OLED 128x64 demo - Scroll 
 *
 * setHorizontalScrollProperties(bool direction,unsigned char startPage, unsigned char endPage, unsigned char scrollSpeed);
 * direction   - Scroll_Left & Scroll_Right
 * startPage   - start page to scroll
 * endPage     - end page to scroll
 * scrollSpeed - scroll speed:
 *               Scroll_2Frames			        
 *               Scroll_3Frames			        
 *               Scroll_4Frames			        
 *               Scroll_5Frames			        
 *               Scroll_25Frames			        
 *               Scroll_64Frames			        
 *               Scroll_128Frames		        
 *               Scroll_256Frames		        
 */

#include <Wire.h>
#include <SoftwareSerial.h>

#include "Suli.h"
#include "OLED_128x64_Arduino.h"
#include "OLED_128x64_Suli.h"


SeeedOLED SeeedOled;

void setup()
{
    SeeedOled.init();                           //initialize SEEED OLED display

    SeeedOled.clearDisplay();                   // clear the screen and set start position to top left corner
    SeeedOled.setTextXY(2, 1);
    SeeedOled.putString("128x64 OLED");

    SeeedOled.setTextXY(2, 2);
    SeeedOled.putString("Scroll Demo");
    SeeedOled.setTextXY(2, 4);
    SeeedOled.putString("<---------<<<");
    SeeedOled.setTextXY(2, 6);
    SeeedOled.putString(">>>--------->");

}

void loop()
{
    SeeedOled.setHorizontalScrollProperties(Scroll_Right, 6, 6, Scroll_5Frames);        // Set the properties of Horizontal Scrool
    SeeedOled.activateScroll();                                                         // Activate Scroll
    delay(2000);
    SeeedOled.setHorizontalScrollProperties(Scroll_Left, 4, 4, Scroll_5Frames);         // Set the properties of Horizontal Scrool
    SeeedOled.activateScroll();                                                         // Activate Scroll
    delay(2000);
}

