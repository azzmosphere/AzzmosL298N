#ifndef AzzmosL298N
#include "Arduino.h"

/**
 * Provides routines  
 */


class AzzmosL298N
{
    public:
        AzzmosL298N(
            uint8_t _in1,
            uint8_t _in2,
            uint8_t _in3,
            uint8_t _in4,

            uint8_t _ena,
            uint8_t _enb
        );

        void resetMotors();

        void driveMotors(uint8_t, uint8_t, uint8_t, uint8_t,uint8_t, uint8_t);

        void moveForward(uint8_t);

        void moveBackward(uint8_t);

        void AzzmosL298N::begin();

    private:
        uint8_t _in1;
        uint8_t _in2; 
        uint8_t _in3; 
        uint8_t _in4;

        uint8_t _ena; 
        uint8_t _enb;
};

#endif