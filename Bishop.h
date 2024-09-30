#include <iostream>
#include "Abstract_piece.h"
#ifndef CHESS_WITH_CATAN_BISHOP_H
#define CHESS_WITH_CATAN_BISHOP_H


class Bishop:public Abstract_piece {
public:
    virtual std::vector<int> move();
};


#endif //CHESS_WITH_CATAN_BISHOP_H
