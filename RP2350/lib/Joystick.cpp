#include "../include/Joystick.h"

bool Joystick::isRight(){
    int16_t t = (_joyX.adcReadRaw() - _offsetX);
    return t > THRESHOLD;
}

bool Joystick::isLeft() {
    int16_t t = (_joyX.adcReadRaw() - _offsetX);
    return t < -THRESHOLD;
}

bool Joystick::isUp() {
    int16_t t = (_joyY.adcReadRaw() - _offsetY);
    return t > THRESHOLD;
}

bool Joystick::isDown() {
    int16_t t = (_joyY.adcReadRaw() - _offsetY);
    return t < -THRESHOLD;
}

bool Joystick::isXNeutral() {
    int16_t t = (_joyX.adcReadRaw() - _offsetX);
    return (t > -DEADZONE && t < DEADZONE);
}

bool Joystick::isYNeutral() {
    int16_t t = (_joyY.adcReadRaw() - _offsetY);
    return (t > -DEADZONE && t < DEADZONE);
}

Joystick::Joystick()
    : _joyX(EDU_JOY_X), _joyY(EDU_JOY_Y)
{
    _joyX.adcMode(ADC::ADC_12_BIT);
    _offsetX = _joyX.adcReadRaw();
    _joyY.adcMode(ADC::ADC_12_BIT);
    _offsetY = _joyY.adcReadRaw();
    logInfo("Joystick created");
}

bool Joystick::MovedRight() {
    if (isRight() == false)
        return false;

    while (isRight()) {
    }
    
    while (isXNeutral() == false) {
    }
    
    logInfo("JoyX Right");
    return true;     
}

bool Joystick::MovedLeft() {
    if (isLeft() == false)
        return false;
    
    while (isLeft()) {
    }
    
    while (isXNeutral() == false) {
    }
    
    logInfo("JoyX Left");
    return true;     
}

bool Joystick::MovedUp() {
    if (isUp() == false)
        return false;
    
    while (isUp()) {
    }
    
    while (isYNeutral() == false) {
    }
    
    logInfo("JoyY Up");
    return true;        
}

bool Joystick::MovedDown() {
    if (isDown() == false)
        return false;

    while (isDown()) {
    }
    
    while (isYNeutral() == false) {
    }
    
    logInfo("JoyY Down");
    return true;     
}
