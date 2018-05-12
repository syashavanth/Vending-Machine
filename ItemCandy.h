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
#include "String.h"

using namespace std;

class ItemCandy : public Products 
{
public:
    ItemCandy(int = 1,float = 0.5f);
    
    virtual ~ItemCandy();
    bool setName();
    //bool setValue();
    
private:

};

#endif /* CANDY_H */

