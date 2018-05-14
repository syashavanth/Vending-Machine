
#ifndef PRODUCTS_H
#define PRODUCTS_H

enum item_types {
    Candy=1, Snack, Nuts, cOke, Pepsi, Gingerale, NUM_ITEMS
};
class Products {
public:
    Products();
    Products(const Products& orig);
    
    char name[10];
    float value;
    int no_items;
    
    virtual void printDetails()=0;
    
    static Products* createObject(item_types,int);
    
    virtual ~Products();
private:

};

#endif /* PRODUCTS_H */

