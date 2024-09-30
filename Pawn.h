#include <iostream>
#include "Abstract_piece.h"
#ifndef CHESS_WITH_CATAN_PAWN_H
#define CHESS_WITH_CATAN_PAWN_H


class Pawn:public Abstract_piece {
public:
    virtual std::vector<int> move();
};


#endif //CHESS_WITH_CATAN_PAWN_H
