// The map has a wall of # characters all the way around its edge. More # characters are distributed around the inside of the map, and they act as walls too
// The @ starts on an open space. After each move, the program draws the whole map again with the @ in its new place
// A Room class holds the map. The map's size isn't known until the program runs, so the Room allocates the map with new and releases it in its destructor.
// The Room can draw itself, with the @ at the player's position
#ifndef ROOM_H
#define ROOM_H
#include "Player.h"

class Room {
    private:
        Player * player;
        // holder for the map, maybe char[]
        // char* mapRow1;
        // char* mapRow2;

        // address1 -> [#, #, #, #, #, #]
        // address2 -> [#,  ,  ,  ,  , #]
        // address3 -> [#,  , @,  ,  , #]

        // address0 -> [address1, address2, address3]

        int width;
        int height;
        char ** mapRows;
        
    public:
        Room(int x, int y, Player * player); // allocate the map
        ~Room(); // deallocate the map
        void draw(); // room draws itself
        // char tileAt(int x, int y);
        bool canMove(int x, int y);
};
#endif