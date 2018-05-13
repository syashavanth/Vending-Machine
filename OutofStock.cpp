/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OutofStock.cpp
 * Author: vardh
 * 
 * Created on May 12, 2018, 8:35 PM
 */

#include "OutofStock.h"
#include "iostream"
using namespace std;

OutofStock::OutofStock(Machine* m) {
    vm=m;
    //cout<<"OutofStock state"<<endl;
}

void OutofStock :: displayOptions()
{
    cout<<"Sorry! we are out of "<<vm->selected;
    vm->VMstate=vm->selectingItem;
}

float OutofStock :: getMoney()
{
    
}

void OutofStock :: chooseItem()
{
    vm->checkPassword();
    vm->refill();
    
    vm->VMstate = vm->selectingItem;
}

void OutofStock :: displayStatus()
{
    cout<<"Sorry! we are out of "<<vm->selected;
}

OutofStock::~OutofStock() {
}

