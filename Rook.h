#include <iostream>
#include "Abstract_piece.h"
#ifndef CHESS_WITH_CATAN_ROOK_H
#define CHESS_WITH_CATAN_ROOK_H


class Rook:public Abstract_piece {
public:
    virtual std::vector<int> move();
};


#endif //CHESS_WITH_CATAN_ROOK_H
