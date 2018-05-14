/*
 * Represents the state where selection is made and Money is inserted. 
 * 
 * Functionalities:
 * -----------------------
 * 1. Checks if the request was canceled.
 * 2. if canceled dispense the accepted money.
 * 3. Else dispenses item and change. 
 * 4. resets state to "selectItem" state.
 */

#include "DispenseItem.h"
#include "iostream"
using namespace std;

DispenseItem::DispenseItem(Machine* m) {
    vm=m;
    //cout<<"Initialized dispense item state"<<endl;
}

/*
 * Checks the cancel status and displays appropriate message.
 */
void DispenseItem::displayMsg()
{
    if(vm->cancelled)
    {
        cout<<"Canceled. Please collect your refund."<<endl;  
    }
    else
    {
        cout<<"Please collect your item and change."<<endl;
    }
    dispense();
}

/*
 * calls functions that dispense both item and change.
 * Resets state to selectitem
 */
void DispenseItem::dispense()
{
   
    if(vm->cancelled==false)
        giveItem();
    
    giveChange();
    
    vm->VMstate = vm->selectingItem;
    vm->cancelled = false;
    
}

/*
 * Dispenses item.
 */
void DispenseItem :: giveItem()
{
    Products *p = vm->items.at(vm->selected);
    
    p->no_items--;
    cout<<"Item "<<p->name<<" dispensed."<<endl;
    p->printDetails();
    
    vm->item_present = false;
}
/*
 * Dispenses change.
 */
void DispenseItem :: giveChange()
{
    Products *p = vm->items.at(vm->selected);
    float chg;
    if(vm->cancelled==false)
        chg = vm->money - p->value;
    else
        chg = vm->money;
    
    cout<<"Change "<< chg <<" dispensed"<<endl;
    vm->money = 0.0f;
}

void DispenseItem:: getMoney()
{
    //NOP
}

void DispenseItem:: chooseItem()
{
    //NOP
}

DispenseItem::~DispenseItem() {
}

