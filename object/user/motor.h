#ifndef _MOTOR_H
#define _MOTOR_H

#include<reg52.h>

#ifndef SYSTEM_TYPE
#define SYSTEM_TYPE
typedef unsigned char u8;
typedef unsigned int u16;
#endif

sbit MOTOR_A1 = P1^0;
sbit MOTOR_A2 = P1^1;
sbit MOTOR_B1 = P1^2;
sbit MOTOR_B2 = P1^3;

#define CW 1
#define CCW 0
#define POWERON 1
#define POWEROFF 0

void motorX(u8 speed, u8 direction, u16 pulseNumber);
void motorInit(u8 onOrOff);

#endif