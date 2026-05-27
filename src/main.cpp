#include <Arduino.h>

void setup() 
{
    Serial.begin(115200);  
    pinMode(2, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(16, OUTPUT);
    pinMode(17, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(18, OUTPUT);
}

void loop() 
{
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(16, LOW);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(17, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(18, LOW);
}