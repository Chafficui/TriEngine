//
// Created by felix on 12.03.2023.
//

#ifndef TRIENGINE_TILEMAP_H
#define TRIENGINE_TILEMAP_H
#include <SDL.h>


class TileMap {
public:
    TileMap();
    ~TileMap();

    void LoadMap(int arr[20][25]);
    void DrawMap();

private:
    SDL_Rect src, dest;

    SDL_Texture* dirt;
    SDL_Texture* grass;
    SDL_Texture* water;

    int map[20][25];
};


#endif //TRIENGINE_TILEMAP_H
