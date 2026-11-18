// The Inventory can add an item, remove an item by its id, and say whether it holds one. It releases its array in its destructor, and it's never copied: pass it by reference.
#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include "Item.h"
using namespace std;

class Inventory {
    private:
        Item ** items;
        int numOfItems;
        int arraySize;
    public:
        bool addItem(Item * item);
        bool removeItem(char id);
        bool hasItem(char id);
        Inventory(); // allocate space for 2 items initially
        ~Inventory(); // deallocate items array
        string printInventory();
};
#endif