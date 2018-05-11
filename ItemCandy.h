/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Candy.h
 * Author: vardh
 *
 * Created on May 10, 2018, 9:10 PM
 */

#ifndef CANDY_H
#define CANDY_H
#include "Products.h"

class ItemCandy : public Products 
{
public:
    ItemCandy();
    ItemCandy(char* n, float val);
    virtual ~ItemCandy();
    bool setName();
    //bool setValue();
private:

};

#endif /* CANDY_H */

