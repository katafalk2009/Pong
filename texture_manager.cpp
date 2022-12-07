#include "texture_manager.h"

SDL_Texture* TextureManager::loadTexture(const char* filename, SDL_Renderer* ren) {
    SDL_Surface* tmpSurface = IMG_Load(filename);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(ren, tmpSurface);
    SDL_FreeSurface(tmpSurface);
    return texture;
}
void TextureManager::draw(SDL_Renderer* ren, SDL_Texture* tex, SDL_Rect src, SDL_Rect dest) {
    SDL_RenderCopy(ren, tex, &src, &dest);
}
