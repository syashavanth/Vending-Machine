/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SelectItem.h
 * Author: vardh
 *
 * Created on May 12, 2018, 5:40 PM
 */

#ifndef SELECTITEM_H
#define SELECTITEM_H
#include "MachineState.h"
#include "Machine.h"

class Machine;

class SelectItem : public MachineState {
public:
    Machine* vm;
    
    SelectItem(Machine*);
    
    void displayOptions();
    float getMoney();
    item_types chooseItem();
    void displayStatus();
    
    virtual ~SelectItem();
private:

};

#endif /* SELECTITEM_H */

