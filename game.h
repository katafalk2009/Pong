#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "gameobjectfactory.h"
#include <vector>
#include "map.h"
#include "gamecount.h"
#include "racket.h"
#include <memory>

static const int SCREEN_WIDTH = 800;
static const int SCREEN_HEIGHT = 640;
static const int PLAYER_START_X = 100;
static const int PLAYER_START_Y = 100;
static const int BALL_START_X = PLAYER_START_X + RACKET_WIDTH;
static const int BALL_START_Y = PLAYER_START_Y + RACKET_HEIGHT / 2;
static const int PLAYER_COUNT_X = 50;
static const int PLAYER_COUNT_Y = 50;
static const int ENEMY_COUNT_X = 600;
static const int ENEMY_COUNT_Y = 50;


class Game {
public:
    Game();
    ~Game();
    void loop();
    void update(std::vector<GameObject*> entities);
    void input();
    void render();
    GameObject* player_;
    GameObject* ball_;
    GameObject* enemy_;
    Ball* ball;
    Player* player;
    static GameCount* player_count;
    static GameCount* enemy_count;
private:
    SDL_Renderer* ren;
    SDL_Window* win;
    bool running;
    const int FPS = 60;
    const int frame_delay = 1000 / FPS;
    GameObjectFactory* factory;
    Map* map;
    std::vector<GameObject*> entities;
};