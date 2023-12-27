# Arduino_Rubber_Ducky

I used linux system to program the chip and Windows 10 system to test the attack.<br /><br />

step 1: Install dfu-programmer in the system to flash arduino with different firmwares<br />
step 2: Upload the given sketch into the board using IDE<br />
step 3: Short the first two pins of ICSP for USB interface to change the board into bootloader mode.<br />
    (If you don't understand, just search 'how to change the arduino board to dfu mode')<br />
step 4: flash Arduino-keyboard-0.3.hex by running `./keyboardMode` command.<br />
step 5: Unplug the arduino and connect it to the victim's board.<br />
<br />
!!! Don't forget to change the variables in the provided payload !!!<br /><br />

*** If you want to bring the arduino to normal state, redo the step 3 and flash it again but using `./arduinoMode` command. This time, Arduino-usbserial-uno.hex will be flashed into the board. Replug the board and it will be back to normal state ***
