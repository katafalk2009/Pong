#pragma once
#include "gameobject.h"
#include "ball.h"
#include "enemy.h"
#include "player.h"
#include <string>

class GameObjectFactory {
  public:
    GameObject* create(std::string asset, SDL_Renderer* ren, int x, int y);
};
