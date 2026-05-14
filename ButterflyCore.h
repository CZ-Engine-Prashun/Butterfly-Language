/* 
 * PRODUCT: BUTTERFLY LANGUAGE V1.0 (CORE BLACK BOX)
 * FOUNDER: PUNYAPRASHUN | BUTTERFLY BLOOD 🩸
 * LICENSE: PROPRIETARY - THE UNBREAKABLE STANDARD
 */

#ifndef BUTTERFLY_CORE_H
#define BUTTERFLY_CORE_H

#include <Arduino.h>

class ButterflyLanguage {
  private:
    float coreLogicState;      // Behavioral state of the system
    float stabilityVector;     // Healing strength factor
    const float TARGET_UNITY = 1.0;

  public:
    ButterflyLanguage() : coreLogicState(1.0), stabilityVector(1.0) {}

    // THE MAIN STROKE: Self-healing data processing
    float process(float inputPollution) {
        // Calculate Deviation from Logic Unity
        float deviation = abs(coreLogicState - TARGET_UNITY);

        // SELF-HEAL TRIGGER: Active when system enters "Danger Zone"
        if (deviation > 0.5) { 
            heal();
        }

        // BEHAVIORAL FLOW: Adaptive execution based on environmental noise
        coreLogicState += (inputPollution * (1.0 / stabilityVector));
        return coreLogicState;
    }

    void heal() {
        // Log Behaviour Rule: Resetting logic to stable baseline
        coreLogicState = (coreLogicState + TARGET_UNITY) / 2.0; 
        stabilityVector += 0.1; // Strengthening the core against future strikes
        Serial.println(">> [BUTTERFLY_SYSTEM]: CORE_HEAL_ACTIVE - RECOVERED");
    }

    float getStability() {
        return (100.0 - (abs(coreLogicState - TARGET_UNITY) * 100.0));
    }
};

#endif
