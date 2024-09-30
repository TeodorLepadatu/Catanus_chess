#include <iostream>
#include "Abstract_piece.h"
#ifndef CHESS_WITH_CATAN_KNIGHT_H
#define CHESS_WITH_CATAN_KNIGHT_H


class Knight:public Abstract_piece {
public:
    virtual std::vector<int> move();
};


#endif //CHESS_WITH_CATAN_KNIGHT_H
