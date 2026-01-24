#ifndef SPECIFICSEARCHMANAGER_H
#define SPECIFICSEARCHMANAGER_H

#include "yahal_String.h"

class SpecificSearchManager {
private:
    char _query[8];
    uint8_t _cursor; 

public:
    SpecificSearchManager() : _cursor(0) {
        reset();
    }

    void handleInput(bool up, bool down, bool left, bool right) {
        if (right) {
            _cursor++;
            if (_cursor > 6) _cursor = 0;
        }
        if (left) {
            if (_cursor == 0) _cursor = 6;
            else _cursor--;
        }

        if (up || down) {
            char* target = &_query[_cursor];
            
            if (up) {
                if (*target == ' ') *target = 'A';
                else if (*target == 'Z') *target = '0';
                else if (*target == '9') *target = ' ';
                else (*target)++;
            }
            if (down) {
                if (*target == ' ') *target = '9';
                else if (*target == '0') *target = 'Z';
                else if (*target == 'A') *target = ' ';
                else (*target)--;
            }
        }
    }

    String getRawQuery() const { 
        return String(_query); 
    }

    String getQuery() const { 
        char buffer[8];
        int j = 0;
        for(int i = 0; i < 7; i++) {
            if(_query[i] != ' ') {
                buffer[j++] = _query[i];
            }
        }
        buffer[j] = '\0';
        return String(buffer);
    }

    uint8_t getCursor() const { return _cursor; }
    
    void reset() {
        _cursor = 0;
        for(int i=0; i<7; i++) _query[i] = ' ';
        _query[7] = '\0';
    }
};

#endif