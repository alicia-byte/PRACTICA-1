#include <Arduino.h>

#define LED_BUILTIN 2
#define DELAY 500

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN,OUTPUT);}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN,HIGH);
  delay(DELAY);
  digitalWrite(LED_BUILTIN,LOW);
  delay(DELAY);
}
