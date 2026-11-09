/*
  EmpowerGlove - SmartGlove Pro
  Hardware target: ESP32-C3 + 3 SS49E Hall-effect sensors

  STARTER FIRMWARE:
  - Reads three analog sensor inputs and prints raw values.
  - Pin numbers are placeholders. Set them for your exact board.
  - No gesture classifier or web server is implemented in this starter.

  Check your board pinout and ADC limitations before wiring.
*/

#include <Arduino.h>

// TODO: Replace -1 with verified analog-capable GPIO numbers.
constexpr int PIN_HALL_INDEX  = -1;
constexpr int PIN_HALL_MIDDLE = -1;
constexpr int PIN_HALL_RING   = -1;

bool pinsConfigured() {
  return PIN_HALL_INDEX >= 0 &&
         PIN_HALL_MIDDLE >= 0 &&
         PIN_HALL_RING >= 0;
}

void setup() {
  Serial.begin(115200);
  delay(500);

  Serial.println();
  Serial.println("EmpowerGlove - SmartGlove Pro");
  Serial.println("ESP32-C3 / 3x SS49E sensor test");

  if (!pinsConfigured()) {
    Serial.println("ERROR: Set the three verified ADC GPIO numbers in main.ino.");
    return;
  }

  pinMode(PIN_HALL_INDEX, INPUT);
  pinMode(PIN_HALL_MIDDLE, INPUT);
  pinMode(PIN_HALL_RING, INPUT);
}

void loop() {
  if (!pinsConfigured()) {
    delay(1000);
    return;
  }

  const int indexValue  = analogRead(PIN_HALL_INDEX);
  const int middleValue = analogRead(PIN_HALL_MIDDLE);
  const int ringValue   = analogRead(PIN_HALL_RING);

  Serial.print("Index: ");
  Serial.print(indexValue);
  Serial.print(" | Middle: ");
  Serial.print(middleValue);
  Serial.print(" | Ring: ");
  Serial.println(ringValue);

  delay(100);
}
