#ifndef DISPENSEITEM_H
#define DISPENSEITEM_H

#include "MachineState.h"
#include "Machine.h"

class Machine;

class DispenseItem : public MachineState {
public:
    Machine* vm;
    
    DispenseItem(Machine*);
    
    void displayMsg();
    void getMoney();
    void chooseItem();
    void dispense();
    
    void giveItem();
    void giveChange();
    
    virtual ~DispenseItem();
private:

};

#endif /* DISPENSEITEM_H */

