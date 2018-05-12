/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemSnack.cpp
 * Author: vardh
 * 
 * Created on May 12, 2018, 1:09 AM
 */

#include "ItemSnack.h"
#include "iostream"
#include "String.h"
using namespace std;

ItemSnack::ItemSnack(int n,float v){
    strcpy(name,"Snack");
    value =v;
    no_items = n;
}
void ItemSnack::printDetails()
{
    cout<<"Snacks are Healthy!";
}
ItemSnack::~ItemSnack() {
}

