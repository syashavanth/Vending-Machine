/*
 * Snack class inherits from products.
 */

#include "ItemSnack.h"
#include "iostream"
#include "String.h"
using namespace std;

ItemSnack::ItemSnack(int n,float v){
    strcpy(name,"Snack");
    value =v;
    no_items = n;
}
void ItemSnack::printDetails()
{
    cout<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"\\\\           Snack            //"<<endl;
    cout<<"//         A Bite to eat      \\\\"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<endl;
}
ItemSnack::~ItemSnack() {
}

