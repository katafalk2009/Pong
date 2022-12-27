#include "player.h"

Player::Player(SDL_Renderer* ren, int x, int y): Racket(ren, x, y) {
    speed = 3;
    
}

void Player::update(std::vector<GameObject*> entities) {
        if (up == true) {
        yvel = -1;
    }
    else if (down == true) {
        yvel = 1;
    }
    else {
        yvel=0;
    }
    if (left == true) {
        xvel = -1;
    }
    else if (right == true) {
        xvel = -1;
    }
    else {
        xvel = 0;
    }
    Racket::update(entities);

}