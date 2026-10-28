#include "Player.h"
#include "Room.h"
using namespace std;

Player::Player(){
    this->x = 3;
    this->y = 3;

}

Player::~Player(){}

bool Player::move(char dir, Room * room){
    // take direction, chech which direction and check if they are able to move there
    // if passes then change player x and y

    if(dir == 'w'){
        // check if anything blocking new position
        if(room->canMove(this->x, this->y - 1)){
            this->y -= 1;
            return true;
        }

    } else if(dir == 'a'){
        if(room->canMove(this->x - 1, this->y)){
            this->x -= 1;
            return true;
        }

    } else if(dir == 's'){
        if(room->canMove(this->x, this->y + 1)){
            this->y += 1;
            return true;
        }
        
    }else if(dir == 'd'){
        if(room->canMove(this->x + 1, this->y)){
            this->x += 1;
            return true;
        }
    }
    
    // return false if cannot move to new location
    return false; 
}

int Player::getX(){ return this->x; }

int Player::getY(){ return this->y; }
