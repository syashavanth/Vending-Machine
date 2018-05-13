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

void CollectMoney :: displayMsg()
{
    cout<<"Money options:"<<endl;
    cout<<"You may pay in [P]ennies, [N]ickels, [D]imes, [Q]uarters, [1$] Dollar bills and [2$] Two dollar bills or [X] to Cancel and get a refund."<<endl;
    getMoney();
}

void CollectMoney :: getMoney()
{
    
    float mon=0.0f, cost;
    char c[3];
    cin>>c;
    
    c[0] = isalpha(c[0])?toupper(c[0]):c[0];
    
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
                  
        case 'X':{
                    vm->item_present = false;
                    vm->cancelled = true;
                    vm->VMstate = vm->dispensingItem;
                    return;
                 }
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
    }
}

void CollectMoney :: chooseItem()
{
    cout<<"item chosen";
    
}

void CollectMoney :: dispense()
{
    cout<<"Money collected";
}







