#include "game.h"
#include "texture_manager.h"
#include <iostream>

Game::Game() {
    SDL_Init(0);
    SDL_CreateWindowAndRenderer(800, 640, 0, &win, &ren);
    SDL_SetWindowTitle(win, "Pong");
    running = true;
    frameStart = SDL_GetTicks();
    map = new Map(ren);
    factory = new GameObjectFactory;
    createMap();
    auto player = factory->create("player", ren, 100, 100);
    auto ball = factory->create("ball", ren, 150, 100);
    auto enemy = factory->create("enemy", ren, 600, 100);
    entities.push_back(player);
    entities.push_back(ball);
    entities.push_back(enemy);
    loop();
}
Game::~Game(){
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
}
void Game::loop() {
    while (running) {
    render();
    input();
    update(entities);
    frameTime = SDL_GetTicks() - frameStart;
    if (frameTime < frameDelay) {
    SDL_Delay(frameDelay - frameTime);
    frameStart = SDL_GetTicks();
    }
    }
}
void Game::render() {
    SDL_RenderClear(ren);
    map->drawmap();
    for (auto entity: entities) {
        entity->render();
    }
    SDL_RenderPresent(ren);
}
void Game::update(std::vector<GameObject*> entities) {
for (auto entity: entities) {
        entity->update(entities);
    }
}
void Game::input() {
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            running = false;
            break;
        default:
            break;
    }
}
void Game::createMap() {
    for (auto tile: map->tiles) {
        entities.push_back(factory->create("maptile", ren, tile.x, tile.y));
    }
}