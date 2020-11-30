# uud73 Compact Ortholinear Keyboard
Personal project, based on the XD75 keyboard. Features 2x2U spacebars and is intended for use with the QMK Proton C. The current firmware for the XD75 is intended for a Pro Micro controller, and is not compatible with the automatic Proton C conversion. So, I ended up modifying/writing my own with basic functionality.

## Parts List
* 73x Cherry MX style mechanical switch
* 73x 1N4148 diode
* 71x 1U keycaps
* 2x 2U keycaps
* 1x QMK Proton C
* 1x Panel Mount USB-C Extension (https://www.sparkfun.com/products/15455)
* 1x QMK Proton C (https://qmk.fm/proton-c/)
* Wires and solder

## Construction
You will need access to a 3D printer to print off the required parts. They are intended to fit on 200mm x 200mm (or bigger) beds and be printed using FDM methods with minimal support (some maybe needed on the sides and back).
You'll also need access to a soldering station as this is a handwired project.

## Flashing
This is built on the QMK Firmware. You'll need to setup your own build environment in order to flash the firmware to the controller. After your environment is set up, simply add the "uud73" folder to the "keyboards" directory, and then make it. 
