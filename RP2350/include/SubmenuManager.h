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
    u_int8_t _mainIndex = 0;
public:
    SubmenuManager(const SubMenu &subMenu) : _subMenu(subMenu){}
    void S1Pressed(const u_int8_t &index){
    switch (_subMenu)
    {
        case MAIN:
            _mainIndex = index;
            switch (index)
            {
            case 1:
                _subMenu = TOP9;
                break;
            case 2:
                _subMenu = FROM_TO;
                break;
            case 3:
                _subMenu = SPECIFIC_INPUT;
                break;
            default:
                break;
            }
            break;

        default:
            break;
        }
    }

    void S2Pressed(){
        switch (_subMenu)
        {
        case MAIN:
            _subMenu = MAIN;
            break;
        case TOP9:
            _subMenu = MAIN;
            break;
        case TOP9_SPECIFIC:
            _subMenu = TOP9;
            break;
        case FROM_TO:
            _subMenu = MAIN;
            break;
        case FROM_TO_SPECIFIC:
            _subMenu = FROM_TO;
            break;
        case SPECIFIC_INPUT:
            _subMenu = MAIN;
            break;
        case SPECIFIC_INFO:
            _subMenu = SPECIFIC_INPUT;
            break;
        default:
            break;
        }
    }
    
    SubMenu getCurrentMenu() const{
        return _subMenu;
    };

    u_int8_t getMainIndex(){
        return _mainIndex;
    }
};

#endif // SUBMENUMANGER_H