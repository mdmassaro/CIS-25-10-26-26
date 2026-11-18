#include "Room.h"
#include <iostream>
using namespace std;

Room::Room(int x, int y, Player * player){

    this->width = x;
    this->height = y;
    this->mapRows = new char*[y];
    this->player = player;

    // j is count of columns, i is count of rows

    for(int i = 0; i < y; i++){
        this->mapRows[i] = new char[x];
        for(int j = 0; j < x; j++){
            if(i == 0 || j == 0 || i == (y-1) || j == (x-1)){
                this->mapRows[i][j] = '#';
            }
            else if(rand() % 8 == 0 && i > 1 && i <(y-2) && j > 1 && j < (x-2)){
                this->mapRows[i][j] = '#';
            }
            else{
                this->mapRows[i][j] = ' ';
            }
        }
    }
}

Room::~Room(){}

void Room::draw(){

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            // check for player position
            if(player->getX() == j && player->getY() == i){
                cout << '@';
            }
            else { cout << this->mapRows[i][j];}
        }
        cout << endl;
    }
}

char Room::tileAt(int x, int y){
    return this->mapRows[y][x];
}

bool Room::canMove(int x, int y){
    if(mapRows[y][x] != '#'){
        return true;
    } else {
        return false;
    }
}

void Room::placeItem(Item * i, int x, int y){
    this->mapRows[y][x] = i->getID();
}

Item Room::takeItem(int x, int y){
    Item newItem(this->mapRows[y][x], Item::getNameFromId(this->mapRows[y][x]));
    this->mapRows[y][x] = ' ';
    return newItem;
}