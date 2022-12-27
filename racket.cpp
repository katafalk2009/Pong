#include "racket.h"
#include "game.h"

Racket::Racket(SDL_Renderer* ren, int x, int y): GameObject("assets/racket.png", ren, x, y) {
    speed = 2;
    src_rect.h = dest_rect.h = RACKET_HEIGHT;
    src_rect.w = dest_rect.w = RACKET_WIDTH;
}
void Racket::update(std::vector<GameObject*> entities) {
    GameObject::update(entities);
    for (auto entity: entities) {
        
    if (ypos < 0 or ypos > SCREEN_HEIGHT - RACKET_HEIGHT - 1) {
        ypos -= yvel * speed;
        dest_rect.y = ypos;
        yvel = 0;
    }
    }
}