#include "ball.h"
#include "player.h"
#include "game.h"
#include <cmath>
#include <math.h>
#include "map.h"


Ball::Ball(SDL_Renderer* ren, int x, int y): GameObject("assets/ball.png", ren, x, y) {
    src_rect.h = dest_rect.h = BALL_SIZE;
    src_rect.w = dest_rect.w = BALL_SIZE;
    speed = 0;
    on_start = true;
}

void Ball::update(std::vector<GameObject*> entities) {
    if (on_start == true) {
        update_on_start(entities);
    }
    else {
        update_in_game(entities);
}
    GameObject::update(entities);
}

void Ball::update_on_start(std::vector<GameObject*> entities) {
    for (auto entity : entities) {
        if (typeid(*entity) == typeid(Player)) {
            yvel = entity->get_yvel();
            speed = entity->get_speed();
        }
    }    
}

void Ball::update_in_game(std::vector<GameObject*> entities) {
    check_collision(entities);
    check_is_out(entities);
}

void Ball::check_collision(std::vector<GameObject*> entities) {
for (auto entity: entities) {
        


    if (collide(entity)==1 and entity!=this) {
        
        int intersect_y = ypos;
        float relative_intersect_y = (entity->get_ypos()+(RACKET_HEIGHT/2)) - intersect_y;

        float normalizedRelativeIntersectionY = (relative_intersect_y/(RACKET_HEIGHT/2));
        float bounce_angle = normalizedRelativeIntersectionY * MAXBOUNCEANGLE;


        xvel = cos(bounce_angle);
        yvel = -sin(bounce_angle);

        if (typeid(*entity) == typeid(Enemy)) {xvel = -xvel;}
    }
    if (ypos < 0) {
            ypos = -ypos;
            yvel = -yvel;
        }
    else if (ypos + BALL_SIZE > SCREEN_HEIGHT - 1) {
            ypos = SCREEN_HEIGHT - BALL_SIZE -1;
            yvel = -yvel;
    }
    }
}

void Ball::check_is_out(std::vector<GameObject*> entities) {
    if (xpos < 0) {
        Game::enemy_count->update_count();
        reset(entities);
    }
    if (xpos > SCREEN_WIDTH) {
        Game::player_count->update_count();
        reset(entities);
    }
}

void Ball::start() {
    if (on_start == true) {
    on_start = false;
    xvel = 1;
    yvel = 0;
    speed = 5;
    }
}

void Ball::reset(std::vector<GameObject*> entities) {
    on_start = true;
for (auto entity : entities) {
        if (typeid(*entity) == typeid(Player)) {
            xpos = entity->get_xpos() + RACKET_WIDTH;
            ypos = entity->get_ypos() + RACKET_HEIGHT / 2;
        }
    }    
    xvel = 0;
    yvel = 0;
}