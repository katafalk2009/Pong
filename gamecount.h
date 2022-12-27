#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class GameCount {
public:
    GameCount(SDL_Renderer* ren, int x, int y);
    ~GameCount();
    SDL_Texture* count_texture;

    void update_count();
    void render();
private:
    int count;
    SDL_Rect src_rect;
    SDL_Rect dest_rect;
    SDL_Renderer* renderer;
};