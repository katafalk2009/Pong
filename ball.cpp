#include "ball.h"

Ball::Ball(SDL_Renderer* ren, int x, int y): GameObject("assets/ball.png", ren, x, y) {
    xvel=1;
    yvel=1;
}
void Ball::update(std::vector<GameObject*> entities) {
    for (auto entity: entities) {
        
    if (collide(entity)==1 and this!=entity) {
        xvel=-xvel;
        yvel=-yvel;
    }
    }
    GameObject::update(entities);
}
