/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DispenseItem.cpp
 * Author: vardh
 * 
 * Created on May 12, 2018, 7:11 PM
 */

#include "DispenseItem.h"
#include "iostream"
using namespace std;

DispenseItem::DispenseItem(Machine* m) {
    vm=m;
    cout<<"Initialized dispense item state"<<endl;
}

void DispenseItem::displayOptions()
{
    if(vm->cancelled)
    {
        cout<<"Canceled. Please collect your refund."<<endl;  
    }
    else
    {
        cout<<"Please collect your item and change"<<endl;
    }
    displayStatus();
}

float DispenseItem:: getMoney()
{
    
}

void DispenseItem:: chooseItem()
{
    
}

void DispenseItem::displayStatus()
{
   
    if(vm->cancelled==false)
        giveItem();
    
    giveChange();
    
    vm->VMstate = vm->selectingItem;
    vm->cancelled = false;
    
}

void DispenseItem :: giveItem()
{
    Products *p = vm->items.at(vm->selected);
    
    p->no_items--;
    cout<<"Item "<<vm->selected<<" dispensed."<<endl;
}

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

DispenseItem::~DispenseItem() {
}

