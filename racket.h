#pragma once
#include "gameobject.h"

static int RACKET_WIDTH = 16;
static int RACKET_HEIGHT = 160;

class Racket: public GameObject {
public:
    Racket(SDL_Renderer* ren, int x, int y);
    ~Racket() {}
    void update(std::vector<GameObject*> entities) override;
};