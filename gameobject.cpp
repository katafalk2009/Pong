#include "gameobject.h"
#include "texture_manager.h"

GameObject::GameObject(const char* texture, SDL_Renderer* ren, int x, int y): xpos(x), ypos(y) {
    renderer = ren;
    obj_texture = TextureManager::loadTexture(texture, renderer);
    src_rect.h = dest_rect.h= 32;
    src_rect.w = dest_rect.w = 32;
    src_rect.x = 0;
    src_rect.y = 0;
}

void GameObject::update(std::vector<GameObject*> entities) {
    xpos+=xvel*speed;
    ypos+=yvel*speed;
    dest_rect.x = xpos;
    dest_rect.y = ypos;
}

void GameObject::render() {
    SDL_RenderCopy(renderer, obj_texture, &src_rect, &dest_rect);
}

bool GameObject::collide(GameObject* obj) {
    return (std::max(dest_rect.x, obj->dest_rect.x) < std::min(dest_rect.x + dest_rect.w, obj->dest_rect.x + obj->dest_rect.w))
     && (std::max(dest_rect.y, obj->dest_rect.y) < std::min(dest_rect.y + dest_rect.h, obj->dest_rect.y + obj->dest_rect.h));
}