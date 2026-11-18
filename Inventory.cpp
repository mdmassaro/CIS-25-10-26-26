#include "Inventory.h"

Inventory::Inventory(){
    this->arraySize = 2;
    this->items = new Item*[this->arraySize];
    this->numOfItems = 0;
}

Inventory::~Inventory(){
    for(int i = 0; i < this->numOfItems; i++){
        delete this->items[i];
    }

    delete[] this->items;
}

bool Inventory::addItem(Item * item){
    // check if array is large enough
    if(this->numOfItems >= this->arraySize){
        // create a new array that is twice as big
        Item ** newArray = new Item*[this->arraySize * 2];
        // copy over existing array
        for(int i = 0; i < this->arraySize; i++){
            newArray[i] = this->items[i];
        }

        // delete old array
        delete[] items;
        this->items = newArray;
        this->arraySize *= 2;
    }

    // add item to inventory array
    this->items[this->numOfItems] = item;
    this->numOfItems += 1;
    return true;
}
        
bool Inventory::removeItem(char id){
    bool del = false;
    for(int i = 0; i < numOfItems; i++){
        if(this->items[i]->getID() == id)
        delete this->items[i];
        this->items[i] = nullptr;
        del = true;

        if(del == true){
            this->items[i-1] = this->items[i];
        }
    }

    if(del == true){ this->numOfItems -= 1; }

    return true;
}
        
bool Inventory::hasItem(char id){}

string Inventory::printInventory(){
    for(int i = 0; i < numOfItems; i++){
        cout << this->items[i]->getID();
    }
}