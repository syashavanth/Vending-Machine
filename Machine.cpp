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
#define MAX_CAPACITY 60

using namespace std;

Machine::Machine() {
}

Machine::Machine(const Machine& orig) {
}

void Machine::refill()
{
    int ch;
    cout<<"Select the number of the item you wish to refill:"<<endl;
    cout<<"1. Candy";
    cin>>ch;
    
    item_types i = static_cast<item_types>(ch);
            
    if(items.find(i)!=items.end())
    {
        cout<<"Number of items present = ";
        Products* v = items.at(i);
        cout<<v->value;
    }
    else 
    {
        switch(ch)
        {
            case 1: cout<<"adding new item";
                    Products* p = Products::createObject(i);
                    pair<item_types,Products*> item(i,p);
                    items.insert(item);
        }
    }
}
Machine::~Machine() {
}

