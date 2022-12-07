#include "ball.h"
#include <iostream>

Ball::Ball(SDL_Renderer* ren, int x, int y): GameObject("assets/ball.png", ren, x, y) {
    xvel=1;
}
void Ball::update(std::vector<GameObject*> entities) {
    for (auto entity: entities) {
        
    if (collide(entity)==1 and this!=entity) {
        std::cout<<entity<<"  "<<this<<std::endl;
        xvel=-xvel;
        yvel=-yvel;
    }
    }
    GameObject::update(entities);
}
