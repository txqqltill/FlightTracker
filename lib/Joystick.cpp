#include "../include/Joystick.h"

bool Joystick::isJoyYUp() {
    int16_t t = (_joyY.adcReadRaw() - _offsetY);
    return t > THRESHOLD;
}

bool Joystick::isJoyYDown() {
    int16_t t = (_joyY.adcReadRaw() - _offsetY);
    return t < -THRESHOLD;
}

bool Joystick::isJoyYNeutral() {
    int16_t t = (_joyY.adcReadRaw() - _offsetY);
    return (t > -DEADZONE && t < DEADZONE);
}

Joystick::Joystick()
    : _joyY(EDU_JOY_Y)
{
    _joyY.adcMode(ADC::ADC_12_BIT);
    _offsetY = _joyY.adcReadRaw();
    logInfo("Joystick created");
}

bool Joystick::yMovedUp() {
    if (isJoyYUp() == false)
        return false;
    
    while (isJoyYUp()) {
    }
    
    while (isJoyYNeutral() == false) {
    }
    
    logInfo("JoyY Up");
    return true;        
}

bool Joystick::yMovedDown() {
    if (isJoyYDown() == false)
        return false;

    while (isJoyYDown()) {
    }
    
    while (isJoyYNeutral() == false) {
    }
    
    logInfo("JoyY Down");
    return true;     
}
