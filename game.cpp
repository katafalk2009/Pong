#include "game.h"
#include "texture_manager.h"

GameCount* Game::player_count = nullptr;
GameCount* Game::enemy_count = nullptr;

Game::Game() {
    SDL_Init(0);
    SDL_CreateWindowAndRenderer(SCREEN_WIDTH, SCREEN_HEIGHT, 0, &win, &ren);
    SDL_SetWindowTitle(win, "Pong");
    running = true;
    frameStart = SDL_GetTicks();
    map = new Map(ren);
    factory = new GameObjectFactory;
    player = factory->create("player", ren, PLAYER_START_X, PLAYER_START_Y);
    ball = factory->create("ball", ren, BALL_START_X, BALL_START_Y);
    enemy = factory->create("enemy", ren, SCREEN_WIDTH - PLAYER_START_X, PLAYER_START_Y);
    player_count = new GameCount(ren, PLAYER_COUNT_X, PLAYER_COUNT_Y);
    enemy_count = new GameCount(ren, ENEMY_COUNT_X, ENEMY_COUNT_Y);
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
    input();
    update(entities);
    render();
    SDL_Delay(1000/60);
    // TODO: refactor fps delay
    // frameTime = SDL_GetTicks() - frameStart;
    // if (frameTime < frameDelay) {
    // SDL_Delay(frameDelay - frameTime);
    // frameStart = SDL_GetTicks();
    // }
    }
}
void Game::render() {
    SDL_RenderClear(ren);
    map->drawmap();
    player_count->render();
    enemy_count->render();
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
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            running = false;
        }
        if (event.type == SDL_KEYDOWN and event.key.keysym.sym == SDLK_ESCAPE) {
            running = false;
            }
        if (event.type == SDL_KEYDOWN and
         (event.key.keysym.sym == SDLK_w || event.key.keysym.sym == SDLK_UP || event.key.keysym.sym == SDLK_a || event.key.keysym.sym == SDLK_LEFT)) {
            player->up = true;
            }
        if (event.type == SDL_KEYDOWN and
         (event.key.keysym.sym == SDLK_s || event.key.keysym.sym == SDLK_DOWN || event.key.keysym.sym == SDLK_d || event.key.keysym.sym == SDLK_RIGHT)) {
            player->down = true;
            }
        if (event.type == SDL_KEYUP and
        (event.key.keysym.sym == SDLK_w || event.key.keysym.sym == SDLK_UP || event.key.keysym.sym == SDLK_a || event.key.keysym.sym == SDLK_LEFT)) {
            player->up = false;
            }
        if (event.type == SDL_KEYUP and
         (event.key.keysym.sym == SDLK_s || event.key.keysym.sym == SDLK_DOWN || event.key.keysym.sym == SDLK_d || event.key.keysym.sym == SDLK_RIGHT)) {
            player->down = false;
            }
        if (event.type == SDL_KEYDOWN and (event.key.keysym.sym == SDLK_SPACE )) {
            ball->start();
            }
        }
        
    }
