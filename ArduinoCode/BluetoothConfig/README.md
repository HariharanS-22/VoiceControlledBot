# HC-05 Bluetooth Configuration Guide

## PROCEDURE TO SET BLUETOOTH NAME & PASSWORD (HC-05)

------------------------------------------------------------------------

### STEP 1 --- Enter AT MODE

1.  Disconnect power from the Bluetooth module.
2.  Hold the small push button on the HC-05 module.
3.  Power the module while holding the button.
4.  The LED should blink slowly (about once every 2 seconds), indicating
    AT mode.

------------------------------------------------------------------------

### STEP 2 --- Upload the Configuration Sketch

Upload the provided **Bluetooth AT configuration sketch** to the Arduino
Nano.

------------------------------------------------------------------------

### STEP 3 --- Open Serial Monitor

-   Baud Rate: **9600**
-   Line Ending: **Both NL & CR**

------------------------------------------------------------------------

### STEP 4 --- Test Communication

Type the following command in Serial Monitor:

    AT

Expected response:

    OK

------------------------------------------------------------------------

### STEP 5 --- Change Bluetooth Name

Command:

    AT+NAME=VoiceBot

Expected response:

    OKsetname

------------------------------------------------------------------------

### STEP 6 --- Change Password / PIN

Command:

    AT+PSWD=1234

Expected response:

    OKsetpswd

Note: Some firmware versions use `AT+PIN` instead of `AT+PSWD`.

------------------------------------------------------------------------

### STEP 7 --- Optional Settings

Set Baud Rate:

    AT+UART=9600,0,0

Check Firmware Version:

    AT+VERSION?

------------------------------------------------------------------------

### STEP 8 --- Exit AT MODE

1.  Remove power from the module.
2.  Power ON normally (without pressing the button).

The Bluetooth module will now broadcast using the new name and password.

------------------------------------------------------------------------

## TROUBLESHOOTING

**No response** - Verify AT mode LED blinking speed. - Ensure baud rate
is set to **38400** for AT mode. - Try Serial Monitor line ending as
**Both NL & CR**.

**Garbled or random text** - Baud rate mismatch. Check AT mode baud
rate.

**Unable to connect after renaming** - Delete the previous pairing from
the phone. - Pair again using the new name and password.
