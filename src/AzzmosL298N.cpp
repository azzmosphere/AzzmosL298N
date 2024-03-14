/**
 * 
 */

#include <AzzmosL298N.h>

AzzmosL298N::AzzmosL298N(
            uint8_t in1,
            uint8_t in2,
            uint8_t in3,
            uint8_t in4,

            uint8_t ena,
            uint8_t enb
) {
    _in1 = in1;
    _in2 = in2;
    _in3 = in3;
    _in4 = in4;

    _ena = ena;
    _enb = enb;
}

/**
 * This will be called from the setup() function of the sketch. Hardware configuration is 
 * done in a dedicated function instead of the constructor because the hardware has not 
 * yet been initialized at the time the constructor code is executed. 
**/
void AzzmosL298N::begin() {
    const uint8_t displayPins[] = {_in1, _in2, _in3, _in4};

    for (int i = 0; i < 5; i++) {
        pinMode(displayPins[i], OUTPUT); 
    }

    pinMode(_ena, OUTPUT);
    pinMode(_enb, OUTPUT);
}

void AzzmosL298N::driveMotors(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4,uint8_t ena, uint8_t enb) {
  digitalWrite(_in1, in1);
  digitalWrite(_in2, in2);
  
  digitalWrite(_in3, in3);
  digitalWrite(in4, in4);

  analogWrite(_ena, ena);
  analogWrite(_enb, enb);
}

void AzzmosL298N::resetMotors() {
  analogWrite(_ena,0); 
  analogWrite(_enb,0);
  driveMotors(LOW, LOW, LOW, LOW, 0, 0);
}