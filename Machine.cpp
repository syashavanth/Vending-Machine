/*
 * Machine class: Used to drive the entire vending Machine. 
 * 
 * Properties:
 * --------------------
 * 1. Can hold up to 10 items of a kind, currently 60 items in total.
 * 2. Assume that it has enough change to dispense. 
 * 3. Password protected.
 * 
 * Functionalities:
 * --------------------
 * 1. Accepts a selection from a variety of Products.
 * 2. Accepts Money (Denominations: Pennies, Nickels, Dimes, 1$, 2$.
 * 3. Dispenses Item and Change, or and Error Message and refund in case the user wishes to cancel.
 * 4. Option to refill for an Admin. 
 * 5. Admin needs a password to be authorized. 
 * 6. Password can be changed by a admin.
 * 
 * Follows a state Design Pattern. 
 * States:
 * -------------------
 * SelectItem: No item is selected, No money is in the machine. 
 * CollectMoney: Item Selected, No Money is in the machine.
 * Dispense: Item Selected, Money inserted. 
 * noItem: Item selected, but not available. Or to refill. 
 * 
 *  */

#include "Machine.h"
#include "Products.h"
#include "iostream"

#define MAX_CAPACITY 10

using namespace std;

Machine::Machine() {
    num_of_items = 0;
    
    cout<<"Welcome!"<<endl;    
    checkPassword();
    refill();
    
    selectingItem = new SelectItem(this);
    collectingMoney = new CollectMoney(this);
    dispensingItem = new DispenseItem(this);
    noItems = new OutofStock(this);
    
    VMstate = selectingItem;
    
    while(true)
    {
        VMstate->displayMsg();
    }
       
}

/* Function that is used to refill the items in the vending machine. 
 * 
 * Two refill options:
 * 1. Refill completely. Upto 10 items per kind.
 * 2. Refill individually items. 
 * 
 * Protects against overflow. 
 */
void Machine::refill()
{
    if(admin==false)
    {
        cout<<"Admins only!"<<endl;
        return;
    }
    cout<<"Initializing the Vending Machine!"<<endl;
    int ch;
    int no_items;
    
    char full_refill;
    cout<<"Refill completely ? [y/n]"<<endl;
    cin>>full_refill;
    
    if(full_refill=='Y' || full_refill=='y')
    {
        for(int j=1; j<NUM_ITEMS; j++ )
        {
            item_types i = static_cast<item_types>(j);
            if(items.find(i)!=items.end())
            {
                Products* v = items.at(i);
                v->no_items = 10;
            }
            else
            {
                Products* p = Products::createObject(i,10);

                pair<item_types,Products*> item(i,p);
                items.insert(item);
            }
        }
        return;
    }
    
    do
    {
        cout<<"Select the item you wish to refill:"<<endl;
        cout<<"1. Candy"<<endl;
        cout<<"2. Snack"<<endl;
        cout<<"3. Nuts"<<endl;
        cout<<"4. Coke"<<endl;
        cout<<"5. Pepsi"<<endl;
        cout<<"6. Gingerale"<<endl;
        cout<<"7. Exit"<<endl;
        cin>>ch;

        if(ch>NUM_ITEMS)
        {
            cout<<"Wrong selection"<<endl;
            continue;
        }
        if(ch==NUM_ITEMS)
        {
            cout<<"Exiting"<<endl;
            return;
        }
        
        item_types i = static_cast<item_types>(ch);

        cout<<"How many "<<i<<" would you like to add?"<<endl;
        cin>>no_items;
        
        if(no_items>10)
        {
             cout<<"Overflow. Can't add "<<no_items<<endl;
             continue;
        }
        if(no_items<=0)
        {
            cout<<"Invalid number of items. Can only hold "<<MAX_CAPACITY<<" items of a kind"<<endl;
            continue;
        }
                
        if(items.find(i)!=items.end())
        {
           
            Products* v = items.at(i);
            
            
            if((no_items+v->no_items)> MAX_CAPACITY)
            {
                cout<<"Overflow. Can't add. Can only hold "<<MAX_CAPACITY<<" items of a kind"<<endl<<"The number of items already in the machine are : "<<v->no_items<<endl;
                continue;
            }
            else
            {
                v->no_items+=no_items;
                num_of_items+=no_items;
            }
            cout<<"Number of "<<v->name<<" now present = ";
            cout<<v->no_items<<endl;
        }
        else 
        {
            cout<<"Adding new item"<<endl;
            Products* p = Products::createObject(i,no_items);

            pair<item_types,Products*> item(i,p);
            items.insert(item);
            num_of_items += no_items;
        }
    }while(true);
    
    admin = false;
}

/*
 * Returns the vending machine password.
 */
int Machine::getPassword()
{
    return password;
}

/*
 * Checks the vending machine password.
 * calls the function to reset the password also.
 */
void Machine::checkPassword()
{
    int pswd;
    cout<<"Enter the Super secret 4 digit code!"<<endl;
    cin>>pswd;
    
    if(pswd==987654)
    {
        setPassword();
        cout<<"Enter the Super secret 4 digit code!"<<endl;
        cin>>pswd;
    }
    
    if(pswd==getPassword())
        admin = true;
    
}

/*
 * Resets the Password.
 */
void Machine::setPassword()
{
    checkPassword();
    
    if(admin)
    {
        cout<<"Select a new 4 digit Password that does not begin with 0."<<endl;
        cin>>password;
    }
    else
    {
        cout<<"Only Admins can change password."<<endl;
    }
    admin=false;
}

Machine::~Machine() {
}

