#include <SDL2/SDL_ttf.h>
#include "texture_manager.h"
#include <string>

SDL_Texture* TextureManager::loadTexture(const char* filename, SDL_Renderer* ren) {
    SDL_Surface* tmpSurface = IMG_Load(filename);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(ren, tmpSurface);
    SDL_FreeSurface(tmpSurface);
    return texture;
}
void TextureManager::draw(SDL_Renderer* ren, SDL_Texture* tex, SDL_Rect src, SDL_Rect dest) {
    SDL_RenderCopy(ren, tex, &src, &dest);
}

SDL_Texture* TextureManager::loadMessage(int count, SDL_Renderer* ren) {
    TTF_Init();
    TTF_Font* sans = TTF_OpenFont("assets/OpenSans-Bold.ttf", 60);
    SDL_Color black = {115, 147, 179};
    SDL_Surface* surfaceMessage = TTF_RenderText_Solid(sans, std::to_string(count).c_str(), black);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(ren, surfaceMessage);
    SDL_FreeSurface(surfaceMessage);
    return texture;
}



