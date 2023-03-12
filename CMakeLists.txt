cmake_minimum_required(VERSION 3.23)
project(TriEngine)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(SDL2 REQUIRED)
find_package(SDL2_mixer REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(SDL2_image REQUIRED)

add_executable(TriEngine main.cpp Game.cpp Game.h rendering/texture/TextureManager.cpp rendering/texture/TextureManager.h rendering/GameRenderer.cpp rendering/GameRenderer.h ecs/EntityComponentSystem.h ecs/components/TransformComponent.h ecs/components/SpriteComponent.cpp ecs/components/SpriteComponent.h ecs/Components.h utils/math/Vector2D.cpp utils/math/Vector2D.h)