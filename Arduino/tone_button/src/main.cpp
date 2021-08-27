#include <Arduino.h>

const int button1Pin 	= 7;
const int button2Pin 	= 5;
const int button3Pin 	= 3;
const int ledPin 		= 13;
const int speakerPin	= 11;

void setup() {
	pinMode(ledPin, OUTPUT);
	pinMode(speakerPin, OUTPUT);
	pinMode(button1Pin, INPUT);
	pinMode(button2Pin, INPUT);
	pinMode(button3Pin, INPUT);
}

void loop() {
	if(digitalRead(button1Pin))
	{
		digitalWrite(ledPin, HIGH);
		tone(speakerPin, 330);
	}
	else if(digitalRead(button2Pin))
	{
		digitalWrite(ledPin, HIGH);
		tone(speakerPin, 392);
	}
	else if(digitalRead(button3Pin))
	{
		digitalWrite(ledPin, HIGH);
		tone(speakerPin, 494);
	}
	else
	{
		digitalWrite(ledPin, LOW);
		noTone(speakerPin);
	}
}