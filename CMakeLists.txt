cmake_minimum_required(VERSION 3.9)
project(Pong CXX)


find_package(SDL2 REQUIRED)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

INCLUDE(FindPkgConfig)
PKG_SEARCH_MODULE(SDL2IMAGE REQUIRED SDL2_image>=2.0.0)
PKG_SEARCH_MODULE(SDL2_TTF REQUIRED SDL2_ttf>=2.0.0)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIRS} ${SDL2_TTF_INCLUDE_DIRS} ${PROJECT_NAME})
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set (SOURCES 
      main.cpp
      ball.cpp
      enemy.cpp
      game.cpp
      gameobject.cpp
      gameobjectfactory.cpp
      map.cpp
      player.cpp
      racket.cpp
      texture_manager.cpp
      gamecount.cpp
    )


add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARIES} ${SDL2_TTF_LIBRARIES})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${PROJECT_NAME})
FILE(COPY assets DESTINATION "${CMAKE_BINARY_DIR}")

# compile test

set (TEST_SOURCES 
      ball.cpp
      enemy.cpp
      game.cpp
      gameobject.cpp
      gameobjectfactory.cpp
      map.cpp
      player.cpp
      racket.cpp
      texture_manager.cpp
      gamecount.cpp
      tests/gameobject_test.cpp
    )

add_executable(${PROJECT_NAME}_test ${TEST_SOURCES})
target_include_directories(${PROJECT_NAME}_test PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME}_test ${CONAN_LIBS} ${SDL2_LIBRARIES} ${SDL2_TTF_LIBRARIES} ${SDL2IMAGE_LIBRARIES})