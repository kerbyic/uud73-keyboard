# uud73 Compact Ortholinear Keyboard
Personal project, based on the XD75 keyboard. Features 2x2U spacebars and is intended for use with the QMK Proton C. The current firmware for the XD75 is intended for a Pro Micro controller, and is not compatible with the automatic Proton C conversion. So, I ended up modifying/writing my own with basic functionality.

## Parts List
* 73x Cherry MX style mechanical switch
* 73x 1N4148 diode
* 71x 1U keycaps
* 2x 2U keycaps
* 1x QMK Proton C
* 1x [Panel Mount USB-C Extension](https://www.sparkfun.com/products/15455)
* 1x [QMK Proton C](https://qmk.fm/proton-c/)
* Wires and solder
* 8x (minimum) [M3-0.5 threaded heat insert](https://www.amazon.com/gp/product/B073W2898C/)
* 8x (minimum) M3x10 hex socket screw

## Construction
You will need access to a 3D printer to print off the required parts. They are intended to fit on 200mm x 200mm (or bigger) beds and be printed using FDM methods with minimal support (some maybe needed on the sides and back).
You'll also need access to a soldering station as this is a handwired project.

This project needs one of each body side (left/right), two trim pieces, and a metal cutout (aluminum works perfectly) of the plate. Insert the threaded inserts into the trim pieces. Install the switches on the plate, then do the wiring and solder to the Proton C. Then sandwich the plate between the trim and body pieces, inserting the screws from the bottom, through the plate, and anchoring into the trim.

More detailed build instructions (with some pictures) may come later.

## Flashing
This is built on the QMK Firmware (https://github.com/qmk/qmk_firmware). You'll need to setup your own build environment in order to flash the firmware to the controller. After your environment is set up, simply add the "uud73" folder to the "keyboards" directory, and then make it. 

## Renders
![alt text](https://github.com/kerbyic/uud73-keyboard/blob/main/renders/uud73_Mech_Angled.png)
![alt text](https://github.com/kerbyic/uud73-keyboard/blob/main/renders/uud73_Mech_Assembly_Keycaps3.png)
