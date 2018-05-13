/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OutofStock.h
 * Author: vardh
 *
 * Created on May 12, 2018, 8:35 PM
 */

#ifndef OUTOFSTOCK_H
#define OUTOFSTOCK_H

#include "MachineState.h"
#include "Machine.h"

class Machine;

class OutofStock :public MachineState{
public:
    Machine* vm;
    
    OutofStock(Machine*);
    
    void displayMsg();
    void getMoney();
    void chooseItem();
    void dispense();
    
    virtual ~OutofStock();
private:

};

#endif /* OUTOFSTOCK_H */

