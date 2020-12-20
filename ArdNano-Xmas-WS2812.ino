//Louis Huggins


#include <HCSR04.h>
#include <Adafruit_NeoPixel.h>

#define trigPin 3
#define echoPin 4

#define LED_PIN 8
#define LED_COUNT 60

AdaFruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
UltraSonicDistanceSensor sensor(trigPin, echoPin);

int state_var, alt;
long duration, cm;
bool lights_on, changed;

void setup() {

//	pinMode(trigPin, OUTPUT);
//	pinMode(echoPin, INPUT);

	alt = 0;
	lights_on = 0;
	changed = 0;

	strip.begin();
	strip.show();
	strip.setBrightness(50);
	
	state_var = 0;

}

void loop() {

	double distance = sensor.measureDistanceCm();

 
}
