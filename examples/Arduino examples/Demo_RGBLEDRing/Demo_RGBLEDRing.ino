/* Demo code to generate pattern and to Test Easy working of NeoPixel Library with RGB LED Ring */

#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to IN signal pin of RGB LED Ring
#define PIN  6  

#define LEDCOUNTS 32 // Total LEDs on Ring, add +32 if attaching extra ring

Adafruit_NeoPixel pixels(LEDCOUNTS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); // INITIALIZE RGB LED ring object (REQUIRED)
}

void loop() {
  
  pixels.clear(); // Set all pixel colors to 'off'

  // Starting LED pixel number is 0 and last 31 for single RGB Ring
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...
    
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright blue color:
    pixels.setPixelColor(i, pixels.Color(0, 0, 150));
    pixels.show();   // Send the updated pixel colors to the hardware.
    delay(50); // Pause before next pass through loop
  }
}
