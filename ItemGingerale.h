#ifndef ITEMGINGERALE_H
#define ITEMGINGERALE_H
#include "Products.h"


class ItemGingerale : public Products {
public:
    ItemGingerale(int = 1,float = 0.45f);
    void printDetails();
    virtual ~ItemGingerale();
private:

};

#endif /* ITEMGINGERALE_H */

