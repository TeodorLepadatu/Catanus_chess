
#include "Game.h"

Game Game::getInstance() {
    static Game instance;
    return instance;
}
