#ifndef BUTTON_H
#define BUTTON_H

#include "gpio_rp2350.h"
#include "task.h"

class Button
{
private:
    gpio_rp2350 _button;
public:
    Button(const int &gpio) : _button(gpio){
        _button.setMode(GPIO::INPUT_INVERT | GPIO::PULLUP);
    }

    bool pressed(){
        if (_button){
            task::sleep_ms(125);
            while (_button.gpioRead())
            {
            }
            return true;
        }
        return false;
    }
};

#endif // BUTTON_H