#include "Item.h"

Item::Item(string id, string name): id(id), name(name){}
        
string Item::getID(){ return this->id; }
       

string Item::getName(){ return this->name; }

void Item::setID(string id): id(id){}

void Item::setName(string name): name(name){}