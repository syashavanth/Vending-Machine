/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Products.cpp
 * Author: vardh
 * 
 * Created on May 10, 2018, 8:40 PM
 */

#include "Products.h"
#include "ItemCandy.h"

using namespace std;
Products::Products() {
}

Products::Products(const Products& orig) {
}

Products::~Products() {
}

Products* Products::createObject(item_types t)
{
    //return new object. need a switch case here.      
    switch(t)
    {
        case 1: return new ItemCandy();
                break;

    }
}
