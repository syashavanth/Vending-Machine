/*
 * Candy class inherits from Products. 
 */

#include "ItemCandy.h"
#include "String.h"
#include "iostream"
#include "stdio.h"

using namespace std;

ItemCandy::ItemCandy(int n,float v){
    strcpy(name,"Candy");
    value =v;
    no_items = n;
}

void ItemCandy::printDetails()
{
    cout<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"\\\\           Candy            //"<<endl;
    cout<<"//      For the Kid in you.   \\\\"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<endl;
}


ItemCandy::~ItemCandy() {
}
