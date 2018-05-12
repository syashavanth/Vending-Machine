/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemNuts.h
 * Author: vardh
 *
 * Created on May 12, 2018, 1:36 AM
 */

#ifndef ITEMNUTS_H
#define ITEMNUTS_H
#include "Products.h"


class ItemNuts : public Products{
public:
    ItemNuts(int = 1,float = 0.9f);
    void printDetails();
    virtual ~ItemNuts();
private:

};

#endif /* ITEMNUTS_H */

