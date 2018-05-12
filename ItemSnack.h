/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemSnack.h
 * Author: vardh
 *
 * Created on May 12, 2018, 1:09 AM
 */

#ifndef ITEMSNACK_H
#define ITEMSNACK_H
#include "Products.h"

class ItemSnack :public Products{
public:
    
    ItemSnack(int = 1,float = 0.5f);
    
    void printDetails();
    virtual ~ItemSnack();
private:

};

#endif /* ITEMSNACK_H */

