
#ifndef SELECTITEM_H
#define SELECTITEM_H
#include "MachineState.h"
#include "Machine.h"

class Machine;

class SelectItem : public MachineState {
public:
    Machine* vm;
    
    SelectItem(Machine*);
    
    void displayMsg();
    void getMoney();
    void chooseItem();
    void dispense();
    
    virtual ~SelectItem();
private:

};

#endif /* SELECTITEM_H */

