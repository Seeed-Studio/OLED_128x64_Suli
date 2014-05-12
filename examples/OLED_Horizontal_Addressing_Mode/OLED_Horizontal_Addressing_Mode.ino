/*
 * OLED 128x64 demo - Horizontal Addressing Mode
 *
 * setBrightness(bn);           // set brightness
 */
#include <Wire.h>
#include <SoftwareSerial.h>

#include "Suli.h"
#include "OLED_128x64_Arduino.h"
#include "OLED_128x64_Suli.h"

SeeedOLED SeeedOled;


void setup()
{

  SeeedOled.init();                     // initialize SEEED OLED display

  SeeedOled.clearDisplay();             // clear the screen and set start position to top left corner
  SeeedOled.setNormalDisplay();         // Set display to Normal mode
  SeeedOled.setHorizontalMode();        // Set addressing mode to Horizontal Mode
  SeeedOled.putString("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");  //Print String (ASCII 32 - 126 )

}

void loop()
{
  
}


