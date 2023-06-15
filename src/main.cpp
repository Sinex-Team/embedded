#include <Arduino.h>
#define RELAY_PIN 23
#define SENSOR_PIN 34

int humidity = 0;   

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);
  Serial.begin(9600); 
  
}

void loop() {
  humidity = analogRead(SENSOR_PIN);

  if (humidity < 1750){
    digitalWrite(RELAY_PIN, 1);
  }else{
    digitalWrite(RELAY_PIN, 0);
  }
  Serial.println(humidity);
  delay(1000);

}