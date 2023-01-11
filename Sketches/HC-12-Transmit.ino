#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  Serial.println("TX Setup completed");
}

void loop() {
  static unsigned long counter = 0;
  Serial.print("Counter = ");
  Serial.println(++counter);
  delay(1800);
}