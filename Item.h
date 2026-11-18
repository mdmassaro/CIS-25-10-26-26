#ifndef ITEM_H
#define ITEM_H
#include <iostream>
using namespace std;

class Item {
    private:
        char id;
        string name;
    public:
        Item(char id = '*', string name = "empty space");
        char getID();
        string getName();
        void setID(char id);
        void setName(string name);
        static string getNameFromId(char id);
};
#endif