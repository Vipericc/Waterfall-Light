#include <Arduino.h>

int count = 0;

void setup() 
{
    Serial.begin(115200);  
    pinMode(2, OUTPUT);
    pinMode(16, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(19, OUTPUT);

}

void loop() 
{
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(16, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    digitalWrite(19, HIGH);
    delay(500);
    digitalWrite(19, LOW);
}