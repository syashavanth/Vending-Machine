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

using namespace std;

ItemCandy::ItemCandy() {
    strcpy(name,"Candy");
    value =0.5f;
}

ItemCandy::ItemCandy(char* n, float val)
{
   
}

bool ItemCandy::setName()
{
    strcpy(name,"Candy");
    value = 0.5f;
}
ItemCandy::~ItemCandy() {
}
