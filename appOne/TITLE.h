#pragma once
#include "GAME_SCENE.h"
class TITLE :
    public  GAME_SCENE
{
public:
    TITLE(class GAME* game) : GAME_SCENE(game) {}
    void init();
    void draw() {
        clear(0, 0, 255);
        fill(255);
        printSize(width / 5 * 2);
        print("Title");

    }
    void nextScene();
};
