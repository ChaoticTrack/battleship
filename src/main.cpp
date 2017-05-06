#include <iostream>

#include "../include/Board.h"
#include "../include/BSGame.h"
#include "../include/GameRule.h"
#include "../include/Graphics.h"
#include "../include/Move.h"
#include "../include/Player.h"
#include "../include/Ship.h"

int main()
{
    std::cout << "Hello." << std::endl;

    // game object with type BSGame
    BSGame game;

    Ship Battleship;
    Board Board;

    //Ship *currentShip = Board.getShipAtSquare(2, 4);
    //std::cout << "my name is " << currentShip->getName();

    Ship currentShipOne = Board.getShipAtSquare(3, 5);

    std::cout << "my name is " << currentShipOne.getName() << std::endl;
    Board.setShipToSquareRange(Battleship, 1, 2, 3, 4);


    return 0;
}
