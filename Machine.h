/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Machine.h
 * Author: vardh
 *
 * Created on May 10, 2018, 6:31 PM
 */

#ifndef MACHINE_H
#define MACHINE_H
#include "Products.h"
#include <map>
#include "MachineState.h"
#include "CollectMoney.h"
#include "SelectItem.h"
#include "DispenseItem.h"
#include "OutofStock.h"

using namespace std;

class Machine {
public:
    Machine();
    
    map<item_types, Products*> items;

    item_types selected;
    bool item_present=false;
    bool money_suffecient = false;
    bool admin = false;
    bool cancelled = false;
    void refill();
    float money=0.0f; 
    
    virtual ~Machine();
    
    MachineState* collectingMoney;
    MachineState* selectingItem;
    MachineState* dispensingItem;
    MachineState* noItems;
    MachineState* VMstate;
    
    int getPassword();
    void checkPassword();
     
private:
    int num_of_items;
    int password = 0;
   

};

#endif /* MACHINE_H */

