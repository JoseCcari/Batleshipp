#ifndef MAPA_H
#define MAPA_H
#include "tools.h"
//#include"Game.h"

class Game;

//mapa
class  Mapa{
protected:
    Game *game;
    BITMAP *buffer;
    int width,height;

public:
    char mapa[MAXFILAS][MAXCOLS]={
            "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
            "X   |                        X",
            "X      |     X        X   X  X",
            "X|           X               X",
            "X        XXXXXXXXXXXX        X",
            "X                            X",
            "X |                       |  X",
            "X            O           X   X",
            "X      O                     X",
            "X  |        XXXXXXXXX        X",
            "X                            X",
            "X               X        X   X",
            "X                            X",
            "X       O                    X",
            "X   |       XXXXXXXXX        X",
            "X           X       X        X",
            "X      |    |    |           X",
            "X                    |   |   X",
            "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        };


    Mapa(Game*g,int w,int h);
    ~Mapa();
    int w();
    int h();
    void update();
    void draw();

};

#endif // MAPA_H
