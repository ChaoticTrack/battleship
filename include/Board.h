#ifndef BOARD_H
#define BOARD_H

#include <iostream>

#include "../include/Ship.h"

class Board
{
    public:
        Board(); // ctor
        ~Board(); // dtor
        void reset();


        Ship* getShipAtSquare(int x, int y); // what piece? who owns it? (possibly return piece object reference which has properties)
        void setShipToSquareRange(Ship &Ship, int xi, int yi, int xf, int yf); // what piece? where?

    protected:
    private:
        Ship red_carrier,
            red_battleship,
            red_cruiser,
            red_submarine,
            red_destroyer;
        Ship blue_carrier,
            blue_battleship,
            blue_cruiser,
            blue_submarine,
            blue_destroyer;
};

#endif // BOARD_H
