#ifndef MACHINE_H
#define MACHINE_H
#include "Products.h"
#include <map>
#include "MachineState.h"
#include "CollectMoney.h"
#include "SelectItem.h"
#include "DispenseItem.h"
#include "OutofStock.h"

using namespace std;

class Machine {
public:
    Machine();
    
    map<item_types, Products*> items;

    item_types selected;
    bool item_present=false;
    bool money_suffecient = false;
    bool admin = false;
    bool cancelled = false;
    void refill();
    float money=0.0f; 
    
    virtual ~Machine();
    
    // Represents state classes.
    MachineState* collectingMoney;
    MachineState* selectingItem;
    MachineState* dispensingItem;
    MachineState* noItems;
    MachineState* VMstate;
    
    int getPassword();
    void checkPassword();
    void setPassword();
     
private:
    int num_of_items;
    int password = 1234;
   

};

#endif /* MACHINE_H */

