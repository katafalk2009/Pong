#pragma once

#include "game.h"

class TextureManager {
    public:
        static SDL_Texture* loadTexture(const char* filename, SDL_Renderer* ren);
        static SDL_Texture* loadMessage(int count, SDL_Renderer* ren);
        static void draw(SDL_Renderer* ren, SDL_Texture* tex, SDL_Rect src, SDL_Rect dest);
};