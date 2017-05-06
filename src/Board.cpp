#include "../include/Board.h"

Board::Board() { reset(); }
Board::~Board() { /* dtor */ }

void Board::reset()
{

}

// what piece? who owns it? (possibly return piece object reference which has properties)
Ship* Board::getShipAtSquare(int x, int y)
{
    // find what object (if any) is at the coordinates provided
    // Ship ShipAtSquare; // temporary so the compiler doesnt complain
    return &red_carrier;
}

// what piece? where?
void Board::setShipToSquareRange(Ship &Ship, int xi, int yi, int xf, int yf)
{
    // go to coordinates in board
    // set reference to an object

    std::cout << "the piece is " << Ship.getName() << std::endl;
    return;
}
