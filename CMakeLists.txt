cmake_minimum_required(VERSION 3.23)
project(TriEngine)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

set(SDL2_PATH "C:/Users/felix/Documents/SDL2") # change this to your SDL2 path
set(SDL2_image_PATH "C:/Users/felix/Documents/SDL2_image") # change this to your SDL2_image path

set(SDL2_DIR "${SDL2_PATH}/cmake")
set(SDL2_image_DIR "${SDL2_image_PATH}/cmake")

set(SDL2_INCLUDE_DIRS "${SDL2_PATH}/include")
set(SDL2_IMAGE_INCLUDE_DIRS "${SDL2_image_PATH}/include")

set(SDL2_LIBRARIES "${SDL2_PATH}/lib/x64/SDL2.lib;${SDL2_PATH}/lib/x64/SDL2main.lib")
set(SDL2_IMAGE_LIBRARIES "${SDL2_image_PATH}/lib/x64/SDL2_image.lib")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})

add_executable(TriEngine main.cpp Game.cpp Game.h rendering/texture/TextureManager.cpp rendering/texture/TextureManager.h rendering/GameRenderer.cpp rendering/GameRenderer.h ecs/EntityComponentSystem.h ecs/components/PositionComponent.h ecs/components/SpriteComponent.cpp ecs/components/SpriteComponent.h)

target_link_libraries(TriEngine ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})