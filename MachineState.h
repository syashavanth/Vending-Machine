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
    
    virtual void displayMsg()=0;
    virtual void getMoney()=0;
    virtual void chooseItem()=0;
    virtual void dispense()=0;
    
    virtual ~MachineState();
private:

};

#endif /* MACHINESTATE_H */

