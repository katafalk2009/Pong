#pragma once
#include "gameobject.h"
#include <vector>

static const float MAXBOUNCEANGLE = 5*M_PI/12;
static const int BALL_SIZE = 16;
static const int BALL_START_SPEED = 5;

class Ball: public GameObject {
public:
    Ball(SDL_Renderer* ren, int x, int y);
    ~Ball() {}
    void update(std::vector<GameObject*> entities) override;
    void start();
    
private:
    bool on_start;
    void update_on_start(std::vector<GameObject*> entities);
    void update_in_game(std::vector<GameObject*> entities);
    void check_collision(std::vector<GameObject*> entities);
    void check_is_out(std::vector<GameObject*> entities);
    void reset(std::vector<GameObject*> entities);
};