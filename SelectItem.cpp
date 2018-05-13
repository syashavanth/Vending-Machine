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
using namespace std;

SelectItem::SelectItem(Machine* m) {
    vm=m;
    cout<<"Initialized select state"<<endl;
}

void SelectItem :: displayOptions()
{
    cout<<"Select the item you wish to refill:"<<endl;
    cout<<"1. Candy     $0.10"<<endl;
    cout<<"2. Snack     $0.50"<<endl;
    cout<<"3. Nuts      $0.90"<<endl;
    cout<<"4. Coke      $0.25"<<endl;
    cout<<"5. Pepsi     $0.35"<<endl;
    cout<<"6. Gingerale $0.45"<<endl;
    cout<<"7. Exit"<<endl;
    
    chooseItem();
}

float SelectItem :: getMoney()
{
    
}

void SelectItem :: chooseItem()
{
    int ch;
    cin>>ch;
    
    item_types i = static_cast<item_types>(ch);
    if(vm->items.find(i)!=vm->items.end())
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

