#pragma once
#include "racket.h"

class Player: public Racket {
public:
    Player(SDL_Renderer* ren, int x, int y);
    ~Player() {}
    void update(std::vector<GameObject*> entities) override;
};