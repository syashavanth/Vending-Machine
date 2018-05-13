/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Machine.cpp
 * Author: vardh
 * 
 * Created on May 10, 2018, 6:31 PM
 */

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
    
    collectingMoney = new CollectMoney(this);
    selectingItem = new SelectItem(this);
    dispensingItem = new DispenseItem(this);
    noItems = new OutofStock(this);
    
    VMstate = selectingItem;
    
    while(true)
    {
        VMstate->displayMsg();
    }
       
}


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
            cout<<"Invalid number of items "<<endl;
            continue;
        }
                
        if(items.find(i)!=items.end())
        {
           
            Products* v = items.at(i);
            
            
            if((no_items+v->no_items)> MAX_CAPACITY)
            {
                cout<<"Overflow. Can't add "<<no_items<<endl;
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

int Machine::getPassword()
{
    return password;
}

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

