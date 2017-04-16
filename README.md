# Using Arduino 
## Choices of IDE: Arduino IDE, Atom(with platformIO), Eclipse


### Done
* OOP part done for: _UltraSonic_, _Turbidity_
* Detect UltraSonic Distance using [HC-SR04](https://www.amazon.com/SainSmart-HC-SR04-Ranging-Detector-Distance/dp/B004U8TOE6)
* Temperature sensor uses _OneWire.h_ and _DallasTemperature.h_ 
* Turbidity sensor done [reference](https://www.dfrobot.com/wiki/index.php/Turbidity_sensor_SKU:_SEN0189)
* pH Sensor done
* added library
* Done OOP Object setup

### reference/leow
Original file by leow
Arduino 1 has the GPS module, if you want to test it, test it on the TinyGPS++ "Full example" first, once it is okay, run the Final Arduino 2 file, that file is to upload the GPS to ThingSpeak

Arduino 2 attaches the compass for the bearing, which is supposedly to be run on Autopilot Main file

### Problem
* error handling when sensors failed to display data

### Reference

#### Libraries
* [OneWire.h](https://github.com/PaulStoffregen/OneWire)
* [DallasTemperature.h](https://github.com/milesburton/Arduino-Temperature-Control-Library)

#### Referred Website
* [UltraSonic HC-SR04 setup](http://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/)



