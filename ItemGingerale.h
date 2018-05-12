/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemGingerale.h
 * Author: vardh
 *
 * Created on May 12, 2018, 2:15 AM
 */

#ifndef ITEMGINGERALE_H
#define ITEMGINGERALE_H
#include "Products.h"


class ItemGingerale : public Products {
public:
    ItemGingerale(int = 1,float = 0.35f);
    void printDetails();
    virtual ~ItemGingerale();
private:

};

#endif /* ITEMGINGERALE_H */

