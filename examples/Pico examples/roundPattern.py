from machine import Pin
from neopixel import NeoPixel
from time import sleep

LEDCOUNT = 32	#total number of RGB LED on Ring
LEDPIN = 0 		#define Pico GPIO pin to which signal IN of LED Ring connected

pin = Pin(LEDPIN, Pin.OUT)   # set pin as output to drive NeoPixels
np = NeoPixel(pin, LEDCOUNT)   # create NeoPixel driver

#develop some patterns 
while 1:
    #turn on each pixels in sequence, first Pixel LED is at 0th position
    for i in range (0,LEDCOUNT):
        np[i] = (150, 78, 20) 	
        np.write()              
        sleep(0.05)
    
    #turn off each pixels in reverse sequence 
    for i in reversed(range(0,LEDCOUNT)):
        np[i] = (0, 0, 0) 
        sleep(0.05)
        np.write()

