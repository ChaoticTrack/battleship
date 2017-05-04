#include "../include/BSGame.h"

void BSGame::exampleMethod(int n)
{
    std::cout << "This was called from exampleMethod!" << std::endl;
    std::cout << "Here's the number, " << n << std::endl;
    return;
}

void BSGame::iDontNeedAnInstance()
{
    std::cout << "The static keyword allows you to calll functions without \n"
        << "an instance of the class (you don't need an actual object)." << std::endl;
    return;
}
