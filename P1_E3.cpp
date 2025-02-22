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
uint32_t*gpio_out=(uint32_t*)GPIO_OUT_REG;
*gpio_out |= (1<<LED_BUILTIN);
Serial.println("ON");
  delay(DELAY);

  *gpio_out ^= (1<<LED_BUILTIN);
  Serial.println("OFF");
  delay(DELAY);
}