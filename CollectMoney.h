#ifndef COLLECTMONEY_H
#define COLLECTMONEY_H
#include "MachineState.h"
#include "Machine.h"
class Machine;
  

class CollectMoney : public MachineState {
public:
   
    Machine* vm;
    CollectMoney(Machine*);   
    void displayMsg();
    void getMoney();
    void chooseItem();
    void dispense();
    
    virtual ~CollectMoney();

private:

};

#endif /* COLLECTMONEY_H */

