#include "SoftwareSerial.h"
SoftwareSerial mySerial(3, 2); // RX, TX for Bluetooth

// Define LEDs
#define blue 2
#define green 3
#define red 4
#define yellow 5

int indexFinger = 0;
int middleFinger = 0;
int ringFinger = 0;
int littleFinger = 0;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600); // Bluetooth module

  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);

  pinMode(A1, INPUT); // Index
  pinMode(A2, INPUT); // Middle
  pinMode(A3, INPUT); // Ring
  pinMode(A4, INPUT); // Little
}

void loop() {
  // Read flex sensor values
  indexFinger = analogRead(A1);
  middleFinger = analogRead(A2);
  ringFinger = analogRead(A3);
  littleFinger = analogRead(A4);
  // Serial.print(" Index: "); Serial.print(indexFinger);
  // Serial.print(" Middle: "); Serial.print(middleFinger);
  // Serial.print(" Ring: "); Serial.print(ringFinger);
  // Serial.print(" Little: "); Serial.println(littleFinger);

  // Threshold values
  bool index_bent = (indexFinger < 1000);
  bool middle_bent = (middleFinger < 1000);  // Since it fluctuates between 0-100
  bool ring_bent = (ringFinger < 1000);
  bool little_bent = (littleFinger < 1000);

  // Generate binary pattern
  int binary_pattern = (index_bent << 3) | (middle_bent << 2) | (ring_bent << 1) | little_bent;
  
  // Define messages
  String message = "";

  switch (binary_pattern) {
    case 0b0000: message = "A"; digitalWrite(blue, HIGH); break;
    case 0b0001: message = "Please give me water."; digitalWrite(green, HIGH); break;
    case 0b0010: message = "I do not understand."; digitalWrite(red, HIGH); break;
    case 0b0011: message = "Can you please repeat that?"; digitalWrite(yellow, HIGH); break;
    case 0b0100: message = "E"; digitalWrite(blue, HIGH); break;
    case 0b0101: message = "F"; digitalWrite(green, HIGH); break;
    case 0b0110: message = "G"; digitalWrite(red, HIGH); break;
    case 0b0111: message = "Call my family."; digitalWrite(yellow, HIGH); break;
    case 0b1000: message = "I am hungry."; digitalWrite(blue, HIGH); break;
    case 0b1001: message = "Thank you!"; digitalWrite(green, HIGH); break;
    case 0b1010: message = "I need help."; digitalWrite(red, HIGH); break;
    case 0b1011: message = "Hello, how are you?"; digitalWrite(yellow, HIGH); break;
    case 0b1100: message = "M"; digitalWrite(blue, HIGH); break;
    case 0b1101: message = "N"; digitalWrite(green, HIGH); break;
    case 0b1110: message = "Goodbye, have a nice day!"; digitalWrite(red, HIGH); break;
    case 0b1111: message = "Where is the restroom?"; digitalWrite(yellow, HIGH); break;
  }

  // Send message over Bluetooth and Serial
  if (message != "") {
    Serial.println(message);
    mySerial.println(message);  // Send to Bluetooth module
  }

  // Turn off all LEDs after short delay
  delay(5000);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
}