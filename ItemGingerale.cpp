/*
 * Gingerale class inherits from Products. 
 */

#include "ItemGingerale.h"
#include "String.h"
#include "iostream"
using namespace std;

ItemGingerale::ItemGingerale(int n, float v) 
{ 
    strcpy(name,"Ginger-Ale");
    value = v;
    no_items = n;
}

void ItemGingerale :: printDetails()
{
    cout<<endl;
    cout<<" __________________________________"<<endl;
    cout<<"(            Ginger-Ale            )"<<endl;
    cout<<"(     The healthier soft-drink!    )"<<endl;
    cout<<"(__________________________________)"<<endl;
    cout<<endl;
}

ItemGingerale::~ItemGingerale() {
}

