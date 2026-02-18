#include <SoftwareSerial.h>

// HC-05 Bluetooth
SoftwareSerial BT(10, 11); // RX, TX

// Motor pins
const int IN1 = 3, IN2 = 4, ENA = 5;   // Left motor
const int IN3 = 6, IN4 = 7, ENB = 9;   // Right motor

const int Speed1 = 255;   // 0–255
const int Speed2 = 255;

const int RUN_TIME = 2000; // 2 seconds

String command = "";   // stores incoming word

void setup() {
  Serial.begin(9600);
  BT.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);

  stopBot();
  Serial.println("Voice Controlled Bot Ready");
}

void loop() {

  while (BT.available()) {
    char c = BT.read();

    // Start character (optional reset)
    if (c == '*') {
      command = "";
    }
    // End character → process command
    else if (c == '#') {
      Serial.print("Command: ");
      Serial.println(command);
      executeCommand(command);
      command = "";
    }
    else {
      command += c;   // build word
    }
  }
}


// ===== Command Handler =====
void executeCommand(String cmd) {

  cmd.toUpperCase(); // makes comparison safe

  if (cmd == "FORWARD") {
    forward(); delay(RUN_TIME); stopBot();
  }
  else if (cmd == "BACKWARD") {
    backward(); delay(RUN_TIME); stopBot();
  }
  else if (cmd == "LEFT") {
    left(); delay(RUN_TIME); stopBot();
  }
  else if (cmd == "RIGHT") {
    right(); delay(RUN_TIME); stopBot();
  }
  else if (cmd == "STOP") {
    stopBot();
  }
}


// ===== Motor control functions =====

void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, Speed1);
  analogWrite(ENB, Speed2);
}

void backward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, Speed1);
  analogWrite(ENB, Speed2);
}

void left() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, Speed1);
  analogWrite(ENB, Speed2);
}

void right() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, Speed1);
  analogWrite(ENB, Speed2);
}

void stopBot() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}
