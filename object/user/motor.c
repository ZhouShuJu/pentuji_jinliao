#include "motor.h"
#include "util.h"


void motorX(u8 speed, u8 direction, u16 pulseNumber) {
    motorInit(POWERON);
    if (direction) {
        while(pulseNumber --) {
           MOTOR_A1 = 1;
           MOTOR_A2 = 0;
           MOTOR_B1 = 1;
           MOTOR_B2 = 1;
           delayMs(speed);
           MOTOR_A1 = 1;
           MOTOR_A2 = 1;
           MOTOR_B1 = 1;
           MOTOR_B2 = 0;
           delayMs(speed);
           MOTOR_A1 = 0;
           MOTOR_A2 = 1;
           MOTOR_B1 = 1;
           MOTOR_B2 = 1;
           delayMs(speed);
           MOTOR_A1 = 1;
           MOTOR_A2 = 1;
           MOTOR_B1 = 0;
           MOTOR_B2 = 1;
           delayMs(speed); 
        }
    } else {
        while(pulseNumber --) {
           MOTOR_A1 = 1;
           MOTOR_A2 = 1;
           MOTOR_B1 = 0;
           MOTOR_B2 = 1;
           delayMs(speed);
           MOTOR_A1 = 0;
           MOTOR_A2 = 1;
           MOTOR_B1 = 1;
           MOTOR_B2 = 1;
           delayMs(speed);
           MOTOR_A1 = 1;
           MOTOR_A2 = 1;
           MOTOR_B1 = 1;
           MOTOR_B2 = 0;
           delayMs(speed);
           MOTOR_A1 = 1;
           MOTOR_A2 = 0;
           MOTOR_B1 = 1;
           MOTOR_B2 = 1;
           delayMs(speed);
        }
    }
    motorInit(POWEROFF);
} 

void motorInit(u8 onOrOff) {
    MOTOR_A1 = onOrOff;
    MOTOR_A2 = onOrOff;
    MOTOR_B1 = onOrOff;
    MOTOR_B2 = onOrOff;
} 
