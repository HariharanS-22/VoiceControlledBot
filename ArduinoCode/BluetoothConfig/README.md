# HC-05 Bluetooth Configuration Guide

### STEP 1 --- Enter AT MODE

1.  Disconnect power from the Bluetooth module.
2.  Hold the small push button on the HC-05 module.
3.  Power the module while holding the button.
4.  The LED should blink slowly (about once every 2 seconds), indicating
    AT mode.


### STEP 2 --- Upload the Configuration Sketch

Upload the provided **Bluetooth AT configuration sketch** to the Arduino
Nano.


### STEP 3 --- Open Serial Monitor and Test Communication

-   Baud Rate: **9600**
-   Line Ending: **Both NL & CR**

Type the following command in Serial Monitor:

    AT

Expected response:

    OK

####  Change Bluetooth Name

Command:

    AT+NAME=YourName

Expected response:

    OKsetname


####  Change Password / PIN

Command:

    AT+PSWD=1234

Expected response:

    OKsetpswd


### FINAL STEP --- Exit AT MODE

1.  Remove power from the module.
2.  Power ON normally (without pressing the button).

The Bluetooth module will now broadcast using the new name and password.

