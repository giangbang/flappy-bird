#ifndef PILE_H
#define PILE_H

#include <vector>
#include "mySDL.h"
#include <iostream>

extern std::vector<position> posPile;

class pile : LTexture
{
public:
    bool init();

    void Free();

    void render();

    void update();

    int width() {return getWidth();}

    int height() {return getHeight();}

};

#endif // PILE_H
