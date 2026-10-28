#include <iostream>
#ifndef INVENTORY_H
#define INVENTORY_H
#include "Item.h"
using namespace std;

class Inventory {
    private:
        Item * items;
        int numOfItems;
        int arraySize;
    public:
        bool addItem(Item item);
        bool removeItem(string id);
        bool hasItem(string id);
        Inventory(); // allocate space for 2 items initially
        ~Inventory(); // deallocate items array
}