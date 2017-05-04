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

    // calling method exampleMethod(int n) from game object. requires an instance
    game.exampleMethod(3);

    // the static keyword allows you to call functions with an instance
    // notice how it's not being called through an object!
    BSGame::iDontNeedAnInstance();

    return 0;
}
