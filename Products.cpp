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
#include "ItemSnack.h"
#include "ItemNuts.h"

using namespace std;
Products::Products() {
}

Products::Products(const Products& orig) {
}

Products::~Products() {
}

Products* Products::createObject(item_types t,int n)
{
    //return new object. need a switch case here.   
    
    switch(t)
    {
        case 1: return new ItemCandy(n);
                break;
                
        case 2: return new ItemSnack(n);
        
        case 3: return new ItemNuts(n);

    }
}
