# RGBLEDRing_RightAngle_32
LED Ring featuring WS2812B Addressable RGB LEDs, equipped with integrated drivers, empowering users to exert precise control over each LED's color and brightness independently. With true 24-bit color production, this LED Ring offering a staggering 16 million different color combinations for mesmerizing visual effects.
 
This GitHub provides getting started and hardware design files of RGB LED Ring.

### Features:
- RGB color LED Ring with true 24 bit color production so 16M different color combinations possible.
- Uses a one-wire communication protocol, where color and brightness data is sent serially to each LED.
- Each LED can be individually addressed and controlled.
- Multiple WS2812B LEDs Cascaded in daisy-chained together to form Ring of 32 LEDs
- The brightness and color of each LED can be adjusted.
- Requires a microcontroller or controller board to send data signals.

### Specifications:
- LED Type: WS2812B-4020 Right Angle 
- Emitted Color: RGB (Red, Green, Blue)
- Supply Voltage: 3.7V - 5V
- Signal input voltage: - 0.5V to VCC + 0.5V
- Forward Each LED current: 12mA
- Typical current consumption of Single Ring: 500-700mA (full Brightness)
- Dominant Wavelength: 620nm ~ 625nm; 515nm ~ 525nm; 465nm ~ 475nm
- Data transmission speed: up to 800Kbps

### Pinout: 
<img src="https://github.com/sbcshop/RGBLEDRing_RightAngle_32/blob/main/images/RGBRingLED_pinout.jpg" > 

- (1) RGB LED
- (2) Data IN JST connector*
- (3) Data IN PCB pad**
- (4) Data OUT JST connector 
- (5) Data OUT PCB pad

**Note:** 
- *JST-SH 1mm type to support cascading multiple Rings
- **Exposed PCB pad format to support cascading multiple Rings

**WARNING:** Do not cascade more than 2 Rings when using full brightness of LEDs.

## Interfacing Ring with Pico/Pico W

| Pico | RGBLEDRing Pin | Function | 
|---|---|---|
|VBUS | 5V | Positive 5V Supply |
|GPIO0 | IN | Data Signal Input pin of RGB LED |
|GND | GND | Ground | 

<img src="https://github.com/sbcshop/RGBLEDRing_RightAngle_32/blob/main/images/Demo_PicoRing.gif">

Any other GPIOs of Pico can also be use, just make sure to modify in code also. Checkout below example codes to play with RGB LED Ring using Pico,
 
[Pico Examples](https://github.com/sbcshop/RGBLEDRing_RightAngle_32/tree/main/examples/Pico%20examples) - contains example demo codes to run RGB LED Ring using Pico / Pico W.


## Interfacing Ring with Arduino Uno

| Arduino Uno | RGBLEDRing Pin | Function | 
|---|---|---|
|5V | 5V | Positive 5V Supply |
|D6 | IN | Data Signal Input pin of RGB LED |
|GND | GND | Ground | 

<img src="https://github.com/sbcshop/RGBLEDRing_RightAngle_32/blob/main/images/demo_ArduinoRing.gif">

Here also you can use different digital pin of Arduino. Checkout below example codes to play with RGB LED Ring using Arduino,

[Arduino Examples](https://github.com/sbcshop/RGBLEDRing_RightAngle_32/tree/main/examples/Arduino%20examples) - contains example demo codes to run RGB LED Ring with Arduino and compatible boards.

**Cascade Two Rings:**

<img src="https://github.com/sbcshop/RGBLEDRing_RightAngle_32/blob/main/images/Demo_tworing_pico.gif">


### Repository Contents:
  - [/Design Data](https://github.com/sbcshop/Scangenie_Hardware/tree/main/Design%20Data) - This directory contains Schematic, Top and Bottom View
  - [/Mechanical Data](https://github.com/sbcshop/Scangenie_Hardware/tree/main/Mechanical%20Data) - This directory contains Dimension, 3D and STEP files

## Related Products
  * [PiCube: 4x4x4 LED Cube](https://shop.sb-components.co.uk/products/picube-4x4x4-led-cube-kit-for-raspberry-pi?variant=567249895444) 
   
     ![PiCube: 4x4x4 LED Cube](https://shop.sb-components.co.uk/cdn/shop/products/4_983efe7f-fe0d-49e4-b69a-1fca41e4ce46.png?v=1609844104&width=300)   

  * [RPi LED Matrix](https://shop.sb-components.co.uk/products/rpi-led-matrix?_pos=2&_sid=1873dee50&_ss=r) 
   
     ![RPi LED Matrix](https://shop.sb-components.co.uk/cdn/shop/products/5819.jpg?v=1521213640&width=300) 

  * [Rotary Encoder - LED Array & Touch LCD for ESP32/Pico/HAT](https://shop.sb-components.co.uk/products/rotary-encoder-led-array-touch-lcd-for-esp32-pico-hat?variant=41002601644115) 
   
     ![Rotary Encoder - LED Array & Touch LCD for ESP32/Pico/HAT](https://shop.sb-components.co.uk/cdn/shop/files/15_38d1a51d-b726-4812-8f3b-648cc92b3419.jpg?v=1691845969&width=300) 

 
## Product License

This is ***open source*** product. Kindly check LICENSE.md file for more information.

Please contact support@sb-components.co.uk for technical support.
<p align="center">
  <img width="360" height="100" src="https://cdn.shopify.com/s/files/1/1217/2104/files/Logo_sb_component_3.png?v=1666086771&width=300">
</p>
