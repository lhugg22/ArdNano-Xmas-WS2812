//Louis Huggins


#include <HCSR04.h>
#include <Adafruit_NeoPixel.h>

#define trigPin 3
#define echoPin 4

#define LED_PIN 8
#define LED_COUNT 60

AdaFruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

int state_var, alt;
long duration, cm;
bool lights_on, changed;

void setup() {

	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);

}

void loop() {
}
