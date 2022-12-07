#pragma once
#include "gameobject.h"
#include <vector>

class Ball: public GameObject {
public:
    Ball(SDL_Renderer* ren, int x, int y);
    ~Ball() {}
    void update(std::vector<GameObject*> entities) override;

};