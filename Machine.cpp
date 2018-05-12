/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Machine.cpp
 * Author: vardh
 * 
 * Created on May 10, 2018, 6:31 PM
 */

#include "Machine.h"
#include "Products.h"
#include "iostream"
#define MAX_CAPACITY 10

using namespace std;

Machine::Machine() {
    num_of_items = 0;
}

Machine::Machine(const Machine& orig) {
}

void Machine::refill()
{
    int ch;
    int no_items;
    do
    {
        cout<<"Select the item you wish to refill:"<<endl;
        cout<<"1. Candy"<<endl;
        cout<<"2. Snack"<<endl;
        cout<<"3. Nuts"<<endl;
        cout<<"4. Coke"<<endl;
        cout<<"5. Pepsi"<<endl;
        cout<<"6. Gingerale"<<endl;
        cout<<"7. Exit"<<endl;
        cin>>ch;

        if(ch>NUM_ITEMS)
        {
            cout<<"Wrong selection"<<endl;
            continue;
        }
        if(ch==NUM_ITEMS)
        {
            cout<<"Exiting"<<endl;
            return;
        }
        
        item_types i = static_cast<item_types>(ch);

        cout<<"How many "<<i<<" would you like to add?"<<endl;
        cin>>no_items;
        
        if(no_items>10)
        {
             cout<<"Overflow. Can't add "<<no_items<<endl;
             continue;
        }
        if(no_items<=0)
        {
            cout<<"Invalid number of items "<<endl;
            continue;
        }
                
        if(items.find(i)!=items.end())
        {
            cout<<"Number of items present = ";
            Products* v = items.at(i);
            cout<<v->no_items;
            
            if((no_items+v->no_items)> MAX_CAPACITY)
            {
                cout<<"Overflow. Can't add "<<no_items<<endl;
                continue;
            }
            else
            {
                v->no_items+=no_items;
            }         
        }
        else 
        {
            cout<<"Adding new item"<<endl;
            Products* p = Products::createObject(i,no_items);

            pair<item_types,Products*> item(i,p);
            items.insert(item);
            /*switch(ch)
            {
                case 1: {
                        cout<<"Adding new item"<<endl;
                        Products* p = Products::createObject(i,no_items);
                        
                        pair<item_types,Products*> item(i,p);
                        items.insert(item);
                        break;
                        }
                //case 2: break;
                
                //case 3: break;
                
                //case 4: break;
                
                //case 5: break;
                
                //case 6: break;
                        
                case 7: cout<<"Exiting"<<endl;
                        return;
            }*/
        }
    }while(true);
}
Machine::~Machine() {
}

