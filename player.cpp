#include "player.h"

Player::Player(SDL_Renderer* ren, int x, int y): Racket(ren, x, y) {
    speed = PLAYER_SPEED;
    up = down = false;
}

void Player::update(std::vector<GameObject*> entities) {
        if (up == true) {
        yvel = -1;
    }
    else if (down == true) {
        yvel = 1;
    }
    else {
        yvel = 0;
    }
    Racket::update(entities);
}