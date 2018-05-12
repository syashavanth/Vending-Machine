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

SelectItem::SelectItem() {
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

item_types SelectItem :: chooseItem()
{
    
}

void SelectItem :: displayStatus()
{
    
}

SelectItem::~SelectItem() {
}

