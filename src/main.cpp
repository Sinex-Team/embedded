#include <Arduino.h>

#define SOIL_MOISTURE_PIN 26

void setup() {

  Serial.begin(9600);
  pinMode(SOIL_MOISTURE_PIN, INPUT);

}

void loop() {

  int soil_moisture = analogRead(SOIL_MOISTURE_PIN);

  Serial.print("Soil Moisture: ");
  Serial.println(soil_moisture);

  delay(500);
}
