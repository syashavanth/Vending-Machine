/*
 * Coke class inherits from Products. 
 */

#include "ItemCoke.h"
#include "String.h"
#include "iostream"
using namespace std;

ItemCoke::ItemCoke(int n, float v) 
{ 
    strcpy(name,"Coke");
    value = v;
    no_items = n;
}

void ItemCoke :: printDetails()
{
    cout<<endl;
    cout<<" __________________________"<<endl;
    cout<<"(           Coke           )"<<endl;
    cout<<"(     Taste the Feeling    )"<<endl;
    cout<<"(__________________________)"<<endl;
    cout<<endl;
}
ItemCoke::~ItemCoke() {
}

