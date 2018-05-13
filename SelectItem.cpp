/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SelectItem.cpp
 * Author: vardh
 * 
 * Created on May 12, 2018, 5:40 PM
 */

#include "SelectItem.h"
#include "iostream"
#include <map>
using namespace std;

SelectItem::SelectItem(Machine* m) {
    vm=m;
    cout<<"Initialized select state"<<endl;
}

void SelectItem :: displayOptions()
{
    cout<<"Select the item you wish to buy:"<<endl;
    cout<<"1. Candy     $0.10"<<endl;
    cout<<"2. Snack     $0.50"<<endl;
    cout<<"3. Nuts      $0.90"<<endl;
    cout<<"4. Coke      $0.25"<<endl;
    cout<<"5. Pepsi     $0.35"<<endl;
    cout<<"6. Gingerale $0.45"<<endl;
    //cout<<"7. Exit"<<endl;
    
    chooseItem();
}

float SelectItem :: getMoney()
{
    
}

void SelectItem :: chooseItem()
{
    int ch;
    cin>>ch;
    
    if(ch==0)//Super secret admin option
    {
        vm->admin = true;
        vm->VMstate = vm->noItems;
        vm->VMstate->chooseItem();
        return;
    }
    
    item_types i = static_cast<item_types>(ch);
    cout<<"requested item = ";
    cout<<i<<endl;
    
    if(vm->items.find(i)==vm->items.end()||vm->items.at(i)==0)//Check the at part!!!
    {
        cout<<"Item not present"<<endl;
        vm->item_present = false;
    }
    else
    {
        vm->item_present = true;
        vm->selected = i;
        vm->VMstate=vm->collectingMoney;
    }
    vm->VMstate->displayOptions();
}

void SelectItem :: displayStatus()
{
    
}

SelectItem::~SelectItem() {
}

