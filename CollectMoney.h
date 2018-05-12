/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CollectMoney.h
 * Author: vardh
 *
 * Created on May 12, 2018, 4:33 PM
 */

#ifndef COLLECTMONEY_H
#define COLLECTMONEY_H
#include "MachineState.h"
#include "Machine.h"

class CollectMoney : public MachineState {
public:
    CollectMoney();   
    
    void displayOptions();
    float getMoney();
    item_types chooseItem();
    void displayStatus();
    
    virtual ~CollectMoney();

private:

};

#endif /* COLLECTMONEY_H */

