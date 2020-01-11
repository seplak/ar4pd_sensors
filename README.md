# Sensors for AR4PD

This repository holds the code used for the Arduino sensors that use the onboard accelerometers to provide data to the Raspberry Pi.

## IDE Setup

It is recommended that you use the Arduino IDE. You can download it [here](https://www.arduino.cc/en/main/software).

Once you have installed the IDE, you will need to properly configure it to talk to the Arduino Uno WiFI Rev2 board:

### Set up the proper board

Go to `Tools > Board > Board > Boards Manager` and install the `Arduino megaAVR Boards`. After installation select the `Arduino Uno WiFi Rev2` from `Tools > Board`.

### Set up the proper port

Next, make sure you have the proper port selected. Go to `Tools > Port` and select the proper port. If you are on Windows, this is likely `COM3` or higher. If you are on a Mac, it will likely look something like `/dev/cu.usbmodem143102 (Arduino Uno WiFi Rev2)`. If you are having troubles figuring it out, unplug the Arduino, check the ports list, then plug the USB back in and the Arduino will be the port entry that has appeared.

### Install the accelerometer library

Finally, you will need to install the accelerometer libraries. Go to `Tools > Manage Libaries` and search for `lsm6ds3`. You will want to install the `Arduino_LSM6DS3` library by Arduino.
