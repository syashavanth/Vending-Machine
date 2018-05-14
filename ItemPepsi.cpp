/*
 * Pepsi class inherits from Products.
 */

#include "ItemPepsi.h"
#include "String.h"
#include "iostream"
using namespace std;


ItemPepsi::ItemPepsi(int n, float v) 
{ 
    strcpy(name,"Pepsi");
    value = v;
    no_items = n;
}

void ItemPepsi :: printDetails()
{
    cout<<endl;
    cout<<" _____________________________"<<endl;
    cout<<"(            Pepsi            )"<<endl;
    cout<<"(     Taste the Difference    )"<<endl;
    cout<<"(_____________________________)"<<endl;
    cout<<endl;
}

ItemPepsi::~ItemPepsi() {
}

