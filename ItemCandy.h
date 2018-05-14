#ifndef CANDY_H
#define CANDY_H
#include "Products.h"
#include "String.h"

using namespace std;

class ItemCandy : public Products 
{
public:
    ItemCandy(int = 1,float = 0.1f);
    
    virtual ~ItemCandy();
    void printDetails();
    //bool setValue();
    
private:

};

#endif /* CANDY_H */

