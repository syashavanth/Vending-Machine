/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemPepsi.cpp
 * Author: vardh
 * 
 * Created on May 12, 2018, 2:11 AM
 */

#include "ItemPepsi.h"
#include "String.h"
#include "iostream"
using namespace std;


ItemPepsi::ItemPepsi(int n, float v) 
{ 
    strcpy(name,"Coke");
    value = v;
    no_items = n;
}

void ItemPepsi :: printDetails()
{
    cout<<"Taste the Difference!"<<endl;
}

ItemPepsi::~ItemPepsi() {
}

