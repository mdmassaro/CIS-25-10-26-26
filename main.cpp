#include <iostream>
#include "Room.h"
#include "Player.h"
using namespace std;

// When the program starts, it asks the user how big the map should be: a number of rows and a number of columns.
// q quits. It's fine for the user to press Enter after each key

int main() {

    bool isRunning = true;
    char keyGrab;

    Player player;
    Room room(10, 10, &player);

    while(isRunning) {

        room.draw();

        cout << endl << endl << "Please use the wasd keys to move or press q to quit: ";
        cin >> keyGrab;

        if(keyGrab == 'q') { 
            isRunning = false; 
        } else {
            player.move(keyGrab, &room);
        }
    }

    
    return 0;
}