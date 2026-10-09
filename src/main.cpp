///////////////////////////////////////////////
//09/10/2026
//Version 1
//Tashal Gunatillake
//0306331g@acadiau.ca
//COMP 5163 Analog Signal Lab
///////////////////////////////////////////////

#include <Arduino.h>

void setup() {
    Serial.begin(115200);
}

void loop() {

    int iVal = analogRead(A0);

    float temperature = iVal * 50.0f / 1023.0f;

    Serial.print("Digitized output of ");
    Serial.print(iVal);
    Serial.print(" is equivalent to a temperature input of ");
    Serial.print(temperature, 2);
    Serial.print(" deg. C, which is ");

    if (temperature < 10.0f) {
        Serial.println("Cold!");
    } else if (temperature < 15.0f) {
        Serial.println("Cool");
    } else if (temperature < 25.0f) {
        Serial.println("Perfect");
    } else if (temperature < 30.0f) {
        Serial.println("Warm");
    } else if (temperature <= 35.0f) {
        Serial.println("Hot");
    } else {
        Serial.println("Too Hot!");
    }

    delay(2000);
}
