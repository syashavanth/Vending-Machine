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
#define MAX_CAPACITY 60
#include "Products.h"
#include <map>

using namespace std;

class Machine {
public:
    Machine();
    Machine(const Machine& orig);
    
    map<item_types, Products*> items;
    
    void refill();
    
    virtual ~Machine();
    
private:
    int num_of_items;
    

};

#endif /* MACHINE_H */

