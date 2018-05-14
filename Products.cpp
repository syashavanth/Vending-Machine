/*
 * Factory Design Pattern used for products.
 * Abstract class with one static function which helps create the appropriate object. 
 */

#include "Products.h"
#include "ItemCandy.h"
#include "ItemSnack.h"
#include "ItemNuts.h"
#include "ItemCoke.h"
#include "ItemPepsi.h"
#include "ItemGingerale.h"

using namespace std;
Products::Products() {
}

Products::Products(const Products& orig) {
}

Products::~Products() {
}

Products* Products::createObject(item_types t,int n)
{    
    switch(t)
    {
        case 1: return new ItemCandy(n);
                
        case 2: return new ItemSnack(n);
        
        case 3: return new ItemNuts(n);
        
        case 4: return new ItemCoke(n);
        
        case 5: return new ItemPepsi(n);
        
        case 6: return new ItemGingerale(n);

    }
}
