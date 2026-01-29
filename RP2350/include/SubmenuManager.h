#pragma once
#include <cstdint>
#include "Log.h"

enum SubMenu {
    MAIN,
    TOP9,
    TOP9_SPECIFIC,
    FROM_TO,
    FROM_TO_SPECIFIC,
    FROM_TO_SHOW,
    SPECIFIC_INPUT,
    SPECIFIC_RESULT,
    SPECIFIC_SHOW
};

class SubmenuManager {
private:
    SubMenu _currentMenu;
    uint8_t _currentIndex;
    uint8_t _listIndex;

public:
    SubmenuManager(SubMenu startMenu) : _currentMenu(startMenu), _currentIndex(1), _listIndex(1) {}

    SubMenu getCurrentMenu() const { return _currentMenu; }
    uint8_t getCurrentIndex() const { return _currentIndex; }
    
    uint8_t getSelectedListIndex() const { 
        if (_currentMenu == TOP9_SPECIFIC || _currentMenu == SPECIFIC_SHOW || _currentMenu == FROM_TO_SHOW) {
            return _listIndex;
        }
        return _currentIndex; 
    }

    void handleNavigation(bool up, bool down) {
        if (_currentMenu == TOP9_SPECIFIC || _currentMenu == SPECIFIC_SHOW || _currentMenu == FROM_TO_SHOW) {
            return; 
        }

        uint8_t maxItems = 3;

        if (_currentMenu == TOP9 || _currentMenu == SPECIFIC_RESULT || _currentMenu == FROM_TO_SPECIFIC) {
            maxItems = 9; 
        } 

        if (up) {
            if (_currentIndex > 1) _currentIndex--;
            else _currentIndex = maxItems;
        }
        if (down) {
            if (_currentIndex < maxItems) _currentIndex++;
            else _currentIndex = 1;
        }
    }

    void handleHorizontal(bool left, bool right) {
        if (_currentMenu == TOP9_SPECIFIC || _currentMenu == SPECIFIC_SHOW || _currentMenu == FROM_TO_SHOW) {
            uint8_t maxItems = 4; 
            
            if (left) {
                if (_currentIndex > 1) _currentIndex--;
                else _currentIndex = maxItems;
            }
            if (right) {
                if (_currentIndex < maxItems) _currentIndex++;
                else _currentIndex = 1;
            }
        }
    }

    void handleSelect() {
        switch (_currentMenu) {
            case MAIN:
                if (_currentIndex == 1) _currentMenu = TOP9;
                else if (_currentIndex == 2) _currentMenu = FROM_TO;
                else if (_currentIndex == 3) _currentMenu = SPECIFIC_INPUT;
                
                if (_currentMenu != MAIN) _currentIndex = 1; 
                break;

            case TOP9:
                _listIndex = _currentIndex; 
                _currentMenu = TOP9_SPECIFIC;
                _currentIndex = 1; 
                break;

            case FROM_TO:
                _currentMenu = FROM_TO_SPECIFIC;
                _currentIndex = 1;
                break;
            
            case FROM_TO_SPECIFIC:
                _listIndex = _currentIndex;
                _currentMenu = FROM_TO_SHOW;
                _currentIndex = 1;
                break;

            case SPECIFIC_INPUT:
                _currentMenu = SPECIFIC_RESULT;
                _currentIndex = 1;
                break;

            case SPECIFIC_RESULT:
                _listIndex = _currentIndex;
                _currentMenu = SPECIFIC_SHOW;
                _currentIndex = 1;
                break;

            default:
                break;
        }
        logFmt("Nav: Select pressed -> New Menu: %d", _currentMenu);
    }

    void handleBack() {
        switch (_currentMenu) {
            case TOP9:
            case FROM_TO:
            case SPECIFIC_INPUT:
                _currentMenu = MAIN;
                _currentIndex = 1;
                break;

            case TOP9_SPECIFIC:
                _currentMenu = TOP9;
                _currentIndex = _listIndex;
                break;

            case FROM_TO_SPECIFIC:
                _currentMenu = FROM_TO;
                _currentIndex = 1; 
                break;
            
            case FROM_TO_SHOW:
                _currentMenu = FROM_TO_SPECIFIC;
                _currentIndex = _listIndex;
                break;

            case SPECIFIC_RESULT:
                _currentMenu = SPECIFIC_INPUT;
                _currentIndex = 1;
                break;

            case SPECIFIC_SHOW:
                _currentMenu = SPECIFIC_RESULT;
                _currentIndex = _listIndex;
                break;

            default:
                break;
        }
        logFmt("Nav: Back pressed -> New Menu: %d", _currentMenu);
    }
};