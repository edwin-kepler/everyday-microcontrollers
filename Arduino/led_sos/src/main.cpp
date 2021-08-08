#include <Arduino.h>

void ledOn(int _t)
{
	digitalWrite(LED_BUILTIN, HIGH);
	delay(_t);
}

void ledOff(int _t) {
	digitalWrite(LED_BUILTIN, LOW);
	delay(_t);
}

void setup() {
	// use build in pin 13 (the one on the board)
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
	// three dots
	ledOn(200);
	ledOff(200);
	ledOn(200);
	ledOff(200);
	ledOn(200);
	ledOff(200);

	// three dashes
	ledOn(800);
	ledOff(200);
	ledOn(800);
	ledOff(200);
	ledOn(800);
	ledOff(200);

	// three dots
	ledOn(200);
	ledOff(200);
	ledOn(200);
	ledOff(200);
	ledOn(200);
	ledOff(800);
}
