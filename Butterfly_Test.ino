/* 
 * PROJECT: BUTTERFLY BLOOD 🩸 (FULL CORE)
 * STATUS: UNBREAKABLE / SELF-HEALING ACTIVE
 * BRAND: SARASWATI ENGINE COMPLIANT
 */

#include <Arduino.h>

// --- BUTTERFLY CORE BLACK BOX ---
class ButterflyLanguage {
  private:
    float coreLogicState;
    float stabilityVector;
    const float TARGET_UNITY = 1.0;

  public:
    ButterflyLanguage() : coreLogicState(1.0), stabilityVector(1.0) {}

    // Main Stroke: Behavioral Processing
    void process(float pollution) {
        float deviation = abs(coreLogicState - TARGET_UNITY);

        // SELF-HEAL TRIGGER
        if (deviation > 0.5) { 
            coreLogicState = (coreLogicState + TARGET_UNITY) / 2.0; 
            stabilityVector += 0.1; 
            Serial.println(">> [SYSTEM_ALERT]: BUTTERFLY CORE HEALING... STABILITY RESTORED");
        }

        // Apply Dynamic Flow
        coreLogicState += (pollution * (1.0 / stabilityVector));
    }

    float getIntegrity() {
        float integrity = 100.0 - (abs(coreLogicState - TARGET_UNITY) * 100.0);
        return constrain(integrity, 0.0, 100.0);
    }
};

// --- EXECUTION BLOCK ---
ButterflyLanguage bfly;

void setup() {
    Serial.begin(115200);
    delay(1000);
    Serial.println("--- BUTTERFLY BLOOD: UNBREAKABLE CORE INITIALIZED ---");
    Serial.println("BRAND: SARASWATI ENGINE V1.0");
}

void loop() {
    // Hostile Environment Simulation (Logic Pollution)
    float strike = (float)random(-200, 200) / 100.0; 

    Serial.print("POLLUTION_STRIKE: "); 
    Serial.print(strike);

    // Run the Logic
    bfly.process(strike);
    
    // Integrity Verification
    Serial.print(" | CORE_INTEGRITY: ");
    Serial.print(bfly.getIntegrity());
    Serial.println("%");

    delay(500); 
}
