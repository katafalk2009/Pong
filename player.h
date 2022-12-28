#pragma once
#include "racket.h"

static const int PLAYER_SPEED = 3;

class Player: public Racket {
public:
    Player(SDL_Renderer* ren, int x, int y);
    ~Player() {}
    void update(std::vector<GameObject*> entities) override;
    bool up, down;
};