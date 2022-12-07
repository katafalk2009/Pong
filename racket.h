#pragma once
#include "gameobject.h"

class Racket: public GameObject {
public:
    Racket(SDL_Renderer* ren, int x, int y);
    ~Racket() {}
};