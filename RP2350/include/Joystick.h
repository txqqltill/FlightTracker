#ifndef JOYSTICK_H
#define JOYSTICK_H

#include "Log.h"

#include "posix_io.h"
#include "adc_rp2350.h"
#include "boostxl_eduMKII.h"
#include "task.h"

#define THRESHOLD 1500
#define DEADZONE 500

class Joystick
{
private:
    adc_rp2350_channel _joyX;
    adc_rp2350_channel _joyY;
    uint16_t _offsetX = 0;
    uint16_t _offsetY = 0;

    bool isRight();
    bool isLeft();
    bool isUp();
    bool isDown();
    bool isXNeutral();
    bool isYNeutral();

public:
    Joystick();

    bool MovedRight();
    bool MovedLeft();
    bool MovedUp();
    bool MovedDown();
};

#endif // JOYSTICK_H
