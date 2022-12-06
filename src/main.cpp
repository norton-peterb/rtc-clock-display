#include <Arduino.h>
#include <Wire.h>
#include "SparkFunDS1307RTC.h"

char buffer[24];

void setup() {
  rtc.begin();
  rtc.set24Hour(true);
}

void loop() {
  delay(1000);
}