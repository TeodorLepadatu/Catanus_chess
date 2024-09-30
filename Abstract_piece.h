
#include <iostream>
#include <vector>
#ifndef CHESS_WITH_CATAN_ABSTRACT_PIECE_H
#define CHESS_WITH_CATAN_ABSTRACT_PIECE_H


class Abstract_piece {
private:
public:
    virtual std::vector<int> move() = 0;
};


#endif
