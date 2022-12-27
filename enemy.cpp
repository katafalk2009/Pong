#include "enemy.h"
#include "ball.h"

Enemy::Enemy(SDL_Renderer* ren, int x, int y): Racket(ren, x, y) {
    speed = 5;
}

void Enemy::update(std::vector<GameObject*> entities) {
    move(entities);
    Racket::update(entities);

}
void Enemy::move(std::vector<GameObject*> entities) {
    for (auto entity: entities) {
    if (typeid(*entity) == typeid(Ball) ) {
        if (entity->get_ypos()+(BALL_SIZE/2) < ypos+(RACKET_HEIGHT/2)) {
            yvel = -1 * abs(entity->get_yvel());
        }
        else if (entity->get_ypos()+(BALL_SIZE/2) > ypos+(RACKET_HEIGHT/2))  {
            yvel = 1 * abs(entity->get_yvel());
        }
        else yvel = 0;
    }
}
}