/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Products.h
 * Author: vardh
 *
 * Created on May 10, 2018, 8:40 PM
 */

#ifndef PRODUCTS_H
#define PRODUCTS_H

enum item_types {
    Candy=1, Snack, Nuts, cOke, Pepsi, Gingerale
};
class Products {
public:
    Products();
    Products(const Products& orig);
    
    char name[10];
    float value;
    
    virtual bool setName()=0;
    
    //virtual bool setValue()=0;
    
    static Products* createObject(item_types);
    
    virtual ~Products();
private:

};

#endif /* PRODUCTS_H */

