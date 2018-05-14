
#ifndef OUTOFSTOCK_H
#define OUTOFSTOCK_H

#include "MachineState.h"
#include "Machine.h"

class Machine;

class OutofStock :public MachineState{
public:
    Machine* vm;
    
    OutofStock(Machine*);
    
    void displayMsg();
    void getMoney();
    void chooseItem();
    void dispense();
    
    virtual ~OutofStock();
private:

};

#endif /* OUTOFSTOCK_H */

