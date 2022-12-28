#include "gamecount.h"
#include "texture_manager.h"

GameCount::GameCount(SDL_Renderer* ren, int x, int y) {
    renderer = ren;
    count = 0;
    count_texture = TextureManager::loadMessage(count, renderer);
    src_rect.h = dest_rect.h = GAMECOUNT_HEIGHT;
    src_rect.w = dest_rect.w = GAMECOUNT_WIDTH;
    src_rect.x = 0;
    dest_rect.x = x;
    src_rect.y = 0;
    dest_rect.y = y;
}

void GameCount::update_count() {
    ++count;
    count_texture = TextureManager::loadMessage(count, renderer);
}

void GameCount::render() {
    SDL_RenderCopy(renderer, count_texture, &src_rect, &dest_rect);
}
