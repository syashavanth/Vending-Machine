/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DispenseItem.h
 * Author: vardh
 *
 * Created on May 12, 2018, 7:11 PM
 */

#ifndef DISPENSEITEM_H
#define DISPENSEITEM_H

#include "MachineState.h"
#include "Machine.h"

class Machine;

class DispenseItem : public MachineState {
public:
    Machine* vm;
    
    DispenseItem(Machine*);
    
    void displayOptions();
    float getMoney();
    void chooseItem();
    void displayStatus();
    
    void giveItem();
    void giveChange();
    
    virtual ~DispenseItem();
private:

};

#endif /* DISPENSEITEM_H */

