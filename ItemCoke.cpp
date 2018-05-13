/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemCoke.cpp
 * Author: vardh
 * 
 * Created on May 12, 2018, 2:03 AM
 */

#include "ItemCoke.h"
#include "String.h"
#include "iostream"
using namespace std;

ItemCoke::ItemCoke(int n, float v) 
{ 
    strcpy(name,"Coke");
    value = v;
    no_items = n;
}

void ItemCoke :: printDetails()
{
    cout<<endl;
    cout<<" __________________________"<<endl;
    cout<<"(           Coke           )"<<endl;
    cout<<"(     Taste the Feeling    )"<<endl;
    cout<<"(__________________________)"<<endl;
    cout<<endl;
}
ItemCoke::~ItemCoke() {
}

