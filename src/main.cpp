#include <Wire.h>
#include <AHT10.h>

AHT10 aht;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  aht.begin();
}

void loop() {
  float temperature = aht.readTemperature();
  float humidity = aht.readHumidity();
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity);
  Serial.println("%");
  delay(1000);
}