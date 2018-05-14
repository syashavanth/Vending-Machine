
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

