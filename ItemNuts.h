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

