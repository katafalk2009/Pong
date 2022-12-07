#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "gameobjectfactory.h"
#include <vector>
#include "map.h"

class Game {
public:
    Game();
    ~Game();
    void loop();
    void update(std::vector<GameObject*> entities);
    void input();
    void render();
    void createMap();
private:
    SDL_Renderer* ren;
    SDL_Window* win;
    bool running;
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;
    Uint32 frameStart;
    int frameTime;
    GameObjectFactory* factory;
    Map* map;
    std::vector<GameObject*> entities;
};