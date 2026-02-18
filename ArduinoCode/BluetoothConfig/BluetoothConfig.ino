/*
   ------------------------------------------------------------
   Bluetooth AT Configuration Sketch (HC-05 / HC-06)
   ------------------------------------------------------------

   PURPOSE:
   This code acts as a bridge between the Arduino Serial Monitor
   and the Bluetooth module AT command interface.

   You type AT commands in the Serial Monitor → Arduino sends
   them to the Bluetooth module → responses come back to you.

   Used for:
   ✔ Changing Bluetooth Name
   ✔ Setting Password / PIN
   ✔ Verifying communication

   HARDWARE CONNECTIONS:
   --------------------------------
   Arduino Nano        Bluetooth Module
   --------------------------------
   D10  (RX)  <------  TX
   D11  (TX)  ------>  RX   (Use voltage divider if HC-05)
   5V          ------>  VCC
   GND         ------>  GND

   NOTE:
   HC-05 must be powered in AT MODE.
   Usually hold the button while powering ON.
   LED should blink slowly (≈2 sec interval).

   BAUD RATE:
   AT mode default = 38400
*/

#include <SoftwareSerial.h>

SoftwareSerial bt(10, 11); // RX, TX

void setup() {

  Serial.begin(9600);

  bt.begin(38400);   // AT mode baud rate for HC-05

  Serial.println("Bluetooth AT Config Ready");
  Serial.println("Type AT commands in Serial Monitor...");
}

void loop() {

  if (bt.available()) {
    Serial.write(bt.read());
  }

  if (Serial.available()) {
    bt.write(Serial.read());
  }
}

