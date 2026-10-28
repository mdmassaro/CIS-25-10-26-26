#ifndef PLAYER_H
#define PLAYER_H

// w moves up, a left, s down, and d right. The @ never moves onto a #: if the next space is a wall, it stays where it is
// A Player class holds the player's position. Its move member function takes a key and the room, and moves the player only if the space in that direction isn't a wall.

class Room;

class Player {
    private:
        int x;
        int y;

    public:
        Player();
        ~Player();
        bool move(char direction, Room* room); // need to get rid of room
        int getX();
        int getY();
        // need a way to associate room with player

};
#endif