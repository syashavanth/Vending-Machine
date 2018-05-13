/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CollectMoney.cpp
 * Author: vardh
 * 
 * Created on May 12, 2018, 4:33 PM
 */

#include "CollectMoney.h"
#include "iostream"
using namespace std;

CollectMoney::CollectMoney(Machine* m){
    vm = m;
    cout<<"Initialized Collect"<<endl;
}

CollectMoney::~CollectMoney() {
}

void CollectMoney :: displayOptions()
{
    
    cout<<"Money options:"<<endl;
    cout<<"You may pay in pennies, nickles, dimes, quarters, 1$ and 2$ bills"<<endl;
    getMoney();
}

float CollectMoney :: getMoney()
{
    float mon, cost;
    cin>>mon;
    cost = vm->items.at(vm->selected)->value;
    vm->money += mon;
    if(vm->money >= cost)
    {
        vm->VMstate = vm->dispensingItem;
    }
    else
    {
        cout<<"Insuffecient Money. Please feed more"<<endl;
    }
}

void CollectMoney :: chooseItem()
{
    cout<<"item chosen";
    
}

void CollectMoney :: displayStatus()
{
    cout<<"Money collected";
}







