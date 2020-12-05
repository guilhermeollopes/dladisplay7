#ifndef _RX_DISPLAY7
#define _RX_DISPLAY7
#include <Arduino.h>

class pinSegment {
    private:

    public:
        pinSegment(int a, int b, int c, int d, int e, int f, int g, int p);
        void setNum(int n);
        void setOff();
        void setPoint(bool pB);
        void isAnode();
};

#endif