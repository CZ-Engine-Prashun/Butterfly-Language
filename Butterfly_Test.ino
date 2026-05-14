#include "ButterflyCore.h"

ButterflyLanguage butterfly;

void setup() {
    Serial.begin(115200);
    Serial.println("--- BUTTERFLY LANGUAGE: UNBREAKABLE LOGIC TEST ---");
}

void loop() {
    // Simulating hostile environment (Logic Pollution)
    float pollutionStrike = (float)random(-200, 200) / 100.0; 

    Serial.print("STRIKE: "); Serial.print(pollutionStrike);
    
    // Processing via the Butterfly Black Box
    butterfly.process(pollutionStrike);
    
    // Verifying System Integrity
    Serial.print(" | INTEGRITY: ");
    Serial.print(butterfly.getStability());
    Serial.println("%");

    delay(300); // High-speed execution
}
