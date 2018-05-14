/*
 * Represents a state where item is selected but not available. 
 * 
 * Functionalities:
 * -----------------------
 * 1. Displays the error message and changes state to "selectItem".
 * 2. Also has the option to refill for the admin. 
 */

#include "OutofStock.h"
#include "iostream"
using namespace std;

OutofStock::OutofStock(Machine* m) {
    vm=m;
    //cout<<"OutofStock state"<<endl;
}

void OutofStock :: displayMsg()
{
    if(!vm->item_present)
    {
        cout<<"Sorry! we are out of "<<vm->selected<<endl;
    }
    vm->VMstate=vm->selectingItem;
}

void OutofStock :: getMoney()
{
    //NOP
}

/*
 * Used to call refill. 
 */
void OutofStock :: chooseItem()
{
    vm->checkPassword();
    vm->refill();   
    vm->VMstate = vm->selectingItem;
}

void OutofStock :: dispense()
{
    //NOP
}

OutofStock::~OutofStock() {
}

