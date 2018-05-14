/*
 * Represents the 1st state of the vending machine. 
 * It is also the Idle state of the vending machine. 
 * 
 * When no item is selected and no money is inserted, Vending Machine is in this state. 
 * 
 * Functionalities:
 * -----------------------
 * 1. Displays a static menu from which the user can choose an item.
 * 2. Records the selection.
 * 3. If item is present, moves to "collectMoney" state. 
 * 4. else, Moves to "out of stock" state. 
 * 5. Also has a hidden option for admins to chose, incase of a refill needed. 
 * 
 */

#include "SelectItem.h"
#include "iostream"
#include <map>
#include <stdlib.h>
using namespace std;

SelectItem::SelectItem(Machine* m) {
    vm=m;
}

/*
 * Displays the menu. 
 */
void SelectItem :: displayMsg()
{
    //system("clear");
    cout<<"############################################"<<endl;
    cout<<"#     Select the item you wish to buy:     #"<<endl;
    cout<<"#     1. Candy           $0.10             #"<<endl;
    cout<<"#     2. Snack           $0.50             #"<<endl;
    cout<<"#     3. Nuts            $0.90             #"<<endl;
    cout<<"#     4. Coke            $0.25             #"<<endl;
    cout<<"#     5. Pepsi           $0.35             #"<<endl;
    cout<<"#     6. Ginger-ale      $0.45             #"<<endl;
    cout<<"############################################"<<endl;
    
    chooseItem();
}

/*
 * Records the selection and changes state. 
 */
void SelectItem :: chooseItem()
{
    int ch;
    cin>>ch;
    
    if(ch==0)//Super secret admin option
    {
        vm->VMstate = vm->noItems;
        vm->VMstate->chooseItem();
        return;
    }
    
    if(ch<0 || ch>=NUM_ITEMS)
    {
        cout<<"Invalid selection"<<endl;
        return;
    }
    
    item_types i = static_cast<item_types>(ch);
    cout<<"requested item = ";
    cout<<i<<endl;
    vm->selected = i;
    
    
    if(vm->items.find(i)==vm->items.end()||vm->items.at(i)->no_items<=0)
    {
        vm->item_present = false;
        vm->VMstate = vm->noItems;
    }
    else
    {
        vm->item_present = true;
        vm->VMstate=vm->collectingMoney;
    }
   
}

void SelectItem::getMoney(){ 
 //NOP   
};

void SelectItem::dispense(){
 //NOP   
};

SelectItem::~SelectItem() {
}

