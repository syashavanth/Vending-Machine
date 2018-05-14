/*
 * Nuts class inherits from Products.
 */

#include "ItemNuts.h"
#include "Products.h"
#include "String.h"
#include "iostream"
using namespace std;

ItemNuts::ItemNuts(int n,float v) { 
    strcpy(name,"Nuts");
    value =v;
    no_items = n;
}
void ItemNuts::printDetails()
{
    cout<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"\\\\              Nuts              //"<<endl;
    cout<<"//      Grab fun by the handful   \\\\"<<endl;
    cout<<"--------------------------------------"<<endl<<endl;
}
ItemNuts::~ItemNuts() {
}

