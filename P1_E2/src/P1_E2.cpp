#include <Arduino.h>

#define LED_BUILTIN 2
#define DELAY 1000

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN,OUTPUT);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN,HIGH);
  Serial.println("ON");
  delay(DELAY);
  digitalWrite(LED_BUILTIN,LOW);
  Serial.println("OFF");
  delay(DELAY);
}