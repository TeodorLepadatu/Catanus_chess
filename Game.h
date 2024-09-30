//
// Created by TEO on 9/30/2024.
//

#ifndef CHESS_WITH_CATAN_GAME_H
#define CHESS_WITH_CATAN_GAME_H


class Game {
private:
    Game() = default;
public:
    Game& operator=(const Game&) = delete;
    static Game getInstance();
};


#endif //CHESS_WITH_CATAN_GAME_H
