#include "util.h"

void delayMs(int delayTime)   //Îó²î -0.000000000001us
{
    unsigned char a,b;
    while(delayTime--) {
        for(b=4;b>0;b--)
            for(a=113;a>0;a--);
    }
}