/* Demo code to blink certain RGB LED of Ring with different color  */

#include <Adafruit_NeoPixel.h>

#define PIN  6    // Arduino pin connected to IN signal pin of RGB LED Ring
#define LEDCOUNTS 32 // number on RGB LED on Ring
Adafruit_NeoPixel pixels(LEDCOUNTS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); // INITIALIZE RGB LED ring object (REQUIRED)
}

void loop() {  
  // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(5, pixels.Color(200, 0, 0));
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(500); // Pause
  pixels.clear(); // turn off all pixels

  pixels.setPixelColor(15, pixels.Color(0, 100, 100));
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(500); // Pause 
  pixels.setPixelColor(27, pixels.Color(200, 100, 50));
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(2000); // Pause 
  
  pixels.clear(); // turn off all pixels
}
