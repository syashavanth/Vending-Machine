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

