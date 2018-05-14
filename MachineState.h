/*
 * Interface that represents states. 
 * 
 * Contains 4 functions which are overridden in the inherited classes. 
 * 
 */
#ifndef MACHINESTATE_H
#define MACHINESTATE_H
#include "Products.h"

class MachineState {
public:
    MachineState();
    
    virtual void displayMsg()=0;
    virtual void getMoney()=0;
    virtual void chooseItem()=0;
    virtual void dispense()=0;
    
    virtual ~MachineState();
private:

};

#endif /* MACHINESTATE_H */

