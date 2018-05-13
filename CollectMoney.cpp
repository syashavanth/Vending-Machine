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
    //cout<<"Initialized Collect"<<endl;
}

CollectMoney::~CollectMoney() {
}

void CollectMoney :: displayOptions()
{
    
    cout<<"Money options:"<<endl;
    cout<<"You may pay in [P]ennies, [N]ickels, [D]imes, [Q]uarters, [1$] Dollar bills and [2$] Two dollar bills"<<endl;
    getMoney();
}

float CollectMoney :: getMoney()
{
    float mon=0.0f, cost;
    char c[3];
    cin>>c;
    
    switch(c[0])
    {
        case 'P': mon = 0.01f;
                  break;
        
        case 'N': mon = 0.05f;
                  break;
                  
        case 'D': mon = 0.10f;
                  break;
                  
        case 'Q': mon = 0.25f;
                  break;
                  
        case '1': mon = 1.0f;
                  break;
                  
        case '2': mon = 2.0f;
                  break;
                  
        default: cout<<"unacceptable denomination"<<endl;
    }
    
    
    cost = vm->items.at(vm->selected)->value;
    vm->money += mon;
    if(vm->money >= cost)
    {
        vm->VMstate = vm->dispensingItem;
    }
    else
    {
        char c;
        cout<<"Insufficient Money. Please feed more"<<endl;
        cout<<"Press X to cancel. Anything else to continue"<<endl;
        cin>>c;
        if(c=='X'||c=='x')
        {
            vm->item_present = false;
            vm->cancelled = true;
            vm->VMstate = vm->dispensingItem;
        }
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







