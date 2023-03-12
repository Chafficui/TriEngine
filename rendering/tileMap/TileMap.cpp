//
// Created by felix on 12.03.2023.
//

#include "TileMap.h"
#include "../texture/TextureManager.h"

int lvl1[20][25] = {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
};

TileMap::TileMap() {
    dirt = TextureManager::loadTexture("assets/dirt.png");
    grass = TextureManager::loadTexture("assets/grass.png");
    water = TextureManager::loadTexture("assets/water.png");

    LoadMap(lvl1);

    src.x = src.y = 0;
    src.w = src.h = dest.w = dest.h = 32;
    dest.x = dest.y = 0;
}



void TileMap::DrawMap() {
    int type = 0;

    for (int row = 0; row < 20; row++) {
        for(int column = 0; column < 25; column++) {
            type = map[row][column];

            dest.x = column * 32;
            dest.y = row * 32;

            switch (type) {
                case 0:
                    TextureManager::draw(water, src, dest);
                    break;
                case 1:
                    TextureManager::draw(grass, src, dest);
                    break;
                case 2:
                    TextureManager::draw(dirt, src, dest);
                    break;
                default:
                    break;
            }
        }
    }
}

void TileMap::LoadMap(int arr[20][25]) {
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 25; col++) {
            map[row][col] = arr[row][col];
        }
    }
}

TileMap::~TileMap() {
    SDL_DestroyTexture(dirt);
    SDL_DestroyTexture(grass);
    SDL_DestroyTexture(water);
}
