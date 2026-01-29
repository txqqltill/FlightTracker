#ifndef FROMTOMANAGER_H
#define FROMTOMANAGER_H

#include "yahal_String.h"

class FromToManager {
private:
    char _from[4]; 
    char _to[4];
    uint8_t _cursor;

public:
    FromToManager() : _cursor(0) {
        _from[0] = 'A'; _from[1] = 'A'; _from[2] = 'A'; _from[3] = '\0';
        _to[0]   = 'A'; _to[1] = 'A'; _to[2] = 'A'; _to[3] = '\0';
    }

    void handleInput(bool up, bool down, bool left, bool right) {
        if (right) {
            _cursor++;
            if (_cursor > 5) _cursor = 0;
        }
        if (left) {
            if (_cursor == 0) _cursor = 5;
            else _cursor--;
        }

        if (up || down) {
            char* targetChar = (_cursor < 3) ? &_from[_cursor] : &_to[_cursor - 3];
            
            if (up) {
                (*targetChar)++;
                if (*targetChar > 'Z') *targetChar = 'A';
            }
            if (down) {
                (*targetChar)--;
                if (*targetChar < 'A') *targetChar = 'Z';
            }
        }
    }

    String getFrom() const { return String(_from); }
    String getTo() const { return String(_to); }
    uint8_t getCursor() const { return _cursor; }
    
    void reset() {
        _cursor = 0;
    }
};

#endif // FROMTOMANAGER_H