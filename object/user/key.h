#ifndef _KEY_H
#define _KEY_H

#include<reg52.h>

#ifndef DATA_TYPE
#define DATA_TYPE
typedef unsigned char u8;
typedef unsigned int u16;
#endif

sbit k1 = P3^0;
sbit k2 = P3^1;
sbit k3 = P3^2;
sbit k4 = P3^3;

#endif
