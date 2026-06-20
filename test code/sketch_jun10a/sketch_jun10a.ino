#include <SoftwareSerial.h>

SoftwareSerial GpsSerial(2, 3); // RX on Pin 2 (connect to GPS TX), TX on Pin 3 (connect to GPS RX)

void setup() {
  Serial.begin(9600);
  GpsSerial.begin(9600);
}

void loop() {
  while (GpsSerial.available()) Serial.write(GpsSerial.read());
  while (Serial.available())    GpsSerial.write(Serial.read());
}
