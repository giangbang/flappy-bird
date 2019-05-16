#ifndef MYGAME_H
#define MYGAME_H

#include "bird.h"
#include "pile.h"
#include "background.h"
#include "Sound.h"
#include <string>

class game : LTexture
{
public:
    struct input{
        enum type { QUIT, CLICK, NONE };
        type Type;
    };
    input UserInput;
    bird Fapy;
    pile Pile;
    sound Sound;
    background Background;
    leaf FallingLeaf;
public:
    game();

    ~game();

    void takeInput();

    bool isQuit() {return quit; }

    void openFont( std::string );

    void display();

    bool initGraphic();

    void releaseGraphic();

    int getPileWidth() { return Pile.width();}

    int getPileHeight() {  return Pile.height();}

    void renderScore();

    bool isLost() {return lost;}

    void LoadText(std::string t);

    void renderText();

    void Restart();

    int getCountedFrame();

};

#endif // MYGAME_H
