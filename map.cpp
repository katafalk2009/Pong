#include "map.h"
#include "texture_manager.h"
#include "gameobjectfactory.h"


std::vector<std::vector<int>> lvl1 = {
    {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
};


Map::Map(SDL_Renderer* ren): renderer(ren) {
    //dirt = TextureManager::loadTexture("assets/dirt.png", ren);
    grass = TextureManager::loadTexture("assets/grass.png", ren);
    water = TextureManager::loadTexture("assets/water.png", ren);
    loadmap(lvl1);
    src.x = src.y = dest.x = dest.y = 0;
    src.w = src.h = dest.h = dest.w = 32; 
    loadTiles();
}

void Map::loadmap(std::vector<std::vector<int>> lvl_map) {
    map.resize(20);
    for (int row = 0; row < 20; row++) {
        map[row].resize(25);
        for (int column = 0; column < 25; column++) {
            map[row][column] = lvl_map[row][column];
        }
    }

}

void Map::drawmap() {
    for (int row = 0; row < 20; row++) {
        for (int column = 0; column < 25; column++) {
            int type = map[row][column];
            dest.x = column * 32;
            dest.y = row * 32;
            if (type == 0) {
                TextureManager::draw(renderer, grass, src, dest);
            }
            else if (type == 2) {
                tiles.push_back(Tile{"assets/water.png", dest.x, dest.y});
                }

            }
        }
    }
void Map::loadTiles() {
    for (int row = 0; row < 20; row++) {
        for (int column = 0; column < 25; column++) {
            int type = map[row][column];
            dest.x = column * 32;
            dest.y = row * 32;
            if (type == 2) {
                tiles.push_back(Tile{"assets/water.png", dest.x, dest.y});
                }

            }
        }
}