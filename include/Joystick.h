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
    adc_rp2350_channel _joyY;
    uint16_t _offsetY = 0;

    bool isJoyYUp();
    bool isJoyYDown();
    bool isJoyYNeutral();

public:
    Joystick();

    bool yMovedUp();
    bool yMovedDown();
};

#endif // JOYSTICK_H
