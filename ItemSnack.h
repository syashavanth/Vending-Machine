
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

