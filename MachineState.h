/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MachineState.h
 * Author: vardh
 *
 * Created on May 12, 2018, 2:02 PM
 */

#ifndef MACHINESTATE_H
#define MACHINESTATE_H
#include "Products.h"

class MachineState {
public:
    MachineState();
    virtual void displayOptions()=0;
    virtual float collectMoney()=0;
    virtual item_types chooseItem()=0;
    virtual void displayStatus()=0;
    
    virtual ~MachineState();
private:

};

#endif /* MACHINESTATE_H */

