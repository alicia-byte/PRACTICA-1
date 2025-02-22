#include <Arduino.h>

#define LED_PIN 2  // Puedes cambiar este pin a cualquier otro disponible en tu microcontrolador

void setup() {
    pinMode(LED_PIN, OUTPUT);  // Configurar el pin como salida
    Serial.begin(115200);      // Iniciar la comunicación serie
}

void loop() {
    uint32_t* gpio_out = (uint32_t*)GPIO_OUT_REG;  // Acceso directo al registro GPIO
    
     //CASO 1: Con Serial.println() y digitalWrite()
     //digitalWrite(LED_PIN, HIGH);
     //Serial.println("ON");
     //digitalWrite(LED_PIN, LOW);
    //Serial.println("OFF");

    // CASO 2: Con Serial.println() y acceso a registros
    //*gpio_out |= (1 << LED_PIN);
     //Serial.println("ON");
     //*gpio_out &= ~(1 << LED_PIN);
     //Serial.println("OFF");

    // CASO 3: Sin Serial.println() y usando digitalWrite()
     //digitalWrite(LED_PIN, HIGH);
    //digitalWrite(LED_PIN, LOW);

    // CASO 4: Sin Serial.println() y acceso directo a registros (Máxima velocidad)
    *gpio_out |= (1 << LED_PIN);
    *gpio_out &= ~(1 << LED_PIN);
}