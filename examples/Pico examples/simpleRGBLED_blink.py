from machine import Pin
from neopixel import NeoPixel
from time import sleep

LEDCOUNT = 32	#total number of RGB LED on Ring
LEDPIN = 0 		#define Pico GPIO pin to which signal IN of LED Ring connected

pin = Pin(LEDPIN, Pin.OUT)   # set pin as output to drive NeoPixels
np = NeoPixel(pin, LEDCOUNT)   # create NeoPixel driver

#single LED control
np[0] = (255, 255, 255) # set the first pixel to white
np.write()              # write data to all pixels
r, g, b = np[0]         # get first pixel colour
print(f"First pixel Colour = {r}, {g}, {b}")
sleep(1)
np[0] = (0, 0, 0) 
np.write()
sleep(1)


while 1:
    #multiple LEDs control at once
    np[0] = (255, 0, 0)
    np[7] = (0, 255, 0)
    np[15] = (0, 0, 255)
    np[21] = (255, 255, 255)
    #np[31] = (100, 100, 100)
    np.write()
    sleep(2)	#wait for 2 seconds
    
    np[0] = (0, 0, 0)
    np[7] = (0, 0, 0)
    np[15] = (0, 0, 0)
    np[21] = (0, 0, 0)
    np.write()
    sleep(2)
    
