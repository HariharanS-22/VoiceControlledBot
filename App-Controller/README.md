# Voice Bot Controller -- Android App

## Overview

**Voice Bot Controller** is an Android application developed using **MIT
App Inventor** for a robotics workshop conducted by the **Robotics Club
of CEG** in collaboration with **ECEA**.

The application enables users to control a robot using **voice
commands** as well as **manual directional controls** via Bluetooth
communication.

------------------------------------------------------------------------

## Features

-   Bluetooth device scanning and selection
-   Voice-controlled robot navigation
-   Manual directional control interface
-   Simple UI designed for workshop participants
-   Compatible with Arduino Nano + HC-05 based robots

------------------------------------------------------------------------

## Technologies Used

-   MIT App Inventor
-   Bluetooth Classic Communication
-   Android Voice Recognition

------------------------------------------------------------------------

## Application Workflow

1.  Open the app and tap **CONNECT BLUETOOTH**.

2.  A list of available Bluetooth devices will appear.

3.  Select the required device from the list.

4.  Once connected, use:

    -   **LISTEN TO VOICE** for speech-based commands
    -   Manual buttons for direct robot control

------------------------------------------------------------------------

## Control Modes

### Voice Control

The app listens to user voice input and sends corresponding commands to
the robot via Bluetooth.

Example commands: - Forward - Backward - Left - Right - Stop

### Manual Control

Buttons provided: - Forward - Backward - Left - Right - Stop

Designed to help beginners understand robot navigation logic during the
workshop.

------------------------------------------------------------------------

## Screens Overview

### Bluetooth Device Selection

Displays all nearby Bluetooth devices after scanning.\
Users must select a device before sending commands.

### Main Controller Interface

Contains: - Connection status indicator - Voice listening feature -
Manual direction buttons

------------------------------------------------------------------------

## Workshop Information

Developed for: **Robotics Club of CEG**\
In collaboration with **ECEA**

Purpose: To demonstrate Bluetooth-based robot control and introduce
students to rapid Android app development using MIT App Inventor.

------------------------------------------------------------------------

## Installation

1.  Install the provided `.apk` file on your Android device.
2.  Enable Bluetooth on your phone.
3.  Pair with the HC-05 module if required.
4.  Launch the app and connect.

------------------------------------------------------------------------

## Notes

-   Ensure location and microphone permissions are enabled for Bluetooth
    scanning and voice recognition.
-   Delete old Bluetooth pairings if connection issues occur.
