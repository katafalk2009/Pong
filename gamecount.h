#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

static const int GAMECOUNT_WIDTH = 128;
static const int GAMECOUNT_HEIGHT = 256;

class GameCount {
public:
    GameCount(SDL_Renderer* ren, int x, int y);
    SDL_Texture* count_texture;

    void update_count();
    void render();
private:
    int count;
    SDL_Rect src_rect;
    SDL_Rect dest_rect;
    SDL_Renderer* renderer;
};