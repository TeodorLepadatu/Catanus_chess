#include <iostream>
#include "Abstract_piece.h"
#ifndef CHESS_WITH_CATAN_KING_H
#define CHESS_WITH_CATAN_KING_H


class King:public Abstract_piece {
public:
    virtual std::vector<int> move();
};


#endif //CHESS_WITH_CATAN_KING_H
