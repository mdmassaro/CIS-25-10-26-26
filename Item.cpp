#include "Item.h"

Item::Item(char id, string name): id(id), name(name){}
        
char Item::getID(){ return this->id; }
       
string Item::getName(){ return this->name; }

void Item::setID(char id){ this->id = id; }

void Item::setName(string name){ this->name = name; }

static string Item::getNameFromId(char i){
    if(i == 'k'){
        return "key";
    }
    else {
        return "N/A"; // would like to through error
    }
}