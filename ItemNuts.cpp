/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemNuts.cpp
 * Author: vardh
 * 
 * Created on May 12, 2018, 1:36 AM
 */

#include "ItemNuts.h"
#include "Products.h"
#include "String.h"
#include "iostream"
using namespace std;

ItemNuts::ItemNuts(int n,float v) { 
    strcpy(name,"Snack");
    value =v;
    no_items = n;
}
void ItemNuts::printDetails()
{
    cout<<"Yummy Nuts!"<<endl;
}
ItemNuts::~ItemNuts() {
}

