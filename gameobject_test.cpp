#include "gameobject.h"
#include <gtest/gtest.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>


TEST(GameObjectTest, GameObjectCollide) {
  SDL_Renderer* ren;
  GameObject* obj = new GameObject("assets/ball.png", ren, 0, 0);
  GameObject* obj2 = new GameObject("assets/ball.png", ren, 32, 0);
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