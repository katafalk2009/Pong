#include "gameobject.h"
#include <gtest/gtest.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>


TEST(GameObjectTest, GameObjectCollide) {
  SDL_Renderer* ren;
  GameObject* obj = new GameObject("assets/ball.png", ren, 0, 50);
  GameObject* obj2 = new GameObject("assets/ball.png", ren, 31, 50);
  EXPECT_TRUE(obj->collide(obj2));
  EXPECT_TRUE(obj2->collide(obj));
}

TEST(GameObjectTest, GameObjectCollideNot) {
  SDL_Renderer* ren;
  GameObject* obj = new GameObject("assets/ball.png", ren, 500, 500);
  GameObject* obj2 = new GameObject("assets/ball.png", ren, 0, 0);
  EXPECT_FALSE(obj->collide(obj2));
  EXPECT_FALSE(obj2->collide(obj));
}


TEST(GameObjectTest, GameObjectUpdate) {
  SDL_Renderer* ren;
  std::vector<GameObject*> entities = {};
  class GameObjectForTest: public GameObject {
    public:
    GameObjectForTest(SDL_Renderer* ren, int x, int y, int _speed, int vel_x, int vel_y): GameObject("assets/ball.png", ren, x, y) {
      xvel = vel_x;
      yvel = vel_y;
      speed = _speed;
    }
  };
  GameObject* obj = new GameObjectForTest(ren, 500, 100, 1, 1, 10);
  obj->update(entities);
  EXPECT_EQ(obj->get_xpos(), 501);
  EXPECT_EQ(obj->get_ypos(), 110);
}