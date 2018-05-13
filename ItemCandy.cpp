/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Candy.cpp
 * Author: vardh
 * 
 * Created on May 10, 2018, 9:10 PM
 */

#include "ItemCandy.h"
#include "String.h"
#include "iostream"
#include "stdio.h"

using namespace std;

ItemCandy::ItemCandy(int n,float v){
    strcpy(name,"Candy");
    value =v;
    no_items = n;
}

void ItemCandy::printDetails()
{
    cout<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"\\\\           Candy            //"<<endl;
    cout<<"//      For the Kid in you.   \\\\"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<endl;
}


ItemCandy::~ItemCandy() {
}
