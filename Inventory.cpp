#include "Inventory.h"

Inventory::Inventory(){
    this->arraySize = 2;
    this->items = new Item[2];
    this->numOfItems = 0;
}

Inventory::~Inventory(){
    delete[] this->items;
}

bool Inventory::addItem(Item item){
    // check if array is large enough
    if(this->numOfItems >= this->arraySize){
        // create a new array that is twice as big
        // copy over existing array
        // delete old array
    }

    this->items[this->numOfItems] = item;
    this->numOfItems += 1;
}
        
bool Inventory::removeItem(string id){
    this->numOfItems -= 1;
}
        
bool Inventory::hasItem(string id);