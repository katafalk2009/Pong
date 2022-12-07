#pragma once
#include "racket.h"

class Enemy: public Racket {
public:
    Enemy(SDL_Renderer* ren, int x, int y);
    ~Enemy() {}
};