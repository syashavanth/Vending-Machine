/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemGingerale.cpp
 * Author: vardh
 * 
 * Created on May 12, 2018, 2:15 AM
 */

#include "ItemGingerale.h"
#include "String.h"
#include "iostream"
using namespace std;

ItemGingerale::ItemGingerale(int n, float v) 
{ 
    strcpy(name,"Coke");
    value = v;
    no_items = n;
}

void ItemGingerale :: printDetails()
{
    cout<<"The healthier soft-drink!"<<endl;
}

ItemGingerale::~ItemGingerale() {
}

