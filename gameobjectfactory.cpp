#include "gameobjectfactory.h"

GameObject* GameObjectFactory::create(std::string asset, SDL_Renderer* ren, int x, int y) {
      if (asset == "ball") {
            return new Ball(ren, x, y);
      }
      else if (asset == "player") {
            return new Player(ren, x, y);
      }
      else if (asset == "enemy") {
            return new Enemy(ren, x, y);
      }
      else if (asset == "maptile") {
            return new MapTile(ren, x, y);
      }
      else {
            return nullptr;
      }
}
