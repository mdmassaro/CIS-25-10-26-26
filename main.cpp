#include <iostream>
#include "Room.h"
#include "Player.h"
#include "Item.h"
#include "Inventory.h"
using namespace std;

// When the program starts, it asks the user how big the map should be: a number of rows and a number of columns.
// q quits. It's fine for the user to press Enter after each key

int main() {

    bool isRunning = true;
    char keyGrab;
    int width, height;

    Player player;

    Item key('k', "key");

    cout << "Enter width for map: ";
    cin >> width;
    cout << "Enter height for map: ";
    cin >> height;

    Room room(width, height, &player);
    room.placeItem(&key, 2, 2);

    while(isRunning) {

        room.draw();
        cout << player.printInventory();

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