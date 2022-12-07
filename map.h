#pragma once
#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>

struct Tile {
    std::string asset;
    int x;
    int y;

};

class Map {
public:
    Map(SDL_Renderer* ren);
    ~Map();

    void loadmap(std::vector<std::vector<int>> lvl_map);
    void drawmap();
    void loadTiles();
    std::vector<Tile> tiles;
private:
    SDL_Rect src, dest;
    SDL_Texture* dirt;
    SDL_Texture* grass;
    SDL_Texture* water;
    SDL_Renderer* renderer;
    std::vector<std::vector<int>> map;

};
