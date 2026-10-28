#include <iostream>
#ifndef ITEM_H
#define ITEM_H
using namespace std;

class Item {
    private:
        string id;
        string name;
    public:
        Item(string id = "*", string name = "empty space");
        string getID();
        string getName();
        void setID(string id);
        void setName(string name);
};
#endif