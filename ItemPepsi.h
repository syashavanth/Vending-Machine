/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemPepsi.h
 * Author: vardh
 *
 * Created on May 12, 2018, 2:11 AM
 */

#ifndef ITEMPEPSI_H
#define ITEMPEPSI_H
#include "Products.h"


class ItemPepsi : public Products {
public:
    ItemPepsi(int = 1,float = 0.35f);
    void printDetails();
    virtual ~ItemPepsi();
private:

};

#endif /* ITEMPEPSI_H */

