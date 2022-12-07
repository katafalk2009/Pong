#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <vector>

class GameObject {
    public:
        GameObject(const char* texture, SDL_Renderer* ren, int x, int y);
        virtual ~GameObject() {}

        virtual void update(std::vector<GameObject*> entities);
        void render();
        bool collide(GameObject* obj);
        SDL_Texture* obj_texture;
    protected:
        int xpos;
        int ypos;


        SDL_Rect src_rect;
        SDL_Rect dest_rect;
        SDL_Renderer* renderer;

        int speed = 1;
        int xvel = 0;
        int yvel = 0;

};