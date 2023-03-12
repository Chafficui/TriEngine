cmake_minimum_required(VERSION 3.23)
project(TriEngine)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})

add_executable(TriEngine main.cpp Game.cpp Game.h rendering/texture/TextureManager.cpp rendering/texture/TextureManager.h rendering/GameRenderer.cpp rendering/GameRenderer.h ecs/EntityComponentSystem.h ecs/components/TransformComponent.h ecs/components/SpriteComponent.cpp ecs/components/SpriteComponent.h ecs/Components.h)

target_link_libraries(TriEngine ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})