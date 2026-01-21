#ifndef SUBMENUMANGER_H
#define SUBMENUMANGER_H

enum SubMenu {
    MAIN,
    TOP9,
    TOP9_SPECIFIC,
    FROM_TO,
    FROM_TO_SPECIFIC,
    SPECIFIC_INPUT,
    SPECIFIC_INFO
};

class SubmenuManager
{
private:
    SubMenu _subMenu;
    uint8_t _currentIndex;
    uint8_t _selectedListIndex;

    const uint8_t MAX_SUBPAGES = 4; 

    uint8_t getMaxItemsForMenu(SubMenu menu) const {
        switch (menu) {
            case MAIN: return 3;
            case TOP9: return 9; 
            default: return 1;
        }
    }

public:
    SubmenuManager(SubMenu startMenu) : _subMenu(startMenu), _currentIndex(1), _selectedListIndex(0) {}

    void handleNavigation(bool up, bool down) {
        if (_subMenu == TOP9_SPECIFIC) return; 

        uint8_t maxItems = getMaxItemsForMenu(_subMenu);
        
        if (down) {
            if (_currentIndex < maxItems) {
                _currentIndex++;
            }
        }
        if (up) {
            if (_currentIndex > 1) {
                _currentIndex--;
            }
        }
    }

    void handleHorizontal(bool left, bool right) {
        if (_subMenu == TOP9_SPECIFIC) {
            if (right && _currentIndex < MAX_SUBPAGES) {
                _currentIndex++;
            }
            if (left && _currentIndex > 1) {
                _currentIndex--;
            }
        }
    }

    void handleSelect() {
        switch (_subMenu) {
            case MAIN:
                switch (_currentIndex) {
                    case 1: _subMenu = TOP9; break;
                    case 2: _subMenu = FROM_TO; break;
                    case 3: _subMenu = SPECIFIC_INPUT; break;
                    default: break;
                }
                if (_subMenu != MAIN) _currentIndex = 1; 
                break;
            
            case TOP9:
                _selectedListIndex = _currentIndex;
                _subMenu = TOP9_SPECIFIC;
                _currentIndex = 1; 
                break;

            case TOP9_SPECIFIC:
                break; 

            default:
                break;
        }
    }

    void handleBack() {
        switch (_subMenu) {
            case MAIN:
                _currentIndex = 1;
                break;
            case TOP9:
                _subMenu = MAIN;
                _currentIndex = 1;
                break;
            case TOP9_SPECIFIC:
                _subMenu = TOP9;
                _currentIndex = _selectedListIndex;
                break;
            case FROM_TO:
                _subMenu = MAIN;
                _currentIndex = 1;
                break;
            case FROM_TO_SPECIFIC:
                _subMenu = FROM_TO;
                break;
            case SPECIFIC_INPUT:
                _subMenu = MAIN;
                _currentIndex = 1;
                break;
            case SPECIFIC_INFO:
                _subMenu = SPECIFIC_INPUT;
                break;
            default:
                _subMenu = MAIN;
                _currentIndex = 1;
                break;
        }
    }

    SubMenu getCurrentMenu() const {
        return _subMenu;
    }

    uint8_t getCurrentIndex() const {
        return _currentIndex;
    }

    uint8_t getSelectedListIndex() const {
        return _selectedListIndex;
    }
};

#endif // SUBMENUMANGER_H