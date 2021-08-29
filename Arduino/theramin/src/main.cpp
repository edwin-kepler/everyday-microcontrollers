#include <Arduino.h>

const int photoresistorPin = A0;
const int buzzerPin = 9;

int sensorValue = 0;
int outputValue = 0;

void setup() {

}

void loop() {
	sensorValue = analogRead(photoresistorPin);
	tone(buzzerPin, sensorValue);
}
