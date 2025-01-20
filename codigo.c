#include <Arduino.h> 


#define LED_GREEN 11
#define LED_BLUE 12
#define LED_RED 13
#define BUZZER 21

void setup_pins() {
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_BLUE, OUTPUT);
    pinMode(LED_RED, OUTPUT);
    pinMode(BUZZER, OUTPUT);
}


void control_leds(bool green, bool blue, bool red) {
    digitalWrite(LED_GREEN, green);
    digitalWrite(LED_BLUE, blue);
    digitalWrite(LED_RED, red);
}


void buzzer_beep() {
    digitalWrite(BUZZER, HIGH);   
    delay(2000);                 
    digitalWrite(BUZZER, LOW);  


void setup() {
    Serial.begin(115200);  
    setup_pins();          
}

void loop() {
    char command[20]; 

    Serial.println("Digite um comando: LED_GREEN, LED_BLUE, LED_RED, LED_WHITE, LED_OFF, BUZZ_ON");

    
    if (Serial.available() > 0) {
        int i = 0;
        while (Serial.available() > 0 && i < sizeof(command) - 1) {
            command[i++] = Serial.read();
        }
        command[i] = '\0'; 

        if (strcmp(command, "LED_GREEN") == 0) {
            control_leds(true, false, false);
        } else if (strcmp(command, "LED_BLUE") == 0) {
            control_leds(false, true, false);
        } else if (strcmp(command, "LED_RED") == 0) {
            control_leds(false, false, true);
        } else if (strcmp(command, "LED_WHITE") == 0) {
            control_leds(true, true, true);
        } else if (strcmp(command, "LED_OFF") == 0) {
            control_leds(false, false, false);
        } else if (strcmp(command, "BUZZ_ON") == 0) {
            buzzer_beep();
        } else {
            Serial.println("Comando não reconhecido!");
        }
    }
}