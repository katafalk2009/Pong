#pragma once
#include "racket.h"

static const int ENEMY_SPEED = 5;

class Enemy: public Racket {
public:
    Enemy(SDL_Renderer* ren, int x, int y);
    ~Enemy() {}
    void update(std::vector<GameObject*> entities) override;
    void move(std::vector<GameObject*> entities);
};