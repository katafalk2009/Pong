#pragma once
#include "gameobject.h"

class MapTile: public GameObject {
public:
    MapTile(SDL_Renderer* ren, int x, int y);
    ~MapTile() {}
};