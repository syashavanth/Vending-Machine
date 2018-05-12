/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemCoke.h
 * Author: vardh
 *
 * Created on May 12, 2018, 2:03 AM
 */

#ifndef ITEMCOKE_H
#define ITEMCOKE_H
#include "Products.h"


class ItemCoke : public Products{
public:
    ItemCoke(int = 1,float = 0.25f);
    void printDetails();
    virtual ~ItemCoke();
private:

};

#endif /* ITEMCOKE_H */

